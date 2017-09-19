#include<iostream.h>
#include<conio.h>

void gcd(int,int);

void main()
{
    int a,b;
    clrscr();
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    gcd(a,b);
    getch();
  //  return 0;
}

//function to calculate g.c.d
void gcd(int a,int b)
{
    int m,n;

    m=a;
    n=b;

    while(m!=n)
    {
        if(m>n)
            m=m-n;
        else
            n=n-m;
    }

    cout<<"\nH.C.F of"<<a<<" & "<<b<<" is "<<m;
}
