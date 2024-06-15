#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a[1002];
        cin >> n;
        int count0 = 0, count1 = 0, count2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 2)
                count0++;
        }
        for (int k = 0; k < n; k++)
        {
            if (a[k] == 2)
                count1++;
            count2 = count0 - count1;
            if (count1 == count2)
            {
                cout << k + 1 << endl;
                break;
            }
        }
        if(count1!=count2)
            cout << -1 << endl;
    }
    return 0;
}