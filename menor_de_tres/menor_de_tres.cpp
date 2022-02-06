#include <bits/stdc++.h>


using namespace std;

int main() {

    int x, y, z, smaller;

    cout << "First value: ";
    cin >> x;
    cout << "Second value: ";
    cin >> y;
    cout << "Third value: ";
    cin >> z;

    if (x < y && x < z){
        smaller = x;
    }
    else if (y < z){
        smaller = y;
    }
    else{
        smaller = z;
    }

    cout << "Smaller = " << smaller;

    return 0;
}
