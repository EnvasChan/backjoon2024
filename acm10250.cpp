#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int h= 1;
    int w= 1;
    int n= 0;
    int t= 0;
    vector<int> ans;
    string answer;

    cin >> t;

    for(int i = 0; i < t; i++)
    {
        cin >> h;
        cin >> w;
        cin >> n;

        int a = n / h; // a는 앞 숫자 - 호 수
        int b = n % h; // b는 뒤 숫자 - 층 수

        a++;

        if(b == 0)
        {
            b = h;
            a = a - 1;
        }
        
        if(a < 10)
        {
            string num = to_string(a);
            string f = to_string(b);
            answer = f + '0' + num;
            ans.push_back(stoi(answer));
            continue;
        }

        string num = to_string(a);
        string f = to_string(b);
        answer = f + num;
        ans.push_back(stoi(answer));
    }

    
    for(int i = 0; i < t; i++)
    {
        cout << ans[i] << endl;
    }
    
    

    return 0;
}