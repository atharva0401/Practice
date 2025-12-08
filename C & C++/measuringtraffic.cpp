#include <iostream>
#include <vector>
using namespace std;
struct Sensor
{
    int l , r;
    string s;
};
int main()
{
    freopen("traffic.in" , "r" , stdin);
    freopen("traffic.out" , "w" , stdout);
    int n;
    scanf("%d" , &n);
    int curr_l = -1000000;
    int curr_r = 1000000;
    int l , r;
    string str;
    vector<Sensor> sense(n);
    for(int i = 0 ; i < n ; i++)
    {
        cin >> str >> l >> r;
        sense[i] = {l , r , str};
        if(str == "on")
        {
            curr_l = curr_l + l;
            curr_r = curr_r + r;
        }
        else if(str == "off")
        {
            curr_l = max(0 , curr_l - r);
            curr_r = max(0 , curr_r - l);
        }
        else
        {
            if(curr_l < l)
            {
                curr_l = l;
            }
            if(curr_r > r)
            {
                curr_r = r;
            }
        }

    }
    int final_l = curr_l;
    int final_r = curr_r;
    for(int i = n - 1; i >= 0; i--)
    {
        if(sense[i].s == "on")
        {
            curr_l = max(0 , curr_l - sense[i].r);
            curr_r = max(0 , curr_r - sense[i].l);
        }
        else if(sense[i].s == "off")
        {
            curr_l = curr_l + sense[i].l;
            curr_r = curr_r + sense[i].r;
        }
        else
        {
            if(curr_l < sense[i].l)
            {
                curr_l = sense[i].l;
            }
            if(curr_r > sense[i].r)
            {
                curr_r = sense[i].r;
            }
        }
    }
    printf("%d %d\n" , curr_l , curr_r);
    printf("%d %d" , final_l , final_r);
}

