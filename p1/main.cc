#include <iostream>
#include <fstream>
#include "bigInt.h"
#include "calculadora.h"

using namespace std;


int main(int argc, char* argv[]) {
  //cout << "hello people";
  Calculator c;
  c.readFile(argv[1]);
  return 0;
}