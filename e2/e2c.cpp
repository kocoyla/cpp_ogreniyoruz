#include <iostream>
using namespace std;

int main() {
  const int sınır = 4000000;
  int toplam = 0, a = 1, b = 1, c = 2;
  while (c < sınır) {
    cout << a << " " << b << " " << c << " "; // a ve b'yi yazmadan dene
    toplam += c;
    a = b + c;
    b = c + a;
    c = a + b;
  }
  cout << endl << toplam;
  return 0;
}
