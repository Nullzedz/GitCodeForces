#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    stringstream str;
    str << "I hate ";
    if (n > 1)
    {
        for (int i = 2; i <= n; i++)
        {
            str << "that ";
            if (i % 2 == 0)
            {
                str << "I love ";
            }
            else
            {
                str << "I hate ";
            }
        }
    }
    str << "it";
    cout << str.str();
    return 0;
}
