#include <iostream>

using namespace std;

int main()
{
    freopen("cbarn.in" , "r" , stdin);
    freopen("cbarn.out" , "w" , stdout);
    int n;
    scanf("%d" , &n);
    int barn[n];
    for(int i = 0 ; i < n; i++)
    {
        scanf("%d" , &barn[i]);
    }
    int minimum = 10000000000;
    for(int i = 0; i < n; i++)
    {
        int sum = 0;
        for(int j = 0 ; j < n; j++)
        {
            sum = sum + barn[(i + j) % n] * j;
        }
        minimum = min(minimum , sum);
    }
    printf("%d" , minimum);
}