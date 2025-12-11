#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    freopen("speeding.in" , "r" , stdin);
    freopen("speeding.out" , "w" , stdout);
    int m , n;
    scanf("%d %d\n" , &n , &m);
    int bess_distance[m] = {0};
    int bess_speed[m] = {0};
    int highway_distance[n] = {0};
    int highway_speed[n] = {0};
    for(int i = 0 ; i < n; i++)
    {
        cin >> highway_distance[i] >> highway_speed[i];
    }
    for(int i = 0; i < m; i++)
    {
        cin >> bess_distance[i] >> bess_speed[i];
    }
    int b = 0;
    int h = 0;
    int sum_b = bess_distance[0];
    int sum_h = highway_distance[0];
    int max_limit = 0;
    for(int i = 0 ; i < m + n ; i++)
    {
        max_limit = max(max_limit , bess_speed[b] - highway_speed[h]);
        if(sum_b < sum_h)
        {
            b = b + 1;
            sum_b = sum_b + bess_distance[b];
        }
        else if(sum_b > sum_h)
        {
            h = h + 1;
            sum_h = sum_h + highway_distance[h];
        }
        else
        {
            if(b != m - 1)
            {
                b = b + 1;
                sum_b = sum_b + bess_distance[b];
            } 
            if(h != n - 1)
            {
                h = h + 1;
                sum_h = sum_h + highway_distance[h];
            }
        }
    }
    printf("%d" , max_limit);
}