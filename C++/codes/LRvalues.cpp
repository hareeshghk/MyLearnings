#include <iostream>

int Add(int x, int y) {
  return x+y;
}

int& transform(int &x) {
  x *= x;
  return x;
}

void print (int &x) {
  std::cout << "print (int &x)" << std::endl;
}

void print (const int &x) {
  std::cout << "print (const int &x)" << std::endl;
}

void print (int &&x) {
  std::cout << "print (int &&x)" << std::endl;
}


int main() {
  // x,y,z are l values, 1,2,3 are r values.
  int x = 1;
  int y = 2;
  int z = 3;

  // expression retunr r value.
  int res = (x + y) * z;

  // expression return l value
  ++x = 6;
  // x++ can't be used.
  std::cout << x << std::endl;

  // rvalue ref
  int &&r1 = 10;
  int &&r2 = Add(3,4);
  std::cout << r1 << r2 << std::endl;

  int x1 = 0;
  // int &&r3 = x1; // fails

  int &ref = transform(x1); // lavlue ref
  const int &ref2 = 3; // lavlue ref const

  print(x1);
  // in case of nofucn with ravlue arg it can go to const ref func
  // if r value arg func is present then it goes for that only.
  print(3);

  return 0;
}