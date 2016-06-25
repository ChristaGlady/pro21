#include<iostream.h>
#include<conio.h>
class fib
{
  public:
  int a,b,c;
  void generator(int);
};
void fib::generator(int n)
{
  a=0,b=1;
 cout<<a<<" "<<b;
 for(int i=1;i<=n-2;i++)
 {
 c=a+b;
 cout<<" "<<c;
 a=b;
 b=c;
 }
}
void main()
{
  clrscr();
  int n;
  cout<<"Enter number of terms you need in the series:";
  cin>>n;
  fib ob;
  ob.generator(n);
  getch();
}
