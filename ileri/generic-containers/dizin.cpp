// https://www.sololearn.com/en/compiler-playground/cA83Pv3wr8vA
// kocoyla.ogren: https://www.sololearn.com/en/Profile/32978311

#include <iostream>
using namespace std;

// ilk göstergeden başlayarak yaz, ikinci göstergeye gelinceye kadar
template <typename T>
void yaz(T* a, T* b) {
    for(T* p = a; p < b; ++p)
        cout << *p << " ";
    cout << endl;
}

void ikiGösterge() {
    short dizi[]{3, 1, 4, 1, 5, 9, 2, 6, 5, 3}; // array/dizi
    cout << "dizi: ";
    for (auto s:dizi) cout << s << " "; 
    cout << endl;
    cout << "dizinin boyu    : " << sizeof(dizi) << " bayt" << endl;
    cout << "öge türünün boyu: " << sizeof(dizi[0]) << " bayt" << endl;
    int ögeSayısı= sizeof(dizi)/sizeof(dizi[0]);
    cout << "öge sayısı: " << ögeSayısı << endl << endl;

    cout << "dizi: ";
    yaz(dizi, dizi + ögeSayısı);
    cout << "alt kümesi: ";
    yaz(dizi+1, dizi+6); // ikinciden altıncıya kadar 
    cout << "hata! ";
    yaz(dizi, dizi+15);  // dizinin dışına taştı
    cout << endl;
}

template <typename T>
class Dizin { // yeni bir dizi türü tanımlayalım
private: 
    T * p; // ilk ögenin bellekteki adresi
    // p+1 ikincinin adresi, p+2 üçüncünün...
    const int boyu; // öge sayısı
public: 
    Dizin(int b, T* dizi): boyu(b) {
      p = new T[b];
      T* p2 = p;
      for(int i = 0; i < b; ++i) *p2++ = dizi[i];
    }
    T & operator[](int i) {
        if (i < 0 || i >= boyu) { 
            cout << "dizin hatası! i: " << i << " Onun yerine ilk ögeyi kullanıyoruz." << endl; 
            i = 0;
        }
        return p[i];
    }
    void yaz(string adi = "Dizi") {
        cout << adi << ": ";
        T* p2 = p;
        for(int i = 0; i < boyu; ++i) cout << *p2++ << " ";
        cout << endl;
    }
    ~Dizin() { delete [] p; }
};

void diziTürü() {
    string bilgi{"Yeni Dizi türü"};
    cout << bilgi.size() << endl; // neden iki fazla?
    cout << bilgi << endl;
    cout << string(bilgi.size() - 2, '=') << endl;
    short a[]{2, 4, 6, 8, 10};
    // c++11 hata verir <short> ister. c++23'de sorun yok :-)
    Dizin dizi(10, a); // hata! 10 tane sayi yok
    dizi.yaz();
    dizi[-1] = 999;
    dizi[5] = 100; dizi[6] = 200;
    dizi[7] = 300; dizi[8] = 400;
    dizi[9] = 500; dizi[10] = 900;
    dizi.yaz();

    Dizin dizi2(sizeof(a)/sizeof(a[0]), a);
    dizi2.yaz("D2  ");
}
int main() {
    ikiGösterge();
    diziTürü();
}
