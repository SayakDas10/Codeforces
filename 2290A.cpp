#include <iostream>
#include <vector>
#include <algorithm>

int main(void) {
    int t;
    std::cin>>t;
    while (t--) {
        std::vector<int> nums(3);
        for (int &value : nums) std::cin>>value;
        std::sort(nums.begin(), nums.end());
        if (nums[0]+1 == nums[1] && nums[1]+1==nums[2])
            std::cout<<"YES\n";
        else 
            std::cout<<"NO\n";
    }
    return 0;
}
