#include<stdio.h>
int main(){
    int n , i  , j , count = 0;
    scanf("%i" , &n);
    for(i = 1 ; i <= n ; i++){
        for(j = 1 ; j <= n ; j++){
            if((i + j) % 2 == 1) count++;
        }
    }
    printf("%i" , count);
    return 0;
}