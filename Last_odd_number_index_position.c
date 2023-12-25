#include<stdio.h>
int main(){
    int n , i;
    scanf("%i" , &n);
    int ar[n] , last_oind;
    for(i = 0 ; i < n ; i++){
        scanf("%i" , &ar[i]);
        if(ar[i] % 2 != 0) last_oind = i;
    }
    printf("%i" , last_oind);
    return 0;
}