#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--) 
    {
        int count = 0;
        int a, b, n;
        cin >> a >> b >> n;
        while (max(a, b) <= n) 
        {
            if (a <= b) 
            {
                a += b;
            } else 
            { 
                b += a;
            }
            count++;  
        }
        cout << count << endl;
    }

    return 0;
}