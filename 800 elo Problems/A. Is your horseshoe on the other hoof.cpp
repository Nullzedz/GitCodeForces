#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<long long> colors;
    for (int i = 0; i < 4; i++)
    {
        long long x;
        cin >> x;
        colors.insert(x);
    }

    cout << 4 - static_cast<int>(colors.size());
    return 0;
}