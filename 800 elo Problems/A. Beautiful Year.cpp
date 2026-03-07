#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool unique(int x, int y){
    if (x == 0) return true;
    if (x % 10 == y) return false;
    return unique(x / 10, y);
}

bool isUniqueYear(int year) {
    for (int temp = year; temp > 0; temp /= 10) {
        int d = temp % 10;
        if (!unique(temp / 10, d)) return false;
    }
    return true;
}

int main (){
    int year = 0;
    cin >> year;

    int nextyear = year + 1;
    while (!isUniqueYear(nextyear)) {
        nextyear++;
    }

    cout << nextyear;
    return 0;
}