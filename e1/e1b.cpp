#include <iostream>

using namespace std;

int bul(int sınır) {
  int toplam = 0;
  for(int s = 1; s < sınır; s++)
    if (s % 3 == 0 || s % 5 == 0)
      toplam += s;
  return toplam;
}

int main() {
  cout << bul(10) << endl;
  cout << bul(1000) << endl;
}
