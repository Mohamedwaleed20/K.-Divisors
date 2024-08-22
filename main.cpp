#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;


    for (int i = 1; i <= t; i++)
    {
        if(t%i==0)
        {
            cout << i << endl ;
        }
    }
    return 0;
}
