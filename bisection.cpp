#include <bits/stdc++.h>
using namespace std;

#define ld long double

ld f(ld x) {
    return x * x - 2;
}

ld Bisection(ld a, ld b, ld error) {
    ld c;
    while (abs((a - b) / a) > error) {
        c = (a + b) / 2;
        if (f(c) == 0) {
            return c;
        } else if (f(c) * f(a) < 0) {
            b = c;
        } else {
            a = c;
        }
    }
    return c;
}

int main() {
    ld a = 0, b = 2, error = 0.01;
    cout << "The root is: " << Bisection(a, b, error) << endl;
    return 0;
}
