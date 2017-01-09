#include "FileReader.h"

FileReader::FileReader(const std::string _file_path) {
  file_path = std::string(_file_path);
}

const std::string FileReader::get_file_path() {
  return file_path;
}
