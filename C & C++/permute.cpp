#include <iostream>

using namespace std;

void permutation(string a , int i , int n)
{
    if (i == n)
    {
        cout << a << endl;
    }
    else
    {
        for(int j = i; j < n; j++)
        {
            swap(a[i] , a[j]);
            permutation(a , i + 1, n);
            swap(a[i] , a[j]);
        }
    }
}

int main()
{
    string a = "abcd";
    permutation(a , 0 , 4);

}