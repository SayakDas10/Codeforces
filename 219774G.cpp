#include <iostream>
#include <vector>

int main(void) {
    int n;
    std::cin>>n;
    std::vector<long long> nums(n);
    for (long long &val : nums) std::cin>>val;
    for (int i = 0; i < n; i++) {
        if (nums[i] != nums[n-1-i]) {
            std::cout<<"NO";
            return 0;
        }
    }
    std::cout<<"YES";
    return 0;
}
