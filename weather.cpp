#include<bits/stdc++.h>
using namespace std;

class weather
{
 int hight,lowt,amt_snow,amt_rain,day;

 public:
 static int cnt;
 weather()    //default constructor
 {

   day=++cnt;
   hight=0;
   lowt=0;
   amt_snow=0;
   amt_rain=0;

  }
 void input()
 {


   cout<<"\nENTER HIGH TEMPERATURE:";
   cin>>hight;
   cout<<"\nENTER LOW TEMPERATURE:";
   cin>>lowt;
   cout<<"\nENTER AMOUNT OF SNOW:";
   cin>>amt_snow;
   cout<<"\nENTER AMOUNT OF RAIN:";
   cin>>amt_rain;
 }

 void display()
 {

    cout<<day<<"\t"<<hight<<"\t\t"<<lowt<<"\t\t"<<amt_snow<<"\t\t"<<amt_rain<<"\n";
 }

 friend void avg(int a[],int n);
}w2[30];
int weather::cnt;

 void avg(int a[],int n)
 {
     int htemp=0,ltemp=0,amt_snow=0,amt_rain=0;
     for(int i=0;i<n;i++)
     {

         htemp=htemp+w2[a[i]-1].hight;
         ltemp=ltemp+w2[a[i]-1].lowt;
         amt_snow=amt_snow+w2[a[i]-1].amt_snow;
         amt_rain=amt_rain+w2[a[i]-1].amt_rain;
     }
     htemp=htemp/n;
     ltemp=ltemp/n;
     amt_snow=amt_snow/n;
     amt_rain=amt_rain/n;
     cout<<"\nTHE AVERAGE OF ALL DATA OF A MONTH IS:\n";
     cout<<"HIGH TEMP.\t\tLOW TEMP.\tAMT. OF SNOW\tAMT. OF RAIN\n";
     cout<<htemp<<"\t\t"<<ltemp<<"\t"<<amt_snow<<"\t"<<amt_rain;
 }

 int main()
 {
   int n;


   cout<<"HOW MUCH DATA YOU WANT TO ENTER:";
   cin>>n;
   int a[n];

   for(int i=0;i<n;i++)
   {
       cout<<"\nENTER THE DAY OF MONTH:";
       cin>>a[i];
       w2[a[i]-1].input();
   }


   cout<<" DAY \n OF\nMONTH"<<"\t"<<"HIGH TEMP.\t"<<"LOW TEMP\t"<<"AMOUNT OF SNOW\t"<<"AMOUNT OF RAIN\n";
   for(int i=0;i<30;i++)
   {
    w2[i].display();
   }

   avg(a,n);
   return(0);
 }

