#include "dogrusal.h"

void yaz(const vektor& vek, string bilgi = "vektor") {
  cout << bilgi << ": ";
  for (auto s : vek)
    cout << s << " ";
  cout << endl;
}

void ikiyeBölX(vektor vek) {
  for (auto s : vek) s /= 2.0;
}

void ikiyeBölY(vektor vek) {
  for (auto & s : vek) s /= 2.0;
}

void ikiyeBölA(vektor& vek) {
  for (auto s : vek) s /= 2.0;
}

void ikiyeBölB(vektor& vek) {
  for (auto & s : vek) s /= 2.0;
}

void yaz(const matris& mat, string bilgi = "matris") {
  cout << bilgi << ": " << endl;;
  int i = 0;
  for (auto v : mat) {
    yaz(v, "\t[" + to_string(i++) + "]");
  }
}
