TARGET = huffman_compression
all: $(TARGET)
	@echo compiled $(TARGET)

$(TARGET): main.cpp HuffmanEncoder.cpp
  g++ -std=c++11 main.cpp HuffmanEncoder.cpp -o huffman_compression
