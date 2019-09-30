#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
    int binary,decimal;
    int num,n,rem;
    cout<<"\n Enter what you want to perform(1-2) :";
    cout<<"\n 1.For decimal to binary ";
    cout<<"\n 2.For binary to decimal ";
    cin>>n;
    if(n==1)
    {
        cout<<"\n Enter the number:";
        cin>>num;
        int sum=0;
        for(int i=0;num!=0;i++)
        {
            rem=num%2;
            sum+= pow(10,i)*rem;
            num/=2;

        }
        cout <<"\nDecimal to binary : "<< sum;
    }
else{
    cout <<"\n Enter the number:";
    cin>>num;
    int binary=0;
    for(int j=0;num!=0;j++)
    {
       rem=num%10;
        binary+=rem*pow(2,j);
        num/=10;

    }
    cout<<"\n Binary to decimal is:"<<binary;
}
return 0;
}
