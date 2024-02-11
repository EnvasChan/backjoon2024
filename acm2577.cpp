#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int num = 0;
    int answer[10] = {0};
    string n;
    cin >> a >> b>> c;

    num = a * b* c;

    n = to_string(num);

    for(int i = 0; i < n.size(); i++)
    {
        answer[n[i] -'0'] += 1;
    }
    for(int i = 0; i <= 9; i++)
    {
        cout << answer[i] << endl;
    }

    return 0;
}
