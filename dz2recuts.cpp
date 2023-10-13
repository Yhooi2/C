#include<iostream>

void printReverse(int n) {
    if(n < 10) {
        std::cout << n;
        return;
    }
    std::cout << n%10 <<',';
    printReverse(n/10);

}

int main() {
    int n;
    std::cin >> n;
    printReverse(n);
}