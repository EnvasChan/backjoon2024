
#include <iostream>
#include <string>
using namespace std;

int main()
{

    
    int a;
    int most = 0;
    char ans = 0;
    string word;
    int check[26] = { 0 };
    int count[26] = { 0 };

    cin >> word;
    

    for (int i = 0; i < word.size(); i++)
    {      
        if (word[i] >= 'a' && word[i] <= 'z')
        {
            word[i] -= 32; //대문자로 변환
            
        }

        check[int(word[i]) - 65] += 1; // 해당 알파벳이 몇번 등장했는지 표시                  
    }

    for (int i = 0; i < 26; i++)
    {
        if (most < check[i])
        {
            most = check[i];
            ans = i + 65;
        }
        else if (most == check[i])
        {
            ans = '?';
        }
    }
   
    cout << ans;
    return 0;
}
