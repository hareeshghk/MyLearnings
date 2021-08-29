#include <string>

int main() {
  int a1; // Unintialized
  int a2 = 0; // Copy initialization
  int a3(5); // Direct initialization

  std::string s1;
  std::string s2("c++"); // Direct initialization

  char d1[8]; // Uninitialized
  char d2[8] = {'\0'}; // Copy initialization
  char d3[8] = {'a', 'b', 'c', 'd'}; // Aggregate initialization
  char d4[8] = {"abcd"}; // Copy initialization

  // Uniform initialization from c++11.

  // variable intialized to default value if no value given in brackets.
  int b1{};  // Value initialization
  int b3{5}; // Direct initialization
  int b2();  // This creates a func with void input and int return called Most vexing parse.

  char e1[8]{}; // array to default value.
  char e2[8]{"Hello"}; // Direct initialization.

  int *p1 = new int{4};
  char *p2 = new char[8]{}; // initialize to default calue
  char *p3 = new char[8]{"Hello"};

  return 0;
/*
1. Value intialization => T obj{};
2. Direct intialization => T obj{v};
3. Copy initialization => T ob = v; // avoid this.
*/

  /*
Uniform intialization.
1. It forces intialization
2. You can use direct intialization for array types.
3. It prevents narrowing conversions. eg: float f{}; int i{f}; will fail
4. with this we have uniform syntax for all types.
*/
}