#include <iostream>
#include <vector>

int main(void) {
    int n;
    std::cin>>n;
    std::vector<int> nums(n);
    for (int &val : nums) std::cin>>val;
    int x;
    std::cin>>x;
    for (int i = 0; i < n; i++) {
        if(nums[i]==x) {
            std::cout<<i;
            return 0;
        }
    }
    std::cout<<-1;
    return 0;
}
