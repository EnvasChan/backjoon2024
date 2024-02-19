#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int t = 0;
    vector<int> answer;
    int stack = 0;
    bool con = true;
    cin >> t;
    string word;
    

    for(int j = 0; j < t; j++)
    {
        cin >> word;
        answer.push_back(0);
        for(int i = 0; i < word.size(); i++)
        {
            if(word[i] == 'O' && con == false)
            {  
                stack++;
                con = true;
            }
            else if (word[i] == 'O' && con == true)
            {
                stack++;
            }
            else
            {
                con = false;
                stack = 0;
            }
            answer[j] += stack;
        }
        stack = 0;
        
     }

    for(int i = 0; i < t; i++)
    {
         cout << answer[i] << endl;
    }
    return 0;
}