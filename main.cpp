#include <iostream>
#include <algorithm>
#include <random>
#include <vector>
#include <unistd.h>
#include <stdlib.h>

using namespace std;


vector<char> li{'1', '2', '3', '4', '5', '6', '7', '8', '1', '2', '3', '4', '5', '6', '7', '8'};
vector<char> star{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'};
int num1,num2;

void random_li()
{
    //It should be used only once
    random_device rd;
    mt19937 g(rd());
    shuffle(li.begin(), li.end(), g);
}
void line_list()
{
    int a=0;
    cout<<"\n\n";

    for (char out_li : star)
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
    cout << "\n\n\n";

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
    random_li();
    line_table();

    while (true)
    {
        lable : cout<<"\n\n number 1 : ";
        cin>>num1;
        cout<<"number 2 : ";
        cin>>num2;
        if(num1 == num2)
        {
            cout << "You can't choose a duplicate house please try again !!!"<<endl;
            goto lable;
        }

        if(star[num1-1] == li[num1-1] && star[num2-1] == li[num2-1])
        {
            cout<<"This house is full !!!!!\n\n";
            goto lable;
        }
        if(star[num1-1] !='*' || star[num2-1] !='*')
        {
            cout<<"You can't choose a full house !!!!!\n\n";
            goto lable;
        }


        star[num1-1]=li[num1-1];
        star[num2-1]=li[num2-1];

        line_list();

        if(li[num1-1] == li[num2-1])
        {
            star[num1-1]=li[num1-1];
            star[num2-1]=li[num2-1];
        }
        else
        {
            cout << "\n\nSleeping for 5 seconds...\n";
            sleep(5);
            cout << "Done sleeping!\n";
            system("clear");

            star[num1-1] = '*' ;
            star[num2-1] = '*' ;
            line_list();
        }

        int c = 0;

        for (int i = 0 ; i <= 15 ; i++)
        {
            if (star[i] != li[i])
            {
                c++;
                break;
            }
        }

        if (c == 0)
        {
            cout << "\nThis game is over !!!" << endl;
            return 0;
        }
    }
    return 0;
}