#include<stdio.h>
struct _fraction
{
int num,den;
};
typedef struct _fraction Fraction;

int find_gcd(int a,int b)
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

Fraction input()
{
  Fraction F;
  printf("enter the fraction one a/b in the form a_b\n");
  scanf("%d%d",&F.num,&F.den);
  return F;
}

void input_in_fractions(int n, Fraction f[n])
{
  printf("enter the number fractions: \n");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
    {
      f[i]=input();
    }
}

Fraction add_fractions(Fraction f1,Fraction f2)
{
  Fraction f3;
  int nu,de;
  nu=f1.num * f2.den + f2.num * f1.den;
  de=f2.den * f1.den
    ;
  f3.num=nu/find_gcd(nu,de);
  f3.den=de/find_gcd(nu,de);
  return f3;
}

Fraction add_n_fractions(int n,Fraction f[n])
{
  Fraction S;
  S.num=1;
  S.den=1;
  for(int i=0;i<n;i++)
    {
      S=add_fractions(S,f[i]);
    }
  return S;
}

void output(int n,Fraction f[n],Fraction Sum)
{
  for(int i=0;i<n-1;i++)
    {
      printf("%d/%d +",f[i].num,f[i].den);
    }
  printf(" %d/%d \n= %d/%d\n",f[n-2].num,f[n-2].den,f[n-1].num,f[n-1].den);
}
int main()
{
  int n;
  Fraction a[n];
  Fraction R;
  input_in_fractions(n,a);
  R=add_n_fractions(n,a);
  output(n,a,R);
  return 0;
}