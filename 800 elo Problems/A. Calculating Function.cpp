#include <bits/stdc++.h>
using namespace std;

long long Function(long long n){
    if (n % 2 == 0) {
        return n / 2;
    }
    return -(n + 1) / 2;
}

int main(){
    long long n = 0;
    cin >> n;
    cout << Function(n);

}