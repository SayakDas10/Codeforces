#include <iostream>
#include <vector>

int main(void) {
    int t;
    std::cin>>t;
    while (t--) {
        int n;
        std::cin>>n;
        std::vector<int> heights(n);
        for (int &val : heights) std::cin>>val;
        int sum = 0;
        for (int i = 0; i < n-1; i++) {
            for (int j = i+1; j < n; j++) {
                if (heights[j] > heights[i]) 
                    heights[j] = heights[i];
            }
            sum += heights[i];
        }
        std::cout<<sum + heights[n-1]<<"\n";
    }
    return 0;
}
