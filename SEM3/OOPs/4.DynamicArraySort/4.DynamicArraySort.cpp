#include<iostream>
using namespace std;


void bsort (int a [],int n)
{
    int i,j,temp;

    for (i = 0 ; i < n - 1; i++)
    {
        for (j = 0 ; j < n - i - 1; j++)
        {
            if (a[j] > a[j+1]) // Ascending Order
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

}

int main()
{
    int n;
    cout<<"DYNAMIC ARRAY\n please enter the no of DIFFRENT elements you want to store:";
    cin>>n;
    int *A=new int[n];
    for(int i;i<n;i++)
   {
       cout<<"\nEnter the Element:"<<i+1<<" ";
       cin>>A[i];
   }
    bsort(A,n);
    cout<< "sorted array is";
     for(int i=0;i<n;i++)
   {
       cout<<" Element "<<i+1<<A[i];

   }

}
