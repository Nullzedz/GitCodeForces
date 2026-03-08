#include <bits/stdc++.h>
using namespace std;

int main (){
    int A = 0, count = 0;
    cin >> A;
    for(int i = 0; i < A; i++){
        int answer = 0;
        cin >> answer;
        if(answer == 1){
            cout<<"HARD";
            return 0;
        }
    }
    cout << "EASY";
    return 0;


}