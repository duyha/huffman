#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include "encoder/HuffmanEncoder.h"
using namespace std;

int main(){
  cout << "Hello World" << endl;
  HuffmanEncoder huffmanEncoder("abc");
  auto x = HuffmanEncoder("def");
  huffmanEncoder.print();
  huffmanEncoder.encode();
  x.print();

  return 0;
}
