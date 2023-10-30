#include<iostream>
#include<math.h>
using namespace std;
int main()
{int sum=0;
  int n=1110110;
  int i=0;
  while(n>0)
  {
    int r =n%10;
       n=n/10;
       sum=sum+r*pow(2,i);
       i++;

  }
printf("%d\n",sum);

n=118;
int a[10],it=1;
while(n>0)
  {
    int r =n%2;
       n=n/2;
      a[it]=r;
      it++;

  }
  for(int k=it-1;k>=1;k--)
  {
    printf("%d",a[k]);
  }

}
