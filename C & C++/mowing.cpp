#include <iostream>

using namespace std;

int main()
{
    freopen("mowing.in" , "r" , stdin);
    freopen("mowing.out" , "w" , stdout);
    int n;
    scanf("%d" , &n);
    int grid[1000][1000] = {0};
    int time = 0;
    int step = 0;
    char direction;
    int coord_x = 500;
    int coord_y = 500;
    int x = 1000000;
    for(int i = 0 ; i < n ; i++)
    {
        scanf(" %c %d" , &direction , &step); // the space in the front skips any leftover newlines , or leading tabs and whitespaces
        for(int j = 0 ; j < step ; j++)
        {
            if(direction == 'N')
            {
                coord_y--;
            }
            else if(direction == 'S')
            {
                coord_y++;
            }
            else if(direction == 'E')
            {
                coord_x++;
            }
            else if(direction == 'W')
            {
                coord_x--;
            }
            
            time = time + 1;
            if(grid[coord_x][coord_y] != 0)
            {
                x = min(x , time - grid[coord_x][coord_y]);
            }
            grid[coord_x][coord_y] = time;
        }
    }
    
    if(x != 1000000)
    {
        printf("%d" , x);
    }
    else
    {
        printf("%d" , -1);
    }
}