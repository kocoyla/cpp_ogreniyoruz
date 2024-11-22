#include <iostream>
#include <ctime>

using namespace std;

typedef unsigned short Sayac;

int main(int argc, char** argv) {
  cout << "Program: " << argv[0] << endl;
  cout << argc-1 << " tane girdi var. Girdiler:" << endl;
  for (Sayac s = 1; s < argc; s++) {
    cout << s << ": " << argv[s] << endl;
  }
  cout << "Bitti." << endl;
  return 0;
}
