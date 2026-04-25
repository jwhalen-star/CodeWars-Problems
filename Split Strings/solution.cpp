#include <string>
#include <vector>

std::vector<std::string> solution(const std::string &s)
{
  std::vector<std::string> result;
  std::string str = s;  // Copy-constructing a new std::string object from s
  if (str.length() % 2 != 0) {
    str.push_back('_');
  }
  
  for (int i = 0; i < str.length(); i += 2) {
    result.push_back(str.substr(i, 2));
  }
    return result;
}