#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    freopen("cowsignal.in" , "r" , stdin);
    freopen("cowsignal.out" , "w" , stdout);
    int m , n , k;
    string s;
    cin >> m >> n >> k;
    cin.ignore(); // ignoring the new line that remains after inputting m , n , k . otherwise the the first getline will be an empty string and the code will add initial k empty lines.
    while(getline(cin ,s ))
    {
        for(int j = 0; j < k; j++)
        {
            for(char c : s)
            {
                for(int l = 0 ; l < k; l++)
                {
                    cout << c;
                }
            }
            cout << "\n";
        }

    }
}