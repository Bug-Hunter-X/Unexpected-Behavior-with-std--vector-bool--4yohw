#include <iostream>
#include <vector>
#include <bitset>

int main() {
  //Correct implementation using bitset
  std::bitset<2> vec;
  vec[0] = 1;
  vec[1] = 0;
  std::cout << vec << std::endl; // Output: 10 

  //Alternative using std::vector<char>
  std::vector<char> vec2(2);
  vec2[0] = 1; // true
  vec2[1] = 0; // false
  std::cout << (int)vec2[0] << " " << (int)vec2[1] << std::endl; //Output: 1 0
  return 0;
}