#include <iostream>
using namespace std;

// fonksiyon türlerini belirtelim / declare function (proto)types
void yaz(long);
void asalÇarpanlarıYaz(long);

int main() {
  long dene[] {1, 4, 5, 6, 7, 8, 9, 10, 12, 36, 81, 98, 121, 2048, 13195, 600851475143l};
  // https://stackoverflow.com/questions/20234898/more-modern-way-of-looping-through-c-arrays
  for(auto s: dene) asalÇarpanlarıYaz(s);
  return 0;
}

void yaz(long s) { cout << s << " "; }

void asalÇarpanlarıYaz(long s) {
  cout << s << ": ";
  if(s < 4) {
    cout << endl;
    return;
  }
  long bolen {2};
  const double sinir {sqrt(s)};
  const long sayi {s};
  do {
    long kalan {s % bolen};
    long carpan {1};
    while (kalan == 0) {
      carpan *= bolen;
      if (carpan == bolen) { yaz(carpan); }
      s /= bolen;
      kalan = s % bolen;
    }
    if (bolen == 2) bolen ++;
    else bolen += 2;
    kalan = s % bolen;
  } while(bolen <= sinir);
  if (s > 1 && s != sayi) yaz(s);
  cout << endl;
  return;
}
