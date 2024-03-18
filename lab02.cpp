#include <iostream>
    using namespace std;
    int findGCD(int a, int b) {
        int gcd = 1;
        for (int i = 1; i <= a && i <= b; ++i) {
            if (a % i == 0 && b % i == 0) {
                gcd = i;
            }
        }
        return gcd;
    }
    
    int findLCM(int a, int b) {
        int gcd = findGCD(a, b);
        int lcm = (a * b) / gcd;
        return lcm;
    }

    int main() {
        setlocale(LC_CTYPE, "ukr");

        int a, b;
        cout << "Введiть два цiлих числа: ";
        cin >> a >> b;

        int lcm = findLCM(a, b);
        int c = lcm / a;
        int d = lcm / b;

        cout << "НСК: " << lcm << endl;
        cout << "Числа c i d: " << c << ", " << d << endl;

        return 0;
    }

 