#include <bits/stdc++.h>

using namespace std;
int main() {

    int x, y, sum, i, exchange;

    cout << "Enter two numbers:" << endl;
    cin >> x >> y;

    if(x > y){
        exchange = x;
        x = y;
        y = exchange;
    }

    sum = 0;
    for(i = x+1; i < y; i++){
        if(i % 2 != 0){
            sum = sum + i;
        }
    }

    cout << "Sum of odd: " << sum;

    return 0;
}
