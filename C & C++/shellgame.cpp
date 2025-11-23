#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    freopen("shell.in" , "r" , stdin);
    int n;
    scanf("%d" ,&n);
    int simul[3] = {0 , 1 , 2};
    int score[3] = {0};
    int a , b , c;
    for(int i = 0 ; i < n; i++)
    {
        cin >> a >> b >> c;
        a--;
        b--;
        c--;
        swap(simul[a] , simul[b]);
        score[simul[c]]++;
    }
    freopen("shell.out" , "w" , stdout);
    printf("%d\n", max({score[0], score[1], score[2]}));
    fclose(stdin);
    fclose(stdout);

}