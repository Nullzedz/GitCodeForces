// got help from gpt on minor portion do better
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main (){
    vector<vector<int>> matrix;
    for(int i = 0; i < 5; i++){
        vector<int> row;
        for(int j = 0; j < 5; j++){
            int value;
            cin >> value;
            row.push_back(value);
        }
        matrix.push_back(row);
    }

    int rowIndex = 0;
    int colIndex = 0;
    bool found = false;

    for(const auto& row : matrix){
        colIndex = 0;
        for(const auto& value : row){
            if(value == 1){
                found = true;
                break;
            }
            colIndex++;
        }
         if (found) break;
         rowIndex++;
    }

    cout<< abs(rowIndex - 2) + abs(colIndex - 2);
return 0;
}