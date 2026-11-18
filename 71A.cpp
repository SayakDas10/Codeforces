#include <iostream>
#include <string>

int main(void) {
    int n;
    std::cin>>n;
    while (n--) {
        std::string ip;
        std::cin>>ip;
        if (ip.length() > 10) {
            std::cout<<ip[0]<<ip.length()-2<<ip[ip.length()-1]<<"\n";
        }
        else std::cout<<ip<<"\n";
    }
    return 0;
}
