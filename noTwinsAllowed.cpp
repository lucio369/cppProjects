/*
Write a function that takes an input string - str and returns true if all the characters in the string are unique, false if there is even a single repeated character.

For an empty string, return true.

Examples:

are_all_characters_unique("abcde") -> true
are_all_characters_unique("aa") -> false
are_all_characters_unique("") -> true
*/
#include <iostream>
#include <string>

using namespace std;

bool are_all_characters_unique(string str){
  for (int i=0;i<str.length();i++){
    for (int j=i+1;j<str.length();j++){
      if (str[i]==str[j]){
          return false;
          }
      }
    }
    return true;
}

int main(){
  string input;
  cout << "Enter a string to check for colliding characters\n";
  cin >> input;
  string output = are_all_characters_unique(input) ? "No collisions" : "There are twins here";
  cout << output;
  return 0;
}
