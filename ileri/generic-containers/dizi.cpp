#include <iostream>

using namespace std;

// Ruminations on C++ by Koenig and Moo, Chapter 15 - Sequences, A radical old idea

template <typename T> class Öge;

template <typename T> class Dizi {
public:
  Dizi();
  Dizi(const T& baş, const Dizi& kuyruk);
  Dizi(const Dizi&); // copy constructor
  ~Dizi() { destroy(öge); } // destructor
  Dizi& operator=(const Dizi&); // assignment
  T başı() const;
  Dizi kuyruğu() const;
  bool boşMu() const { return !(bool)this; }
  operator bool() const; // typecast to boolean

private:
  Dizi(Öge<T>* ö);
  void destroy(Öge<T>* öge);

  Öge<T>* öge;
};

template <class T> class Öge {
  friend class Dizi<T>;

  int use;
  const T data;
  Öge* kuyruk;

  Öge(const T& ö, Öge* kuyruk);
  Öge(const T& ö): use(1), data(ö), kuyruk(NULL) { }
};

template <class T> Öge<T>::Öge(const T& ö, Öge<T>* k): use(1), data(ö), kuyruk(k) { if (k) k->use++; }

template <class T> Dizi<T>::Dizi(): öge(NULL) { }

template <class T> Dizi<T>::Dizi(const T& başı, const Dizi& kuyruk): öge(new Öge<T>(başı, kuyruk.öge)) { }

template <class T> Dizi<T>::operator bool() const { return öge != NULL; }

template <class T> Dizi<T>::Dizi(const Dizi<T>& dizi): öge(dizi.öge) { if (öge) öge->use++; }

template <class T> T Dizi<T>::başı() const {
  if (öge) return öge->data;
  else throw "boş dizinin başı";
}

template <class T> Dizi<T>::Dizi(Öge<T>* ö): öge(ö) { if (ö) ö->use++; }

template <class T> Dizi<T> Dizi<T>::kuyruğu() const {
  if (öge) return Dizi<T>(öge->kuyruk);
  else throw "boş dizinin kuyruğu";
}

template <class T> Dizi<T>& Dizi<T>::operator=(const Dizi<T>& dizi) {
  if (dizi.öge) dizi.öge->use++;
  destroy(öge);
  öge = dizi.öge;
  return *this;
}

template <class T> void Dizi<T>::destroy(Öge<T>* öge) {
  while (öge && --öge->use == 0) {
    Öge<T>* kuyruk = öge->kuyruk;
    delete öge;
    öge = kuyruk;
  }
}

typedef Dizi<int> sayılar;

void yaz(const sayılar& slar) {
  if (slar.boşMu()) return;
  cout << slar.başı() << " ";
  sayılar kuyruk{slar.kuyruğu()};
  if (kuyruk) yaz(kuyruk);
}

sayılar son = sayılar();
int main() {
  sayılar dizi(4, son), d2(1, dizi), pi(3, d2);

  cout << "pi dizisi: "; yaz(pi); cout << endl;
  
  if (pi) cout << "Boş değil." << endl;
  cout << (pi.boşMu()?"boş":"dolu") << "." << endl;
  sayılar k1 = pi.kuyruğu(), k2 = k1.kuyruğu();
  cout << pi.başı() << "." << k1.başı() << k2.başı() << endl;
  try {
    cout << k2.kuyruğu().başı();
  } catch(char const* str) {
    cout << "Hata yakalandı: " << str;
  }
  return 0;
}
