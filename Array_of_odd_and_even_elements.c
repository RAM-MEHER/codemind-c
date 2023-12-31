#include<stdio.h>
int main(){
    int n;
    scanf("%i" , &n);
    int ar[n] , i ;
    for(i = 0 ; i < n ; i++){
        scanf("%i" , &ar[i]);
        if(ar[i] % 2 == 1){
            printf("%i " ,ar[i]);
        }
    }
    for(i = 0 ; i < n ; i++){
        if(ar[i] % 2 == 0)
        printf("%i " ,ar[i]);
    }
    return 0;
}