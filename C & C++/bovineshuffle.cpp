#include <iostream>

using namespace std;

int main()
{
    freopen("shuffle.in" , "r" , stdin);
    freopen("shuffle.out" , "w" , stdout);
    int n;
    scanf("%d" , &n);
    int shuffle[n];
    int final[n];
    for(int i = 0; i < n ; i++)
    {
        scanf("%d" , &shuffle[i]);
        shuffle[i]--;
    }
    for(int i = 0 ; i < n ; i ++)
    {
        scanf("%d" , &final[i]);
    }

    for(int i = 0 ; i < n; i++)
    {
        int c = final[shuffle[shuffle[shuffle[i]]]];
        printf("%d" , c);
        if(i != n - 1)
        {
            printf("\n");
        }
    }
}