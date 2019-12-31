#include <iostream>
#include <stdlib.h>
using namespace std;

class CAccount
{
    int AccNo;
    float Balance;
public:
    CAccount()
    {
        cout<<"Enter the account no.:-\n";
        cin>>AccNo;
        cout<<"Enter the initial Balance\n";
        cin>>Balance;

    }
    int InputTransaction();
    void PrintBalance()
    { cout<<"Account no. - "<<AccNo<<endl<<"remaining Balance:- "<<Balance; }

};

int CAccount:: InputTransaction()
{
    int Amt;
    char c;
    cout<<"Please enter the type of transaction \n W - Withdrawal \n D - deposit\n";
    cin>>c;
    if(c=='W')
    {
        cout<<"enter the amount you want to withdraw\n";
        cin>>Amt;
       if(Amt>Balance)
       {
           cout<<"Insufficient Balance\n";
            cout<<"current Balance="<<Balance<<"\n";
       }

       else
        {
            Balance-=Amt;
            cout<<"current Balance="<<Balance<<"\n";
        }

    }
    else if(c=='D')
    {
        cout<<"enter the amount you want to deposit\n";
        cin>>Amt;
        Balance+=Amt;
        cout<<"current Balance="<<Balance<<"\n";

    }
    else{
        cout<<"please enter a valid choice";
        InputTransaction();
    }

    return 0;
}


int main()
{
    int ch;
    CAccount A1;

    cin>>ch;
    switch(ch)
    {

    case 1:
        A1.InputTransaction();
        break;
        case 2:
           A1.PrintBalance();

        break;
    default:
        cout<<"please enter a valid choice";
        break;




    }


}
