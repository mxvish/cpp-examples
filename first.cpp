#include <iostream>
#include <memory>
#include <string>

using namespace std;

class MyClass {

  float floatVariable;

  public:

    string str = "String in MyClass";
    MyClass() {
      // constructor
    }

    ~MyClass() {
      // deconstructor
    }

    void myMethod() {
        cout << "String in myMethod in MyClass";
        cout << "\n";
    }
    
    void myMethod(int n) {
        cout << n;
        cout << "\n";
    }
};

class MySuperClass: public MyClass {
  public:
    string str = "String in MySuperClass";

    void myMethod() {
        cout << "String in myMethod in MySuperClass";
        cout << "\n";
    }
};

int main() {
  cout << "cpp!";
  cout << "\n";
  string str = "String in cpp";
  
  MyClass myClass;
  myClass.myMethod();
  myClass.myMethod(1);

  MySuperClass mySuperClass;
  mySuperClass.myMethod();

  MyClass* myPointer = new MyClass;
  delete myPointer;
  
  unique_ptr<MyClass> ptrMyClass(new MyClass); //smart pointers
  cout << ptrMyClass->str;
  cout << "\n";

  return 0;
}
