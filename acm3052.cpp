#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int b[1001] = {0};
    int a = 0;
    int answer = 0;

    for(int i = 0; i < 10; i++)
    {   
        cin >> a;
        a = a%42;
        b[a]  += 1; 
    }

    for(int i = 0; i < 1001; i++)
    {
        if(b[i] != 0)
        {
            answer++;
        }
    }

    cout << answer;

    return 0;
}