#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, cnt = 0, x;
        cin >> a >> b; //cout<< __builtin_popcount(a^b);
        x = a^b;
        while(x)
        {
            if(x%2) cnt++;
            x /= 2;
        }
        cout << cnt << endl;
    }
    return 0;
}


