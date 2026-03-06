// im a dumbass 
#include <iostream>
#include <bits/stdc++.h>
#include <ctype.h>
using namespace std;

int main (){
    string input;
    cin >> input;

    int CTR = 0;
    int ctr = 0;
    int length = input.length();
    for(int i = 0; i < length; i++){
        if (input[i] >= 'a' && input[i] <= 'z') ctr++;
        if (input[i] >= 'A' && input[i] <= 'Z') CTR++;
    }
    if (ctr >= CTR) {
        for (char &ch : input) ch = static_cast<char>(tolower(static_cast<unsigned char>(ch)));
    } else {
        for (char &ch : input) ch = static_cast<char>(toupper(static_cast<unsigned char>(ch)));
    }

    cout << input;
}