#include<stdio.h>
main()
{
int n,a[]={0,0,0,0,0,0,0,0,0,0};
scanf("%d",&n);
while (n)
{
a[n%10]++;
n/=10;
}
for (n=0;n<10;n++)
printf("%d�X�{�L %d��\n",n,a[n]);
}
