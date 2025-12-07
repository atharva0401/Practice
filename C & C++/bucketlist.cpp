#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int bucket[1001] = {0};
    int start , end , numbuckets;
    freopen("blist.in" , "r" , stdin);
    freopen("blist.out" , "w" , stdout);
    scanf("%d" , &n);
    for (int i = 0 ; i < n ; i++)
    {
        scanf("%d %d %d" , &start , &end , &numbuckets);
        bucket[start] += numbuckets; // += because it could be that start for a cow i could conincide with end of a cow j
        bucket[end] -= numbuckets;
    }
    int maxbucket = 0;
    int currentbucket = 0;
    for(int i = 0 ; i < 1001 ; i++)
    {
        currentbucket = currentbucket + bucket[i];
        maxbucket = max(currentbucket , maxbucket);
    }
    printf("%d" , maxbucket);
}