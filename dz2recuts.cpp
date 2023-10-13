#include<iostream>

bool checkPalindrome(std::string::iterator begin, std::string::iterator end) {
if(begin + 1 == end -1 || begin + 1 > end - 1) return *begin == *end ? true : false;
if(*begin != *end) return false; 
return checkPalindrome(++begin, --end);
}

bool checkPalindrome(std::string& s) {
    if(s.empty()) return false;
    if(s.length() == 1) return false;
    return checkPalindrome(s.begin(), --s.end());
}

int main() {
    std::string s;
    std::cin >> s;
    std::cout << checkPalindrome(s);
}