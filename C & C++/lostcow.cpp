#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int x , y;
    freopen("lostcow.in" , "r" , stdin);
    freopen("lostcow.out" , "w" , stdout);
    scanf("%d %d" , &x , &y);
    int temp = 0;
    int i = 0;
    int distance = 0;
    int step = 1;
    int curr = x;
    while(true)
    {
        temp = x + pow(-1 , i)*step;
        if((x <= y && y <= temp) || (temp <= y && y <= x))
        {
            distance = distance + abs(curr - y);
            break;
        }
        else
        {
            distance = distance + abs(temp - curr);
            curr = temp;
            i = i + 1;
            step = step * 2;
        } 
    }
    cout << distance;
    
}