#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 0;
    cin >> a;
    vector<int>sum(a);
    for(int i = 0; i < a; i++){
        int b = 0, c = 0;
        cin >> b >> c;
        int rem = b % c;
        if(rem == 0){
            sum[i] = 0;
        } else {
            sum[i] = c - rem;
        }
    }

    for(int x : sum){
        cout << x << "\n";
    }
    return 0;
}