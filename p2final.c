#include<stdio.h>
struct _fraction
{
  int num,den;
};
typedef struct _fraction fraction;
fraction input_fraction()
{
  fraction f;
  printf("enter fraction\n");
  scanf("%d %d",&f.num,&f.den);
  return f;
}
fraction smallest_fraction(fraction f1,fraction f2,fraction f3)
{
  int sden = f1.den * f2.den * f3.den;
  int a, b, c;
  a=f1.num * sden/f1.den;
  b=f2.num * sden/f2.den;
  c=f3.num * sden/f3.den;
  if(a>b && a>c)
  {
    return f1;
  }
  else if(b>c)
  {
    return f2;
  }
  else
  {
    return f3;
  }
}
void output(fraction f1,fraction f2,fraction f3,fraction smallest)
{
  printf("the smallest of the three fractions is %d/%d",smallest.num,smallest.den);
}
int main()
{
  fraction f1,f2,f3,smallest;
  f1=input_fraction();
  f2=input_fraction();
  f3=input_fraction();
  smallest = smallest_fraction(f1,f2,f3);
  output(f1,f2,f3,smallest);
  return 0;
}
