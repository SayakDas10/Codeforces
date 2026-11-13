#include <iostream>
#include <vector>
#include <algorithm>

void selection_sort (std::vector<int> &nums, int n) {
   if (n==0) std::cout<<"";
   else {
       int left_idx = 0;
       int min, min_idx;
       while (left_idx < n) {
           min = nums[left_idx];
           min_idx = left_idx;
           for (int i = left_idx; i<n;i++) {
               if (nums[i] < min) {
                   min = nums[i];
                   min_idx = i;
               }
            }
            std::swap(nums[left_idx], nums[min_idx]);
            left_idx++;
       }
   }
}

int main(void) {
    int n;
    std::cin>>n;
    std::vector<int> nums(n);
    for (int &val : nums) std::cin>>val;
    selection_sort(nums, n);
    for (int &val : nums) std::cout<<val<<" ";
    return 0;
}
