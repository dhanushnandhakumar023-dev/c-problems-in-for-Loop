#include<stdio.h>
int main(){
    int N, marks, total = 0, failedSubjects = 0;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        scanf("%d",&marks);
        total += marks;
        if(marks < 40){
            failedSubjects++;
        }
    }
    printf("Average Score: %d\n", total / N);
    printf("Failed Subjects: %d", failedSubjects);
    return 0;
}
