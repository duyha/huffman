#ifndef _FILEREADER_H
#define _FILEREADER_H 1

#include <iostream>

class FileReader {
  public:
    FileReader(const std::string file_path);
    const std::string get_file_path();
    void open(const std::string);
    void close();
    bool hasNext();
    std::string getToken();
    // ~FileReader();

  private:
    std::string file_path;
};

#endif
