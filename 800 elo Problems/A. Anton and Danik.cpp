#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main (){
    string s;
    int size=0;
    cin>>size;
    cin >> s;
    int ctrA=0;
    int ctrD=0;
    for(int i=0; i < size; i++){
        if(s[i] == 'D') ctrD++;
        if(s[i] == 'A') ctrA++;
    }


    if(ctrA > ctrD){
        cout<<"Anton";
    }else if(ctrD > ctrA){
        cout<<"Danik";
    }else{
        cout<<"Friendship";
    }

    return 0;
}