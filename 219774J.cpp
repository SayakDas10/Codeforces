#include <iostream>
#include <map>
#define MAX 100001

int main(void) {
    int n;
    std::cin>>n;
    std::map<int,int> freq;
    int min = MAX;
    while (n--) {
        int ip;
        std::cin>>ip;
        if (ip < min) min = ip;
        freq[ip]++;
    }
    std::cout<<(freq[min]%2!=0 ? "Lucky" : "Unlucky");
    return 0;
}
