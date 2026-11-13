#include <iostream>
#include <cmath>

int main(void) {
    int n;
    std::cin>>n;
    long long sum = 0;
    long long ip;
    while (n--) {
        std::cin>>ip;
        sum += ip;
    }
    std::cout<<std::abs(sum);
    return 0;
}
