#include <iostream>

using namespace std;

int main()
{
    int n;
    scanf("%d" , &n);
    int x[n];
    int y[n];
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d %d",&x[i] , &y[i]);
    }
    int max_distance = 0;
    for(int i = 0 ; i < n; i++)
    {
        for(int j = i + 1 ; j < n ; j++)
        {
            int diff_x = x[i] - x[j];
            int diff_y = y[i] - y[j];
            int sq_distance = diff_x * diff_x + diff_y * diff_y;
            max_distance = max(max_distance , sq_distance);
        }
    }
    printf("%d" , max_distance);
}