#include<stdio.h>
int main(){
    int N, units, total_units = 0;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        scanf("%d",&units);
        total_units += units;
    }
    printf("Total Units: %d", total_units);
    return 0;
}
