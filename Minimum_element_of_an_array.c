#include<stdio.h>
int main(){
    int n , i , min;
    scanf("%i" , &n);
    int ar[n];
    for(i = 0 ; i < n ; i++){
        scanf("%i" , &ar[i]);
    }
    min = ar[0];
    for(i = 0 ; i < n ; i++){
        if(min > ar[i]){
            min = ar[i];
        }
    }
    printf("%i",min);
    return 0;
}