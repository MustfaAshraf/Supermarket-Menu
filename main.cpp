#include <bits/stdc++.h>

using namespace std;

int main()
{
    int receipt=0,milk=20,bread=2,cheese=30,choice,quantity,a;
    do
    {
        cout<<"Chose Item : "<<endl
            <<"1.Milk -> 20L"<<endl
            <<"2.Bread -> 2L"<<endl
            <<"3.Cheese -> 30"<<endl
            <<"0.Exit"<<endl;
        cin>>choice;
        switch(choice)
        {
        case 1:
        {
            cout<<"Enter The Quantity : ";
            cin>>quantity;
            receipt += (quantity * milk);
            cout<<"To Choose Another Item Press 1 Otherwise Press Any Number"<<endl;
            cin>>a;
            if(a==1)
                continue;
            else
            {
                cout<<"Total = "<<receipt<<endl;
                return 0;
            }
        }
        case 2:
        {
            cout<<"Enter The Quantity : ";
            cin>>quantity;
            receipt += (quantity * bread);
            cout<<"To Choose Another Item Press 1 Otherwise Press Any Number"<<endl;
            cin>>a;
            if(a==1)
                continue;
            else
            {
                cout<<"Total = "<<receipt<<endl;
                return 0;
            }
        }
        case 3:
        {
            cout<<"Enter The Quantity : ";
            cin>>quantity;
            receipt += (quantity * cheese);
            cout<<"To Choose Another Item Press 1 Otherwise Press Any Number"<<endl;
            cin>>a;
            if(a==1)
                continue;
            else
            {
                cout<<"Total = "<<receipt<<endl;
                return 0;
            }
        }
        }
    }
    while(choice!=0);

    return 0;
}

