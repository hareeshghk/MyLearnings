#include <iostream>

using namespace std;

int Add(int a, int b) {
  cout << "invoke int" << endl;
  return a + b;
}

double Add(double a, double b) {
  cout << "invoke double" << endl;
  return a + b;
}

// To avoid Name mangling and to use it from C as well.
// check doc for moreinfo on name magnling and extern.
// it can used as extern "C" { f1, f2, f3} both in header and cpp files.
extern "C" void Print(int* x) {}

void Print(const int* x) {}
// for overloading to work
// args should differ in type and/or number
// return type is ignored.
// function chose based on type of args
// It happens during compile time. static polymorphism.
int main() {
  cout << Add(2, 5) << endl;
  cout << Add(3.1, 6.2) << endl;
  return 0;
}