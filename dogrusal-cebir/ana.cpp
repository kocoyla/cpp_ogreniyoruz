#include "dogrusal.h"

void dogrusal(int);

int main(int argc, char** argv) {
  int N = 3; // vektorümüzün boyutu

  if (argc == 2) {
    N = stoi(argv[1]);
    if (N < 2) {
      cout << "N en az 2 olmalı." << endl;;
      N = 2;
    }
    cout << "N=" << N << endl;
  }

  dogrusal(N);

  return 0;
}
