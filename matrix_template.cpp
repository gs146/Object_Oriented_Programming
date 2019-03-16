#include<bits/stdc++.h>

using namespace std;

template<class T>
class matrix
{
    T a[10][10],b[10][10];
public:
    void input(T arr[][10],int n,int m);
    void display(T arr[][10],int n, int m);
    void addition(T a[][10], T b[][10],T c[][10],int n, int m, int p, int q);
    void multiplication(T a[][10], T b[][10],T c[][10],int n, int m, int p, int q);
};

template<class T>
void matrix<T>::input(T arr[][10],int n,int m)
{
    int i,j;

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cin>>arr[i][j];
    }
}
template<class T>
void matrix<T>::display(T arr[][10],int n,int m)
{
    int i,j;

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cout<<arr[i][j]<<"  ";
            cout<<endl;
    }
}
template<class T>
void matrix<T> :: addition(T a[][10], T b[][10],T c[][10],int n, int m, int p, int q)
{
    int i,j;
        for(i=0;i<n;i++)
        {

            for(j=0;j<m;j++)
            {
                c[i][j]=a[i][j]+b[i][j];
            }
        }

}

template<class T>
void matrix<T> :: multiplication(T a[][10], T b[][10],T c[][10],int n, int m, int p, int q)
{
    int i,j,k;
        for(i=0;i<n;i++)
        for(j=0;j<q;j++)
        c[i][j]=0;

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                for(k=0;k<p;k++)
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
}

int main()
{
    int n,m,p,q,choice,a[10][10],b[10][10],sup[10][10];
    float c[10][10],d[10][10],s[10][10];

    cout<<"\nEnter size of first matrix:";
    cin>>n>>m;
    cout<<"\nEnter size of second matrix:";
    cin>>p>>q;
    cout<<"\nEnter DTYPE choice for performing operations: ** 1.int\t2.float ** ";
    cin>>choice;
    if(choice==1)
    {
        matrix<int>mat;
        cout<<"\nENTER ELEMENTS IN A:\n";
        mat.input(a,n,m);

        cout<<"\nENTER ELEMENTS IN B:\n";
        mat.input(b,p,q);

        cout<<"\nARRAY A IS:\n";
        mat.display(a,n,m);

        cout<<"\nARRAY B IS:\n";
        mat.display(b,p,q);


        if(n==p && m==q)
        {
            cout<<"\nADDITION IS:\n";
            mat.addition(a,b,sup,n,m,p,q);
            mat.display(sup,n,m);
        }
        else
            cout<<"\n--------ADDITION IS NOT POSSIBLE--------\n";
        if(m==p)
        {
            cout<<"\nMULTIPLICATION IS:\n";
            mat.multiplication(a,b,sup,n,m,p,q);
            mat.display(sup,n,q);
        }
        else
            cout<<"\n-----MULTIPLICATION IS NOT POSSIBLE------\n";
    }
    else
    {
        matrix<float>mat;
        cout<<"\nENTER ELEMENTS IN A:\n";
        mat.input(c,n,m);

        cout<<"\nENTER ELEMENTS IN B:\n";
        mat.input(d,p,q);

        cout<<"\nARRAY B IS:\n";
        mat.display(c,n,m);

        cout<<"\nARRAY B IS:\n";
        mat.display(d,p,q);

        if(n==p && m==q)
        {
            cout<<"\nADDITION IS:\n";
            mat.addition(c,d,s,n,m,p,q);
            mat.display(s,n,m);
        }
        else
            cout<<"\n--------ADDITION IS NOT POSSIBLE--------\n";

        if(m==p)
        {
            cout<<"\nMULTIPLICATION IS:\n";
            mat.multiplication(c,d,s,n,m,p,q);
            mat.display(s,n,q);
        }
        else
            cout<<"\n-----MULTIPLICATION IS NOT POSSIBLE------\n";
    }
}
