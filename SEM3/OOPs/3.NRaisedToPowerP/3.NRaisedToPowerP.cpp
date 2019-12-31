#include <iostream>
#include<math.h>
using namespace std;


int power(int n,int p=2)
{
   return pow(n,p);
}

int main()
{
    int n,p;
    char ch;
    cout<<"please enter the values of n to calculate n^p  \n POSITIVE INTEGERS ONLY \n\n";
    cin>>n;
    cout<<"\n do you want to square your no (y/n):";
    cin>>ch;
    if(ch=='N'||ch=='n')
    {
       cout<<"n raised to power 2 ="<<power(n);
    }
    else
    {
       cout<<"please enter the value of p\n";
        cin>>p;
       cout<<"n raised to the power "<<p<<"="<<power(n,p);
    }

    return 0;

}
