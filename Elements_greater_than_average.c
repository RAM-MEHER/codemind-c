#include<stdio.h>
int main(){
    int n;
    scanf("%i" , &n);
    int ar[n] , i , avg , sum = 0 , count = 0;;
    for(i = 0 ; i < n ; i++){
        scanf("%i" , &ar[i]);
        sum = sum + ar[i];
    }
    avg = sum / n;
    for(i = 0 ; i < n ; i++){
        if(ar[i] >= avg) count++;
    }
    printf("%i" , count);
    return 0;
}