// Do NOT edit nor remove any existing code when testing or submitting
#include <iostream>
#include <string>

std::string main_function(std::string input) {
  // Place your code here
  int len = input.length(), i = 0;
  for (; i < len; i++) {
    if (input[i] == ' ') {
      continue;
    }
    bool flag = true;
    for (int j = 0; j < len; j++) {
      if (i != j && tolower(input[i]) == tolower(input[j])) {
        flag = false;
      }
    }
    if (flag) {
      break;
    }
  }
  return std::string(1, input[i]);
}
    
