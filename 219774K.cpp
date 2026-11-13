#include <iostream>
#include <string>

int main(void){
    long long n;
    std::string s;
    std::cin>>n>>s;
    long long sum = 0;
    for (char c : s) sum += c - '0';
    std::cout<<sum;
    return 0;
}
