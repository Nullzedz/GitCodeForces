// im a dumbass 
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main (){
    int counter = 0;
    int X = 0;
    cin >> counter;
    for(int i = 0; i < counter; i++){
        string comand;
        cin >> comand;
        if(comand == "X++"){
            X++;
        }else if (comand == "++X"){
            ++X;
        }else if (comand == "--X"){
            --X;
        }else if (comand == "X--"){
            X--;
        }else {
            cout << "unknown comand";
        }
       
    }
    cout << X;
// nevermind switch cases are purely for ints
// ACCEPTED LETZGOOOOOOO
    return 0;
}