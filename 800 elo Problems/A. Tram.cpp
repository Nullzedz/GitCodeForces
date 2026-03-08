#include <bits/stdc++.h>
using namespace std;

int main() {
    int amount = 0, max = 0, enter = 0, left = 0;
    cin >> amount;
    int temp = 0;
    for(int i = 0; i < amount; i++){
        cin >> left >> enter;
        temp = (temp - left) + enter;
        if(temp > max){
            max = temp;
        }
    }
   cout << max;
}