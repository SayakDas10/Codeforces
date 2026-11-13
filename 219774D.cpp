#include <iostream>

int main(void) {
    int n;
    std::cin>>n;
    int ip;
    for (int i = 0; i < n; i++) {
        std::cin>>ip;
        if (ip <= 10) {
            std::cout<<"A["<<i<<"] = "<<ip<<"\n";
        }
    }
    return 0;
}
