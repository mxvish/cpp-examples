#include <iostream>
#include <memory>
#include <string>

using namespace std;

class MyClass {

  float floatVariable;

  public:
    string str = "MyClass";

    MyClass() {
      // constructor
    }

    ~MyClass() {
      // deconstructor
    }

    void myMethod() {
        cout << "myMethod in MyClass"<< "\n";
    }
    
    void myMethod(int n) {
        cout << n<< "\n";
    }
};

class MySuperClass: public MyClass {
  public:
    string str = "MySuperClass";

    void myMethod() {
        cout << "myMethod in MySuperClass"<< "\n";
    }
};

int main() {
  cout << "cpp!" << "\n";
  string str = "String in cpp";
  
  MyClass myClass;
  myClass.myMethod();
  myClass.myMethod(1);

  MySuperClass mySuperClass;
  mySuperClass.myMethod();

  MyClass* myPointer = new MyClass;
  delete myPointer;
  
  unique_ptr<MyClass> ptrMyClass(new MyClass); /*smart pointers*/
  cout << ptrMyClass->str << "\n";
  int a = 3;
  int b = 3;
  cout << a + b << "\n";

  return 0;
}
