#include<stdio.h>
int main(){
    int N, rainfall;
    int totalRainfall = 0;
    int heavyRainDays = 0;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        scanf("%d",&rainfall);
        totalRainfall += rainfall;
        if(rainfall > 50){
            heavyRainDays++;
        }
    }
    printf("Total Rainfall: %d\n", totalRainfall);
    printf("Heavy Rain Days: %d", heavyRainDays);
    return 0;
}
