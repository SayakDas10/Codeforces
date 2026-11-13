#include <iostream>
#include <vector>

int main(void) {
    int n;
    std::cin>>n;
    std::vector<long long> nums(n);
    for (long long &val : nums) std::cin>>val;
    for (int i = n-1; i>=0;i--) {
        std::cout<<nums[i]<<" ";
    }
    return 0;
}
