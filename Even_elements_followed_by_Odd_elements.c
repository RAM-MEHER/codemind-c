#include<stdio.h>
int main(){
    int n , i;
    scanf("%i" , &n);
    int arr[n];
    for(i = 0 ; i < n ; i++){
        scanf("%i" , &arr[i]);
        if(arr[i] % 2 == 0) printf("%i ",arr[i]);
    }
    for(i = 0 ; i < n ; i++){
        if(arr[i] % 2 == 1) printf("%i ",arr[i]);
    }
    return 0;
}