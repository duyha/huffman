#include "HuffmanEncoder.h"

void HuffmanEncoder::print() {
  std::cout << "Huffman Encoder \n";
  std::cout << "Input = " << input_file << std::endl;
}

HuffmanEncoder::HuffmanEncoder(std::string input_file) {
  input_file = input_file;
}

void HuffmanEncoder::encode() {
  std::cout << "Encoding ... \n";
}
