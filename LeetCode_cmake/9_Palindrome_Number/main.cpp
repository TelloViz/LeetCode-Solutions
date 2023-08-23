#include <iostream>
#include <string>

class Solution {
public:
     bool isPalindrome(int x) {
          std::string og{ std::to_string(x) };
          std::string rog{ og.rbegin(), og.rend() };
          return og == rog;
     }
};


int main()
{
     
     Solution sol;

     if (sol.isPalindrome(12321)) std::cout << "Is a Palindrome!" << std::endl;
     else std::cout << "Is not a Palindrome" << std::endl;
     return 0;

}