#include <iostream>

using namespace std;

void p001(int max) {
  int sum=0;
  for (int i=0; i<max; i++) {
    if (i%3==0 || i%5==0) {
      sum += i;
    }
  }
  cout << sum;
  cout << "\n";
}

int main(){
  p001(10);
  p001(1000);
  return 0;
}
