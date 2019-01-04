#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double a;
    cin >> a;
    if (a <= 150)
        cout << fixed << setprecision(1) << a * 0.4463 << endl;
    else if (a >= 151 && a <= 400)
        cout << fixed << setprecision(1) << 150 * 0.4463 + (a - 150) * 0.4663 << endl;
    else
        cout << fixed << setprecision(1) << 150 * 0.4463 + 250 * 0.4663 + (a - 400) * 0.5663 << endl;
    return 0;
}