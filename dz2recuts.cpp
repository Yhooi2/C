#include<iostream>

int getDigitsSum(int n) {
    if(n < 10) return n;
    int DigitsSum = getDigitsSum(n/10);
    return n % 10 + DigitsSum;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << getDigitsSum(n);
}