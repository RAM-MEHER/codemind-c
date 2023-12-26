#include<stdio.h>
int main(){
    int n;
    scanf("%i" , &n);
    int ar[n] , i , ecount = 0;
    for(i = 0 ; i < n ; i++){
        scanf("%i" , &ar[i]);
    }
    
    for(i = 1 ; i < n - 1; i++){
        if(ar[i] % 2 == 0){
            if(ar[i - 1] % 2 != 0 && ar[i + 1] % 2 != 0)
            ecount++;
        }
    }
    printf("%i" , ecount);
    return 0;
}