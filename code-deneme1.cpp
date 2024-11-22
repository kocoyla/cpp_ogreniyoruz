#include <iostream>
//#include <vector>
//#include <algorithm>

using namespace std;

long fa(int n) {
  if (n < 2) return 1;
  return n * fa(n-1);
}

// This could be very slow for large n. see: https://codedamn.com/news/c/fibonacci-series
long fi(int n) {
  if (n < 2) return n; // 0 ve 1
  return fi(n-1) + fi(n-2);
}

int main(int argc, const char *argv[])
{
  cout << "Program: " << argv[0] << endl;
  int count = 23;
  if (argc == 1) {
    cout << "Girdi yok." << endl;
  }
  else {
    for (int i = 1; i < argc; i++) {
      cout << "Girdi " << i << ": " << argv[i] << endl;
    }
    count = stoi(argv[1]);
  }
  cout << "Merhaba!" << endl;
  for(int i = 0; i < count; i++) {
    cout << fi(i) << " ";
  }
  cout << endl;
}