#include<stdio.h>
int main(){
    int n;
    scanf("%i" , &n);
    int i , ar[n] , sum = 0;
    for(i = 0 ; i < n ; i++){
        scanf("%i" , &ar[i]);
        if(ar[i] % 2 == 0){
            sum = sum + ar[i];
        }
    }
    printf("%i",sum);
    return 0;
}