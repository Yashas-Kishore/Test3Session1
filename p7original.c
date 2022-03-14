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
void output(Fraction f1,Fraction f2,Fraction f3)
{
  printf("the sum of fractions %d/%d and %d/%d is given by %d/%d\n",f1.num,f1.den,f2.num,f2.den,f3.num,f3.den);
}
int main()
{
  Fraction a,b,c;
  a=input();
  b=input();
  c=add_fractions(a,b);
  output(a,b,c);
  return 0;
}
