#include<bits/stdc++.h>
#include<fstream>

using namespace std;

int main()
{
    ofstream out1("country.txt"), out2("capital.txt");
    char a[30],b[30];
    int n,t;
    cout<<"HOW MANY RECORDS YOU WANT TO ENTER:";
    cin>>n;
    t = n;
    while(n--)
    {
        cout<<"\nENTER COUNTRY: ";
        cin>>a;
out1<<" ";
        out1<<a;

        cout<<"\nENTER CAPITAL: ";
        cin>>b;
out2<<" ";
        out2<<b;

    }
    out1.close();
    out2.close();

    cout<<"-------------------------------------------\n";

    ifstream in1("country.txt"), in2("capital.txt");

    string s1,s2;
    while(!in1.eof())
    {
        in1>>s1;
        cout<<"COUNTRY: "<<s1<<endl; cout<<in1.tellg();
    }

    cout<<"\n";
    while(!in2.eof())
    {
        in2>>s2;
        cout<<"CAPITAL: "<<s2<<endl;
    }
    in1.close();
    in2.close();
    return 0;
}
