#include<bits/stdc++.h>

using namespace std;
class divide
{
     double a,b;
 public:
    void input()
    {
        cout<<"\nENTER TWO DOUBLE TYPE NUMBERS: ";
        cin>>a>>b;
    }
    void div()
    {
        try
        {
        if(b==0)
        throw(b);

        else
            cout<<"DIVISION IS: "<<(a/b);
        }
    catch(double b)
        {
        cout<<"----SECOND NO. IS ZERO---";
        cout<<"\nENTER DENOMINATOR AGAIN: ";
        cin>>b;
        cout<<"DIVISION IS: "<<(a/b);
        }
    }

};
int main()
{
    divide d;
    d.input();
    d.div();
}
