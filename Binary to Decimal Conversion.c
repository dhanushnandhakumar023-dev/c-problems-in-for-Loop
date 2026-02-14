#include <stdio.h>
int main()
{
    int n;
    int decimal=0;
    int power =1;
    scanf("%d",&n);
    for(int i=n;i>0;i=i/10)
    {
        int digit = i%10;
        decimal=decimal + digit*power;
        power=power*2;
    }
    printf("%d", decimal);
    return 0;
}
