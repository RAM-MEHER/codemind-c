#include<stdio.h>
int main(){
    int n;
    scanf("%i" , &n);
    int arr[n] , i , sum = 0;
    for(i = 0 ; i < n ; i++){
        scanf("%i" , &arr[i]);
        if(i % 2 != 0) sum = sum + arr[i];
    }
    printf("%i",sum);
    return 0;
}