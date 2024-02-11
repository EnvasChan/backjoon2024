#include <iostream>
#include <string>
using namespace std;



int main()
{
    int n = 0;
    string answer;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        answer.clear();
        for(int q =0; q< n - i -1; q++)
        {
            answer += ' ';
        }
        for(int j = 0; j <= i; j++)
        {
            answer +='*';
        }
        cout << answer << endl;
    }

    return 0;
}
