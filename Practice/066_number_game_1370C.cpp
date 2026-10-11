#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

bool isPrime(ull x) {
    if (x < 2) return false;

    const ull smallPrimes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
    for (ull p : smallPrimes) {
        if (x % p == 0) return x == p;
    }

    ull d = x - 1;
    int s = 0;
    while (d % 2 == 0) {
        d /= 2;
        s++;
    }

    auto powMod = [&](ull base, ull exp) {
        ull result = 1;
        base %= x;
        while (exp > 0) {
            if (exp % 2 == 1) result = (unsigned __int128)result * base % x;
            base = (unsigned __int128)base * base % x;
            exp /= 2;
        }
        return result;
    };

    for (ull a : smallPrimes) {
        ull y = powMod(a, d);
        if (y == 1 || y == x - 1) continue;

        bool passed = false;
        for (int r = 1; r < s; r++) {
            y = (unsigned __int128)y * y % x;
            if (y == x - 1) {
                passed = true;
                break;
            }
        }
        if (!passed) return false;
    }
    return true;
}

string winner(ull n) {
    if (n == 1) {
        return "FastestFinger";
    }

    if (n % 2 == 1) {
        return "Ashishgup";
    }

    if (n == 2) {
        return "Ashishgup";
    }

    bool isPowerOfTwo = (n & (n - 1)) == 0;
    if (isPowerOfTwo) {
        return "FastestFinger";
    }

    ull half = n / 2;
    bool halfIsOddPrime = (half % 2 == 1) && isPrime(half);
    if (halfIsOddPrime) {
        return "FastestFinger";
    }

    return "Ashishgup";
}

int main() {
   

    int t;
    cin >> t;
    while (t--) {
        ull n;
        cin >> n;
        cout << winner(n) << "\n";
    }
    return 0;
}