#include<bits/stdc++.h>
using namespace std;


double func(int a,int b,int c, int d, double x)
{
    return a*x*x*x + b*x*x + c*x + d;
}

void bisection(int a,int b,int c, int d,double m, double n, double ERROR)
{
    if (func(a,b,c,d,m) * func(a,b,c,d,n) >= 0)
    {
        cout << "You have not assumed right m and n \n either the roots lie outside the interval [m,n] or one of the interval is root itself\n";
        return;
    }

    double o = m;
    while ((n-m) >= ERROR)
    {

        o = (m+n)/2;


        if (func(a,b,c,d,o) == 0.0)
            break;

        else if (func(a,b,c,d,o)*func(a,b,c,d,m) < 0)
            n = o;
        else
            m = o;
    }
    cout << "The value of root is : " << o;
}


int main()
{

    int fn,a,b,c,d,E;
    double m,n,o,ERROR;
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
        cout<<"enter the intervals (m,n) in which the roots may lie\n";
        cin>>m>>n;
        bisection(0,0,c,d,m,n,ERROR);
        break;
    case 2:
        cout<<"enter the values of a,b,c in (ax^2+bx+c=0)\n";
        cin>>b>>c>>d;
        cout<<"enter the intervals (m,n) in which the roots may lie\n";
        cin>>m>>n;
        bisection(0,b,c,d,m,n,ERROR);
        break;
    case 3:
        cout<<"enter the values of a,b,c,d in (ax^3+bx^2+cx+d=0)\n";
        cin>>a>>b>>c>>d;
        cout<<"enter the intervals (m,n) in which the roots may lie\n";
        cin>>m>>n;
        bisection(a,b,c,d,m,n,ERROR);
        break;
    default:
        cout<<"please enter a valid choice\n";
        break;
    }

    return 0;
}
