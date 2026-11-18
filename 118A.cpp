#include <iostream>
#include <string>

int main(void) {
    std::string s, op;
    std::cin>>s;
    for (char c : s) {
        if (c >= 'A' && c <= 'Z') c += 32;
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') continue;
        op += '.';
        op += c;
    }
    std::cout<<op;
    return 0;
}
