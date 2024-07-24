#include <algorithm>
#include <iostream>
#include <iterator>
#include <random>
#include <vector>
#include <unistd.h>

using namespace std;

int num1,num2;
void line_list()
{
    vector<char> li{'1', '2', '3', '4', '5', '6', '7', '8', '1', '2', '3', '4', '5', '6', '7', '8'};
    vector<char> star{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'};
    int a=0;

        random_device rd;
        mt19937 g(rd());
        shuffle(li.begin(), li.end(), g);


        cout<<"\n\n";
        for (char out_li : star)
        {
            star[num1-1]=li[num1-1];
            star[num2-1]=li[num2-1];

            if(star[num1-1] != star[num2-1])
            {
                a++;

                cout<<"| " << out_li <<" | ";
                if(a == 4 )
                {
                    cout<<"\n-----------------------\n";
                }

                else if(a == 8)
                {
                    cout<<"\n-----------------------\n";
                }

                else if(a == 12)
                {
                    cout<<"\n-----------------------\n";
                }
            }

            else
            {
                cout << "You can't choose a duplicate house !!!"<<endl;
                break;
            }
        }

//        cout << "\n\n\n";
//        for(int i=0; i<16; i++)
//        {
//            cout<<i+1<<" = "<<li[i]<<endl;
//        }
        cout << endl;
}

void line_table()
{
    cout<<endl;
    for(int i=0; i<=15; i++)
    {
        cout<<"| * | ";

        if(i == 3 )
        {
            cout<<"\n-----------------------\n";
        }
        else if(i == 7)
        {
            cout<<"\n-----------------------\n";
        }
        else if(i == 11)
        {
            cout<<"\n-----------------------\n";
        }
    }
}


int main()
{
    while (true)
    {
        line_table();

        cout<<"\n\n number 1 : ";
        cin>>num1;
        cout<<"number 2 : ";
        cin>>num2;


        line_list();
        cout << "\n\nSleeping for 5 seconds...\n";
        sleep(5);
        cout << "Done sleeping!\n";

    }

    return 0;
}