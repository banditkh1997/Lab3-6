#include <stdio.h>
int main(void)
{
  float r, h,ans;
  printf("Enter Radius : ");
  scanf("%f", &r);
  printf("Enter Height : ");
  scanf("%f", &h);
  ans=(2*3.14*r)*h+2*(3.14*r*r);
  printf("Ans = %.2f",ans);
  return 0;
}