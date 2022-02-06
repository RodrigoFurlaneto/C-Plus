#include <bits/stdc++.h>

using namespace std;
int main(){

    int x, negatives;

    cout << "what is the array order? ";
    cin >> x;

    int mat[x][x];

    for(int i = 0; i < x; i++){
        for(int j = 0; j < x; j++){
            cout << "Element [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }

    cout << "Main diagonal :" << endl;
    for(int i = 0; i < x; i++){
        cout << mat[i][i] << " ";
    }

    negatives = 0;
    for(int i = 0; i < x; i++){
        for(int j = 0; j < x; j++){
            if(mat[i][j] < 0){
                negatives = negatives + 1;
            }
        }
    }
    cout << endl << "Negative amounts = " << negatives << endl;

    return 0;
}
