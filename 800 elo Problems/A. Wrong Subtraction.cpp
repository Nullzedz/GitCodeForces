// im a dumbass 
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main (){
    int N = 0, T = 0;
    cin >> N >> T;
    for(int i = 0; i < T; i++){
        if(N%10 != 0){
            N--;
            continue;
        }
        if(N%10 == 0)N/=10;
    }
    cout<<N;
}