/*A palindrome is a string or sequence of characters that reads the same backward as forward. For example, "MADAM" is a palindrome.
Write a function that takes in an input string: str and returns true if the input string is a palindrome, false otherwise.
An empty string is considered a palindrome. You also need to account for the space character - i.e. "race car" should return false as read backward it is "rac ecar".

Examples:

is_string_palindrome("madam") -> true
is_string_palindrome("aabb") -> false
is_string_palindrome("") -> true*/

#include <iostream>
#include <string>
using namespace std;

bool is_string_palindrome(string str){
  if (str.length()==0){
    return true;
  }
  else if (str[0] == str[str.length()-1]){
    return is_string_palindrome(str.substr(1,str.length()-2));
  }
  else {
    return false;
  }
}
int main(){
  string input;
  std::cout << "Input string to check for palindrome: ";
  std::cin >> input;
  string output = is_string_palindrome(input)==true ? "Is a palindrome" : "Not a palindrome";
  std::cout << "\n" << output << "\n";
  return 0;
}
