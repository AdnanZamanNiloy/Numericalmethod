#include <bits/stdc++.h>
using namespace std;

#define ld long double

ld f(ld x) {
    return x * x * x - 4 * x - 5;
}

ld FalsePosition(ld a, ld b, ld error) {
    ld c;
    while (abs((a - b) / a) > error) {
        c = (a * f(b) - b * f(a)) / (f(b) - f(a));
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
    ld a = 0, b = 3, error = 0.01;
    cout << "The root is: " << FalsePosition(a, b, error) << endl;
    return 0;
}
