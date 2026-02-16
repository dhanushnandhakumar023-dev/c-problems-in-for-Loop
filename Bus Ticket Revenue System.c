#include<stdio.h>
int main(){
    int N, fare, totalCollection = 0;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        scanf("%d",&fare);
        totalCollection += fare;
    }
    printf("Total Collection: ₹%d", totalCollection);
    return 0;
}
