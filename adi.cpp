#include <iostream>
using namespace std;
class abc
{
    int a;
    public:
    abc(int x)
    {
        a=x;
    }
    void fun()
    {
        int p=1;
        for (int i=a;i>1;i--)
        {
            p=p*i;
        }
        cout<<"Factorial is : "<<p;
    }
};

void main()
{
int x;
cout<<"Enter number \n";
cin>>x;
abc obj(x);
obj.fun();

}