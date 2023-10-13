#include<iostream>
#include<vector>

int findMax(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
    if(begin + 2 == end) return *(begin + 2) > *(begin + 1) ? *(begin + 2) : *(begin + 1);
    int maxRemnant = findMax(++begin, end);
    return *begin > maxRemnant ? *begin : maxRemnant; 
}
int findMax(std::vector<int> arr, int size) {
    if (size == 0) return 0;
    if (size == 1) return arr[0];
    return findMax(arr.begin(), arr.end() - 1);
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