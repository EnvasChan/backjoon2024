#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num[9] ={0};
    int save[9] ={0};
    int a= 0;
    for(int i = 0; i < 9; i++)
    {
        cin >> num[i];
        save[i] = num[i];
    }

    for(int i =0;i<9; i++)
    {
        for(int j = 1; j< 9 - i; j++)
        {
            if(num[j-1] > num[j])
            {
                a = num[j];
                num[j] = num[j-1];
                num[j-1] = a;
            }
        }
    }

    for(int i = 0; i < 9; i++)
    {
        if(save[i] == num[8])
        {
            cout << num[8] << endl;
            cout << i + 1;   
            break;
        }
    }


    return 0;
}