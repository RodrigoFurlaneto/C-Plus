#include <bits/stdc++.h>

using namespace std;

int main(){

    double base, height, area, perimeter, diagonal;

    cout << "Rectangle base: ";
    cin >> base;
    cout << "Rectangle height: ";
    cin >> height;

    area = base * height;
    perimeter = 2 * (base + height);
    diagonal = sqrt(base * base + height * height);

    cout << fixed << setprecision(4);
    cout << "Area = " area << endl;
    cout << "Perimeter = " << perimeter << endl;
    cout << "Diagonal = " << diagonal << endl;

    return 0;
}
