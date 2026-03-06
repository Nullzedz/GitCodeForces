// im a dumbass 
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int recursive(int a){
    if(a <= 0){
        return 0;
    }
    return 1 + recursive(a - 5);
}


int main (){
int input = 0;
cin >> input;
cout << recursive(input);
}