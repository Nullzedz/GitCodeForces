#include <bits/stdc++.h>
using namespace std;

int main(){
    string C;
    getline(cin, C);
    stringstream str;
    for(int i = 0; i < C.length(); i++){
        str<<((C[i]>= 'A' && C[i] <= 'Z') ? char('Z'- (C[i] - 'A')) : (C[i]>= 'a' && C[i] <= 'z') ? char('z'- (C[i] - 'a')) : C[i]);

        // if(C[i]>= 'A' && C[i] <= 'Z'){
        //     str<<char('Z'- (C[i] - 'A'));
        // }else if(C[i]>= 'a' && C[i] <= 'z'){
        //     str<<char('z'- (C[i] - 'a'));
        // }else{
        //     str<<C[i];
        // }
    }
    C = str.str();
    cout<<C;
}