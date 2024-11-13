#include <iostream>
using namespace std;

// fonkisyon türlerini belirt (declare)
void yaz(long);
void asalÇarpanlarıYaz(long);

int main() {
  long dene[] = {81, 98, 121, 2048, 13195, 600851475143l};
  // https://stackoverflow.com/questions/20234898/more-modern-way-of-looping-through-c-arrays
  for(auto s: dene) {
    asalÇarpanlarıYaz(s);
  }
  return 0;
}

void yaz(long s) { cout << "\t" << s << endl; }

void asalÇarpanlarıYaz(long s) {
  cout << s << ":" << endl;
  if (s < 2) return;
  else if (s < 4) {
    yaz(s);
    return;
  }
  long bolen{2};
  float sinir = sqrt(s);
  do {
    long kalan = s % bolen;
    long carpan = 1;
    while (kalan == 0 && carpan <= sinir) {
      carpan *= bolen;
      if (carpan == bolen) { yaz(carpan); }
      s /= bolen;
      kalan = s % bolen;
    }
    if (bolen == 2) bolen ++;
    else bolen += 2;
    kalan = s % bolen;
  } while(bolen <= sinir);
  return;
}
