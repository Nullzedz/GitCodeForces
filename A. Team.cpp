#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int counter;
    int ctr, implemented = 0;
    cin >> counter;
    vector<int> a(3);
    for (int i = 0; i < counter; i++){
        for (int j = 0; j < 3; j++){
            cin >> a[j];
            if(a[j] == 1){
                ctr++;
            }
        }
        if(ctr >= 2){
            implemented++;
        }
        ctr = 0;
    }
    cout << implemented;
    //AYYYY it works ACCEPTTED LETZGOOOOOOOOOOOOOOOOOOOOOOOO
    return 0;
}