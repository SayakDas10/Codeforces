#include <iostream>

int main(void) {
    int n;
    std::cin>>n;
    int ip;
    for (int i = 0; i<n; i++) {
        std::cin>>ip;
        if (ip > 0) std::cout<<1; 
        else if (ip < 0) std::cout<<2;
        else std::cout<<0;
        std::cout<<" ";
    }
    return 0;
}
