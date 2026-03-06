#include <iostream>
#include <string>
using namespace std;
bool remove(string s, int i){
    if(s[i] == s[i-1]){
        return true;
    }
    else return false;
}
int main(){
    string input;
    int length = 0;
    cin >> length;
    cin >> input;

    int count=0;
    for(int i = 1; i < length; i++){
        if(remove(input, i)) count++;
    }
    cout << count;
}