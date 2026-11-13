#include <iostream>
#include <vector>
#include <climits>

int main(void) {
    int t;
    std::cin>>t;
    while (t--) {
        int n;
        std::cin>>n;
        std::vector<int> nums(n);
        for (int &val : nums) std::cin>>val;
        int min = INT_MAX; 
        int exp;
        for (int i = 0; i < n-1; i++) {
            for (int j = i+1; j < n; j++) {
                exp = nums[i] + nums[j] + j + 1 - i - 1;
                if (exp < min) min = exp; 
            }
        }
        std::cout<<min<<"\n";
    }
    return 0;
}
