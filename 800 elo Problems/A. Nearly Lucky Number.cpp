#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main (){
    long long input = 0;
    cin >> input;

    int CTR = 0;
    while (input>0){
        if(input%10==7) CTR++;
        if(input%10==4) CTR++;
        input/=10;
    }

    if(CTR == 7||CTR == 4){
        cout<<"YES";
        return 0;
    }
    cout<<"NO";

    return 0;
}