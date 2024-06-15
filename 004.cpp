#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    int i, j,i1,j1;
    while (scanf("%d %d", &i, &j) != EOF)
    {
        int count = 1;
        if (i > j)
        {
            i1 = j;
            j1 = i;
        }
        else
        {
            i1 = i;
            j1 = j;
        }
        int num[10002];
        for (int a = i1 ; a <= j1; a++)
        {
            int b = a;
            for(;;)
            {
                if (b == 1)
                {
                    num[a - i1] = count;
                    count = 1;
                    break;
                }
                if (b % 2 == 0)
                {
                    b /= 2;
                    count++;
                }
                else
                {
                    b = 3 * b + 1;
                    count++;
                }
                
            }
        }
        sort(num, num + j1 - i1 + 1);
        
        cout << i <<" "<< j <<" "<< num[j1-i1] << endl;
        
    }
}