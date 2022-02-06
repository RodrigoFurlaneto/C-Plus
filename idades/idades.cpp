#include <bits/stdc++.h>

using namespace std;

int main() {

    string name1, name2;
    int age1, age2;
    double media;

    cout << "First person data:" << endl;
    cout << "Name: ";
    getline (cin, name1);
    cout << "Age: ";
    cin >> age1;

    cout << "Second person data:" << endl;
    cout << "Name: ";
    cin.ignore(INT_MAX, '\n');
    getline (cin, name2);
    cout << "Age: ";
    cin >> age2;

    cout << fixed << setprecision(1);
    media = (age1 + age2) / 2.0;
    cout << "The average age of " << name1 << " and " << name2 << " is " << media << " years old";

    return 0;
}
