#include <iostream>

using namespace std;

int main() {
    int a;
    int b;

    cin >> a >> b;
    cout.precision(10);
    cout << static_cast<double>(a) / b;
}