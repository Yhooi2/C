#include <iostream>

int sumAllNumb(int n, int sum) {
    if(n < 10) return sum += n;

    return sum + n % 10 + sumAllNumb(n /10 , sum);
} 

int sumAllNumb(int n) {
    int sum = 0;
    return sumAllNumb(n, sum);
}

int main() {

    int n;
    std::cin >> n;
    std::cout << sumAllNumb(n);
}