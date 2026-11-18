#include <iostream>
#include <string>

int main(void) {
    std::string s, t;
    std::cin>>s>>t;
    if (s.length() != t.length())
        std::cout<<"NO";
    else {
        for (size_t i =0; i < s.length(); i++) {
            if (s[i] != t[t.length()-1-i]) {
                std::cout<<"NO";
                return 0;
            }
        }
        std::cout<<"YES";
    }
    return 0;
}
