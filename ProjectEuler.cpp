#include <iostream>

using namespace std;

void p001(int max) {
  int sum=0;
  for (int i=0; i<max; i++) {
    if (i%3==0 || i%5==0) {
      sum += i;
    }
  }
  cout << sum << "\n";
}

/*
Multiples of 3 under 10
= 3+6+9
= 3(1+2+3)
= 3(sigma((10-1)/3))

Sum of all intergers between 1 and x is x(x+1)/2
*/
long long returnSum(int k, int max) {
  long long n = (max - 1) / k;
  return k * (n * (n + 1)) / 2;
}

void solveEuler001(int max) {
  cout << returnSum(3,max) +
          returnSum(5,max) -
          returnSum(15,max) <<
          "\n";
}

void p002(int max) {
  int a = 1;
  int b = 2;
  int sum = 0;
  int sumOfEven = 0;

  while (b<max) {
    if (b%2==0) {
      cout << b << "\n";
      sumOfEven += b;
    }
    sum = a + b;
    a = b;
    b = sum; 
  }
  cout << sumOfEven << "\n";
}

int main(){
  p001(10);
  p001(1000);
  solveEuler001(10);
  solveEuler001(1000);
  p002(10);
  //p002(100);
  p002(4e6);
  return 0;
}
