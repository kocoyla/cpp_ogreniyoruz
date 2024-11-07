#include <iostream>

using namespace std;

const int sınır = 999;

int bölünenlerinToplamı(int bölen) {
  int son = sınır / bölen;
  return bölen * son * (son + 1) / 2;
}

int main() {
  cout << __FILE__ << endl;
  cout << bölünenlerinToplamı(3) + bölünenlerinToplamı(5) - bölünenlerinToplamı(15) << endl;
}
