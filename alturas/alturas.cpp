#include <bits/stdc++.h>

using namespace std;
int main() {

    int x, i;
    double heightMedia, smaller;

    cout << "How many people will be entered? ";
    cin >> x;

    int age[x];
    string name[x];
    double height[x];

    for(i = 0; i < x; i++){
        cout << i+1 << "a person data:" << endl;
        cout << "Name: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, name[i]);
        cout << "Age: ";
        cin >> age[i];
        cout << "Height: ";
        cin >> height[i];
    }

    cout << fixed << setprecision(2);
    heightMedia = 0;
    for(i = 0; i < x; i++){
        heightMedia = heightMedia + height[i];
    }
    heightMedia = heightMedia / x;
    cout << endl <<"Height Media: " << heightMedia << endl;

    smaller = 0;
    for(i = 0; i < x; i++){
        if (age[i] < 16){
            smaller = smaller + 1;
        }
    }
    smaller = smaller * 100 / x;
    cout << fixed << setprecision(1);
    cout << "People under 16 years old: " << smaller << "%" << endl;

    for(i = 0; i < x; i++){
        if (age[i] < 16){
            cout << name[i] << endl;
        }
    }
    return 0;
}
