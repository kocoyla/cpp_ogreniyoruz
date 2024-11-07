#include <iostream>
using namespace std;

void soa(); // state of the art, a while back

int main() {
  soa();
  return 0;
}

void soa() {
  const int N = 10;
  int a[N] = {1, 3, 5, 4, 2};  // container

  for (int i = 0; i < N; i++) { // iterating over it (using i as iterator)
    a[i] *= a[i];
    cout << a[i] << " ";
  }
}
