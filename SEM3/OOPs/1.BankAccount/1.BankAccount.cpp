#include<iostream>
#include<string.h>
using namespace std;


class Account
{
    string Name;
    long int AccNo;
    bool type;
    float Balance;

public:
    int Amt;
    void input();
    int deposit();
    int withdraw();
    int details();

};
void inp

int Account::deposit()
{
    cout<<"Enter The Amount You Want To DEPOSIT\n";
    cin>>Amt;
    Balance=Balance+Amt;
    cout<<"amount successfully deposited\n CURRENT BALANCE:"<<Balance<<"\n";
    return 0;
}

int Account::withdraw()
{
    cout<<"enter the amount you want to WITHDRAW\n";
    cin>>Amt;
    if(Balance>=Amt)
    {
        Balance=Balance-Amt;
        cout<<"WITHDRAW SUCCESSFUL\n";
    }
    else
    {
        cout<<"insufficient balance\nwithdrawl failed\n";
    }
    cout<<"CURRENT BALANCE:"<<Balance;
    return 0;

}
int Account::details()
{
    cout<<"Account No.:"<< AccNo<<"\nName of Account holder:"<<Name<<"\n";
    return 0;
}

int main()
{
    Account A1;
    int ch;
    char c;
    do
    {
        cout<<"BANK OF USICT\n";

        cout<<"What would you like to do:\n";
        cout<<"1. deposit\n";
        cout<<"2. withdraw\n";
        cout<<"3. check your balance\n";
        cin>>ch;
        switch(ch)
        {
            case 1:
            {
                A1.deposit();
                break;
            }
           case 2:
            {
                A1.withdraw();
                break;
            }
            case 3:
            {
                A1.details();
                break;
            }
            default:
                {
                    cout<<"please enter a valid choice\n";
                }
        }
        cout<<"\nWould You Like To Continue(y/n)\n";
        cin>>c;
    }while(c=='y'||c=='Y');



}
