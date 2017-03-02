#include <iostream>
#include <cstdio>
using namespace std;

long long int mulMod(long long int a, long long int b, long long int c){
    // returns (a * b) % c.
    long long int x = 0, y = a % c;
    while (b) {
        if (b & 1)
            x = (x + y) % c;
        y = (y << 1) % c;
        b >>= 1;
    }
    return (x % c);
}

long long int modPower(long long int a, long long int b, long long int c){
    // returns (a ^ b) % c.
    long long int y = 1;
    while (b) {
        if (b & 1)
            // y = (y * a) % mod;
            y = mulMod(y, a, c);
        // a = (a * a) % mod;
        a = mulMod(a, a, c);
        b >>= 1;
    }
    return y;
}

long long int calculateCigarettes(long long int n){
    return (modPower(34, n, 11) + mulMod(30, n, 11) + 32) % 11;
}

int main() {
    int t;
    long long int n;
    scanf("%d", &t);
    while(t--){
        scanf("%lld", &n);
        printf("%lld\n", (11 - calculateCigarettes(n)) % 11);
    }
    return 0;
}