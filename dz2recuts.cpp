#include<iostream>
#include<vector>

int findMax(std::vector<int>::iterator begin, std::vector<int>::iterator end, int sum) {
    if(begin + 1 == end) return *begin;
    return sum + *begin + findMax(begin + 1, end, sum);
}
int findMax(std::vector<int> arr, int size) {
    if (size == 0) return 0;
    if (size == 1) return arr[0];
    int sum = 0;
    return findMax(arr.begin(), arr.end(), sum);
}
int main() {
    int size;
    std::cin >> size;
    std::vector<int> arr(size);
    for(int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
    std::cout << findMax(arr, size);
}