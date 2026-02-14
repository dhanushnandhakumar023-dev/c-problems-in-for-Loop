#include <stdio.h>
int main()
{
    int n,p;
    int power=1;
    scanf("%d %d",&n,&p);
    for(int i=0;i<p;i++)
    {
        power=power*n;
    }
    printf("%d",power);
    return 0;
}
