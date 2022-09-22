#include <iostream>
using namespace std;

void task1()
{
    int n;
    cout << "Enter some number\n";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int k=0; k <=i; k++)
        {
            cout << k;
        }
        cout << "\n";
    }
}

void task2()
{
    int n, k;
    cout << "Enter n:\n";
    cin >> n;
    cout << "Enter k:\n";
    cin >> k;
    if (n >= 100)
        {
            cout << "<100!";
            
        }
    else 
    {
        int ans=1;
        for (int i = 0; i < k; i++)
            {
                ans = ans * (n - i) / (i + 1);
            }
        cout << "Result:" << ans <<endl;
    }
    
    
    
    
}

void task3()
{
    int nums;
    int xqz = 0, zxc = 0;
    cout << "Srednee ariphm., 0 - end\n";
    while(true)
        {
            cin >> nums;   
            
            if (nums == 0)
                {
                    double mid_val = double(xqz)/zxc;    
                    cout << mid_val << endl;
                    break;
                }
            else
                {
                    xqz += nums;
                    zxc += 1;
                }
            
        }
}

int main()
{
    int punkt = 0;
    
    while(true)
    {
     cout << "Make your choice\n" << "1. Task 1\n" << "2. Task 2\n" << "3. Task 3\n" << "4. Exit\n";
     cin >> punkt;
     switch (punkt)
     {
        case 1:
            task1();
            break;
        case 2:
            task2();
            break;
        case 3:
            task3();
            break;
        default:
            return 0;
     }  
    }
}
