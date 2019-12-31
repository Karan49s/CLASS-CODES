#include<iostream>

using namespace std;

class distanceFI
{
    int feet,inch;
public:
    distanceFI(int f=0,int i=0);
    distanceFI(distanceFI &d);
    void input();
    void display();
    long distanceinch();
    float distancefeet();
    void adjust();

};

distanceFI::distanceFI(int f,int i)
{
    feet=f;
    inch=i;
    adjust();

}
distanceFI::distanceFI(distanceFI &d)
{
    feet=d.feet;
    inch=d.inch;
}
void distanceFI::input()
{
    cin>>feet>>inch;
    adjust();
}
void distanceFI::display()
{
    cout<<"distance ="<<feet<<"/"<<inch<<" / ";
}
void distanceFI::adjust()
{
   feet+=inch/12;
   inch=inch%12;
}
inline long distanceFI::distanceinch()
{
    return long(inch);
}
inline float distanceFI::distancefeet()
{
    float f=feet;
    f+=inch/12;
    return f;
}

int main()
{
    distanceFI d1,d2(5,12),d3(d2);
    d1.input();
    d1.display();
    cout<<d2.distanceinch();
    cout<<d3.distancefeet();
    return 0;

}
