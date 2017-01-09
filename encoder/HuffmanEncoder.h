#include <iostream>
#include <string>

class HuffmanEncoder {
public:
  std::string input_file;
  HuffmanEncoder(std::string input_file);
  void buildHuffmanTree();
  void encode();
  void print();
};
