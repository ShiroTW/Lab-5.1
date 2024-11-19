#include <iostream>
#include <cmath>
using namespace std;

double g(const double x, const double y);

int main() {
    setlocale(LC_CTYPE, "ukr");
    double r, s;
    cout << "r = "; cin >> r;
    cout << "s = "; cin >> s;
   
    double result = (g(1, r) + g(s * s - 1, r * r)) / (g(s, 1 + r));

    cout << "Результат = " << result << endl;
    return 0;
}

double g(const double x, const double y) {
    return (x * x + y * y + sin(x * y)) / (1 + abs(x * y));
}