#include <iostream>

using namespace std;

typedef vector<int> sayılar;

sayılar bölünenler10() {
  sayılar sLer = {3, 5, 6, 9};
  return sLer;
}

sayılar bölünenler(int sınır) {
  sayılar sLer;
  for(int s = 1; s < sınır; s++) {
    if (s % 3 == 0 || s % 5 == 0) {
      sLer.push_back(s);
    }
  }
  return sLer;
}

int topla(sayılar sLer) {
  int toplam = 0;
  for(auto s : sLer)  {
    toplam += s;
  }
  return toplam;
}

int main() {
  cout << topla(bölünenler10()) << endl;
  cout << topla(bölünenler(1000)) << endl;
}
