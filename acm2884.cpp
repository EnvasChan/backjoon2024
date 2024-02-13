#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int h = 0;
    int m = 0;
    int a = 0;

    cin >> h;
    cin >> m;

    if(m >= 45)
    {
        m =  m - 45;
    }
    else
    {       
        for(int i = 0; i < 45; i++)
        {
           
            if(m == 0)
            {
                h = h - 1;
                m = 60;
            }  
            if(h < 0)
            {
                h = 23;
            }
             m = m - 1;         
        }
    }

    cout << h;
    cout <<' ';
    cout << m;

    return 0;
}