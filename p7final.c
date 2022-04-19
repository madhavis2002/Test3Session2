#include<stdio.h>
struct _fraction
{
int num,den;
};
typedef struct _fraction Fraction;
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
Fraction add_fractions(Fraction f1, Fraction f2)
{
  Fraction c,a;
  a.num=f1.num * f2.den + f2.num * f1.den ;
  a.den=f1.den * f2.den;
  c.num=a.num/find_gcd(a.num,a.den);
  c.den=a.den/find_gcd(a.num,a.den);
  return c;
}
void output(Fraction f1, Fraction f2, Fraction sum)
{
  printf("the sum of the fractions %d/%d and %d/%d is %d/%d\n",f1.num,f1.den,f2.num,f2.den,sum.num,sum.den);
}
int main()
{
  Fraction a,b,c;
  a=input_fraction();
  b=input_fraction();
  c=add_fractions(a,b);
  output(a,b,c);
  return 0;
}
