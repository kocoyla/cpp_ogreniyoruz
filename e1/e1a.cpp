#include <iostream>

int main() {
  const int sınır = 1000;
  int toplam = 0;
  for(int s = 1; s < sınır; s++)
    if (s % 3 == 0 || s % 5 == 0)
      toplam += s;

  std::cout << toplam;
  return 0;
}
