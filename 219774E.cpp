#include <iostream>
#define MAX 100001

int main(void) {
    int n;
    std::cin>>n;
    int min = MAX;
    int ip, idx;
    for (int i = 0; i < n; i++) {
        std::cin>>ip;
        if (ip < min) {
            min = ip;
            idx = i;
        }
    }
    std::cout<<min<<" "<<idx+1;
    return 0;
}
