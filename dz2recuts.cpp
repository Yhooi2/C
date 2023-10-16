#include<iostream>
#include<vector>

int getMax(auto begin, auto end) {
    if(begin + 1 == end) return *end;
    int carrNum = getMax(++begin, end);
    return *begin > carrNum ? *begin : carrNum; 
}
int getMax(std::vector<int> arr) {
    return getMax(arr.begin(), arr.end() - 1);
}
int main() {
    int size;
    std::cin >> size;
    std::vector<int> arr(size);
    for(int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
    std::cout << getMax(arr);
}