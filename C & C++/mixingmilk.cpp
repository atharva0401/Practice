#include <iostream>
#include <algorithm>
#include <cstdio>

int main()
{
    freopen("mixmilk.in" , "r" , stdin);
    int milk[3] = {0};
    int a , b , c;
    scanf("%d %d" , &a , &milk[0]);
    scanf("%d %d" , &b , &milk[1]);
    scanf("%d %d" , &c , &milk[2]);
    
    for(int i = 0; i < 100 ; i++)
    {
        if(i % 3 == 0)
        {
            if(milk[0] + milk[1] < b)
            {
                milk[1] = milk[1] + milk[0];
                milk[0] = 0;
            }
            else
            {
                milk[0] += milk[1] - b;
                milk[1] = b;
            }
        }
        else if(i % 3 == 1)
        {
            if(milk[1] + milk[2] < c)
            {
                milk[2] = milk[1] + milk[2];
                milk[1] = 0;
            }
            else
            {
                milk[1] += milk[2] - c;
                milk[2] = c;
            }
        }
        else
        {
            if(milk[0] + milk[2] < a)
            {
                milk[0] = milk[0] + milk[2];
                milk[2] = 0;
            }
            else
            {
                milk[2] += milk[0] - a;
                milk[0] = a;
            }
        }
    }
    freopen("mixmilk.out" , "w" , stdout);
    printf("%d\n%d\n%d" , milk[0], milk[1], milk[2]);
}