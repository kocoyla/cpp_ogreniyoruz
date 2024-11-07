#include <iostream>

using namespace std;

const int sınır = 999;

int main() {
  int son3 = sınır / 3;
  int toplam3 =  3 * son3 * (son3 + 1) / 2;
  int son5 = sınır / 5;
  int toplam5 = 5 * son5 * (son5 + 1) / 2;
  int son15 = sınır / 15;
  int toplam15 = 15 * son15 * (son15 + 1) / 2; 
  cout << __FILE__ << ": " << toplam3 + toplam5 - toplam15;
}
