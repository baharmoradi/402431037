#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    for ( n ; n > 0 ; n)
    {
        int bit = n % 2;
        cout << bit << '';
        n=n/2;
    }
    return0;
}
