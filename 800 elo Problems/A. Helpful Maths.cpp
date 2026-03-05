#include <iostream>
#include <bits/stdc++.h>
using namespace std;
auto sortNumbers = [](string& input, int lenght) {
        for (int i = 0; i < lenght; i += 2)
        {
            for (int j = i+2; j < lenght; j += 2)
            {
                if (input[i] - '0' > (input[j] - '0'))
                {
                    swap(input[i], input[j]);

                }
               
            }
        }
    };
int main()
{
    string input;
    cin >> input;
    int lenght = input.length();
    
    sortNumbers(input, lenght);
    cout<<input;
}

