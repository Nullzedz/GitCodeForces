#include <iostream>
using namespace std;

int main() {
    int n = 0, h = 0;
    cin >> n >> h;

    int width = 0;
    for (int i = 0; i < n; i++) {
        int value = 0;
        cin >> value;
        if (value > h) {
            width += 2;
        } else {
            width += 1;
        }
    }

    cout << width;
    return 0;
}