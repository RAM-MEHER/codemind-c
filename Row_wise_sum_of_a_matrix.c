#include<stdio.h>
int main(){
    int i , j , sum = 0;
    scanf("%i %i" , &i , &j);
    int ar[i][j];
    int n , m;
    for(n = 0 ; n < i ; n++){
        for(m = 0 ; m < j ; m++){
            scanf("%i " , &ar[i][j]);
            sum = sum + ar[i][j];
        }
        printf("%i " , sum);
        sum = 0;
    }
    return 0;
}