#include <iostream>
#include <string>
using namespace std;

int main() { 
        int iterations = 0;
        cin >> iterations;
        for (int i = 0; i < iterations; i++){
        string name;
        cin >> name;
        size_t lenght = name.length();
        string final;
        if (lenght > 10){
            final = name[0] + to_string(lenght-2) +  name[lenght-1];
            cout << final << endl;
        }else{
            cout << name << endl;
        }
        }
    return 0;
}