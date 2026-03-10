#include <bits/stdc++.h>
using namespace std;

int main(){
    int amount = 0, faces = 0;
    cin >> amount;
    for (int i = 0; i < amount; i++){
        string word;
        cin >> word;
        for(char &c : word){
            c = tolower(c);
        }
        if (word == "tetrahedron"){
            faces += 4;
        }else if (word == "cube"){
            faces += 6;
        }else if (word == "octahedron"){
            faces += 8;
        }else if (word == "dodecahedron"){
            faces += 12;
        }else if (word == "icosahedron"){
            faces += 20;
        }
    }
    cout << faces;



    return 0;
}