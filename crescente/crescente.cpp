#include <bits/stdc++.h>

using namespace std;
int main(){

    int x, y, exchange;

    cout << "Enter two numbers:" << endl;
    cin >> x >>y;

    while(x != y){
    if(x < y){
        cout << "Growing!" << endl;
    }
    else{
        cout << "Descending!" << endl;
    }
    cout << "Enter two more numbers:" << endl;
    cin >> x >> y;
    }
    return 0;
}
