#include <iostream>

using namespace std;

void p001(vector<string> vec){
  cout << vec[vec.size()-1] + "\n";
}

int main(){
  p001({"a", "b", "c", "d"});
}
//https://www.ic.unicamp.br/~meidanis/courses/mc336/problemas-lisp/L-99_Ninety-Nine_Lisp_Problems.html
