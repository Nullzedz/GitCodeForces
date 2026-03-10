#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    int letcount;
    cin >> letcount;
    cin >> input;
    
    set<char> letters;
    letcount = input.length();
    for(int i = 0; i < letcount; i++){
        char x = input[i];
        letters.insert(tolower(x));
    }

    int amount = static_cast<int>(letters.size());
    if (amount == 26){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;


}