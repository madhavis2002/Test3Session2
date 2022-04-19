#include<stdio.h>
struct _fraction
{
int num,den;
};
typedef  struct _fraction Fraction;
int input_n()
{
  int n;
  printf("enter the value of n\n");
  scanf("%d",&n);
  return n;
}
int find_gcd(int a, int b)
{
    int t;
    while (b!=0)
      {
        t = b;
        b = a%b;
        a = t;
      }
    return a;
}
Fraction input_fraction()
{
  Fraction a;
  printf("enter the fraction \n");
  scanf("%d%d",&a.num,&a.den);
  return a;
}
void input_n_fractions(int n, Fraction f[n])
{
  for (int i=0;i<n;i++)
    {
      f[i]=input_fraction();
    }
}
Fraction add_fractions(Fraction f1, Fraction f2)
{
  Fraction c,a;
  a.num=f1.num * f2.den + f2.num * f1.den ;
  a.den=f1.den * f2.den;
  c.num=a.num/find_gcd(a.num,a.den);
  c.den=a.den/find_gcd(a.num,a.den);
  return c;
}
Fraction add_n_fractions(int n,Fraction f[n])
{
 Fraction a;
  /*a.num=1;
  a.den=1;*/
  a=f[0];
  for (int i=1;i<n;i++)
    {
      a=add_fractions(a,f[i]);
    }
  return a;
}
void output(int n, Fraction f[n], Fraction sum)
{
  int i;
  printf("the sum of %d fractions - ",n);
  for (i=0;i<n-1;i++)
    {
      printf("%d/%d+ ",f[i].num,f[i].den);
    }
  printf("%d/%d is %d/%d\n",f[i].num,f[i].den,sum.num,sum.den);
}
int main()
{
  int n;
  n=input_n();
  Fraction f[n];
  input_n_fractions(n,f);
  Fraction a=add_n_fractions(n,f);
  output(n,f,a);
  return 0;
}
