#include <bits/stdc++.h>
using namespace std;

int main(){
    int amount = 0, n = 0;
    cin >> amount;
    vector<int>array(amount);
    for(int i = 1; i <= amount; i++){
        cin >> n;
        --n;
        array[n] = i;
    }
    for (int i = 0; i < array.size(); i++){
        cout<< array[i];
        if (i != array.size() - 1) cout << " ";
    }
}