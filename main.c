#include <stdio.h>
int main()
{
    int x,y,z,i,j,sumeven=0,sumodd=0;
    printf(“ENTER VALUES FOR X Y Z (ASCENDING):\n”);
    scanf(“%d %d %d”,&x, &y, &z);
    i=x;
    j=y;
    if (i%2==0)
    i+=2; 
    if(i%2!=0)
    i+=1;
    if (j%2!=0)
    j+=2;
    if(j%2==0)
    j+=1;
    for(i;i<y;i+=2)
    {
     sumeven+=i; }
     for (j;j<z;j+=2)
     { sumodd+=j; }
    printf(“SUM OF EVEN NUMBERS BETWEEN X AND Y:%d\n”,sumeven);
    printf(“SUM OF ODD NUMBERS BETWEEN Y AND Z:%d\n-“,sumodd);
    return 0;
}
