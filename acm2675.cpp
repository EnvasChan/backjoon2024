#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int t = 0;
    int r = 0;
    string s;
    string ans;
    vector<string> n;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        cin >> r;
        cin >> s;
        for(int j = 0; j < s.size(); j++)
        {
            for(int q = 0; q < r; q++)
            {
                ans += s[j];
            }
        }

        n.push_back(ans);

        ans.erase();

    }

    for(int i = 0; i < t; i++)
    {
        cout << n[i] << endl;
    }


    return 0;
}