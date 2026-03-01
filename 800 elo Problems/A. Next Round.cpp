#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main (){
    // so kth term is the placement not the score
    int contestants = 0;
    int passing = 0;
    int ctr = 0;
    cin >> contestants >> passing;
    vector<int> score(contestants);
    for(int i = 0; i < contestants; i++){
        cin >> score[i];
    }

    int threshold = score[passing-1];

    for(int i = 0; i < contestants; i++){
        if(score[i] >= threshold && score[i] > 0){
            ctr++;
        }
    }
    cout << ctr;

    return 0;
}