#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;




int main()
{
    char A[5][20];
    char c[20];
    int i=0,j=0;
    cout<<"Enter names to be sorted:\n";
    for (i=0; i<5; i++) {
        cout<<i+1<<"- ";
        cin>>A[i];
    }
    for (i=1; i < 5; i++) {
        for (j=1; j<5;j++) {
            if (strcmp(A[j-1], A[j])>0) {
                strcpy(c, A[j-1]);
                strcpy(A[j-1], A[j]);
                strcpy(A[j], c);
            }
        }
    }
    cout<<"\nNames in Alphabetical order:\n";
    for (i=0; i<5; i++) {
        cout<<i+1<<"- "<<A[i]<<"\n";
    }
}
