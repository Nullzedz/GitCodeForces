#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main (){
int K = 0, N = 0, W = 0; 
cin >> K >> N >> W;
long total = 0;
for(int i = 1; i <= W; i++){
    total += i*K;
}
if (total <= N){
    cout << 0;
}else{
    cout << total - N;
}
return 0;
}