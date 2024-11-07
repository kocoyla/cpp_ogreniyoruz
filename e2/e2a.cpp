#include <iostream>

using namespace std;

int main() {
  const int sınır = 4000000;
  int toplam = 0, a = 1, b = 1;
  cout << a << " " << b << " ";
  while (b < sınır) {
    if (b % 2 == 0) toplam += b;
    int yeni = a + b;
    cout << yeni << " ";
    a = b;
    b = yeni;
  }
  cout << endl << toplam;
  return 0;
}
