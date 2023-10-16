#include<iostream>

bool checkPalindrome(std::string::iterator begin, std::string::iterator end) {
if(begin > end ) return true;
if(*begin != *end) return false; 
return checkPalindrome(++begin, --end);
}

bool checkPalindrome(std::string& s) {
    if(s.empty()) return false;
    if(s.length() == 1) return false;
    return checkPalindrome(s.begin(), --s.end());
}
