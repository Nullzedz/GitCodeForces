#include <bits/stdc++.h>
using namespace std;

int main(){
    int num = 0, P = 0, Q = 0, count = 0;
    cin >> num;
    while(num--){
        cin>>P>>Q;
        if(P <= Q-2){
            count++;
        }
    }  
    cout<<count;

}