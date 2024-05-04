#include<iostream>
using namespace std;

int main()
{
    int one,two,cream;

    cin >> one;
    cin >>two;

    one>two ? cream=one : cream=two;

    int i=1;
    while (i)
    {
        if ( cream%one==0 && cream%two==0 )
        {
            cout << 'kmm :'<< cream;
            break;
        }
        cream++
    }
    return 0;
}