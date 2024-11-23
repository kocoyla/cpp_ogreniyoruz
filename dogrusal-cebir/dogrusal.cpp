#include "dogrusal.h"

void dogrusal(int N) {
  double dizi[N];
  cout << "dizi/array: ";
  double x = 2.0;
  for (auto & s : dizi) {
    s = x*=2;
  }
  for (auto s : dizi) cout << s << " ";
  cout << endl;
  
  vektor v0(N, 10.0);
  yaz(v0, "vektor v0");
  vektor v1(dizi, dizi + sizeof(dizi)/sizeof(dizi[0]));
  yaz(v1, "vektor v1");
  v1[1] *= 2.5;
  yaz(v1, "v1'in ikinci ögesi değişti");
  vektor v2(v1.begin(), v1.end());
  yaz(v2, "v2");
  v2[0] += 10.0; v2[1] += 20.0;
  v2.push_back(13.0);
  yaz(v2, "v2'nin ilk iki ögesinin değerleri arttı ve sona bir öge eklendi");
  
  ikiyeBölX(v2);
  yaz(v2, "v2 ikiye böl x");
  ikiyeBölY(v2);
  yaz(v2, "v2 ikiye böl y");  
  ikiyeBölA(v2);
  yaz(v2, "v2 ikiye böl a");
  ikiyeBölB(v2);
  yaz(v2, "v2 ikiye böl b");

  const int M = 2;
  matris m(M, v1);
  yaz(m, "matris başta");
  m[1] = v2;
  yaz(m, "ikinci ögesini değiştir");
  cout << "Bitti." << endl;
}
