#include<bits/stdc++.h>
using namespace std;


double func(int a,int b,int c, int d, double x)
{
    return a*x*x*x + b*x*x + c*x + d;
}

double funder(int a,int b,int c, int d, double x)
{
    return 3*a*x*x + 2*b*x + c ;
}

double root(int a,int b,int c,int d,double m,double ERROR)
{
    double o=(func(a,b,c,d,m)/funder(a,b,c,d,m));
    while(abs(o) >= ERROR)
    {
        o=func((a,b,c,d,m)/funder(a,b,c,d,m));

        m=m-h;


    }
    cout<<"root "<<m;
}

int main()
{

    int fn,a,b,c,d,E;
    double m,n,ERROR;
    cout<<"please enter the precision of roots\n";
    cin>>E;
    ERROR=pow(10,-E);
    cout<<"Select the function\n1.Linear\n2.Quadratic\n3.Cubic\n";
    cin>>fn;
    switch(fn)
    {
    case 1:
        cout<<"enter the values of a,b in (ax+b=0)/n";
        cin>>c>>d;
        cout<<"enter a point near roots \n";
        cin>>m;
        root(0,0,c,d,m,ERROR);
        break;
    case 2:
        cout<<"enter the values of a,b,c in (ax^2+bx+c=0)\n";
        cin>>b>>c>>d;
        cout<<"enter a point near roots \n";
        cin>>m;
        root(0,b,c,d,m,ERROR);
        break;
    case 3:
        cout<<"enter the values of a,b,c,d in (ax^3+bx^2+cx+d=0)\n";
        cin>>a>>b>>c>>d;
        cout<<"enter a point near roots \n";
        cin>>m;
        root(a,b,c,d,m,ERROR);
        break;
    default:
        cout<<"please enter a valid choice\n";
        break;
    }

    return 0;
}
