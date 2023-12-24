#include<stdio.h>
int main(){
    int n , count = 0 , i , z;
    scanf("%i" , &n);
    int ar[n];
    for(i = 0 ; i < n ; i++){
        scanf("%i" , &ar[i]);
    }
    scanf("%i" , &z);
    for(i = 0 ; i < n ; i++){
        
        if(z == ar[i]) count++;
    }
    printf("%i",count);
    return 0;
}