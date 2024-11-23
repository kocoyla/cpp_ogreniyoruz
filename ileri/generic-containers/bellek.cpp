#include <iostream>
using namespace std;

void bellek(); // dizilerin bellekteki adreslerini inceleyelim

int main() {
  bellek();
  return 0;
}

void f(int *g) {
  cout << "sizeof(gösterge): " << sizeof(g) << endl;
  int d[] = {1, 3, 5, 7, 6, 4, 2, 0};
  // 4 byte/int * 8 int = 32bytes
  cout << "sizeof(dizi)    : " << sizeof(d) << endl;
}

void bellek() {
  const int N = 10;
  int a[N] = {9, 3, 5, 4, 2};  // bir dizi sayı
  cout << "sizeof(int)     : " << sizeof(int) << endl;
  cout << "sizeof(a)       : " << sizeof(a) << endl;

  f(a);

  cout << "dizi1: ";
  for (int i = 0; i < N; i++) { // dizinin ögeleri üzerinden geçiyoruz
    a[i] *= a[i];
    cout << a[i] << " ";
  }
  cout << endl;

  cout << "dizi2: ";
  for (int s : a)  // daha ileri yöntem. int yerine auto anahtar sözcük de kullanılabilir
    cout << s << " ";
  cout << endl;

  // dizi (array) bellek/hafiza üzerinde arka arkaya kaydediliyor
  int* p = a;  // pointer yani gösterge, a'nın bellek tutulduğu yerin adresi
  int& r = a[0]; // reference to a, yani değişkenin takma adı
  int* son = &(a[9]);
  int* ilk = &(a[0]);
  int* iki = &(a[1]);
  cout << "dizi3: ";
  while (p <= son)
    cout << *p++ << " ";
  cout << endl;
  p = a;

  cout << "a[0]   : " << a[0] << endl;
  cout << "r      : " << r << endl;
  cout << "*p     : " << *p << endl;
  cout << "a      : " << a << endl;
  cout << "&(a[0]): " << &(a[0]) << endl;
  cout << "p      : " << p << endl;
  cout << "&r     : " << &r << endl;

  cout << "ilk    : " << ilk << endl;
  cout << "iki    : " << iki << endl;
  cout << "son    : " << son << endl;

  cout << "iki - ilk: " << iki-ilk << endl;
  cout << "son - ilk: " << son-ilk << endl;

  cout << "Şimdilik..." << endl;
}
