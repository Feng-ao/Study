#include <stdio.h>
int main()
{
    int hour1,munite1;
    int hour2,munite2;

    scanf("%d %d",&hour1,&munite1);
    scanf("%d %d",&hour2,&munite2);

    int t1 = hour1 * 60 + munite1;
    int t2 = hour2 * 60 + munite2;

    int t = t2 - t1;

    printf("时差是%d小时%d分",t/60,t%60);
}