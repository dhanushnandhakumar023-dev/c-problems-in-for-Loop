#include <stdio.h>
int main()
{
    int n;
    int count = 0;
    scanf("%d", &n);
    for(int i=2;i<=n;i++)
    {
        int factors=0;
        for(int j=1;j<=i;j++)
        {
            factors +=(i%j== 0);
        }
        count+=(factors == 2);
    }
    printf("%d",count);
    return 0;
}
