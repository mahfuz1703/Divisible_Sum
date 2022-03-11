#include <stdio.h>

int main(){
    int i, N, M, Q, sum=0;
    scanf("%d %d %d", &N, &M, &Q);

    for(i=N; i<=M; i++){
        if(i%Q==0){
            //printf("%d\n", i);
            sum+=i;
        }
    }

    printf("The sum is: %d\n", sum);


    return 0;
}
