#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main (){
    string username;
    cin >> username;
    unordered_set<char> seen;
    for (char c : username) {
        seen.insert(c);
    }
    int decide = seen.size();
    
    if(decide % 2 == 0){
        cout<<"CHAT WITH HER!";
    }else{
        cout<<"IGNORE HIM!";
    }

    return 0;
}
