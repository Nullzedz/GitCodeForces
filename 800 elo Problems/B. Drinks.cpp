#include <bits/stdc++.h>
using namespace std;

int main(){
    double long vol = 0, A = 0, answer = 0;
    cin>>vol;
    for(int i = 0; i < vol; i++){
        cin >> A;
        A /=100;
        answer += A;
    }
    answer = (answer/vol)*100;
    cout << fixed << setprecision(12)<<answer;
    return 0;
}