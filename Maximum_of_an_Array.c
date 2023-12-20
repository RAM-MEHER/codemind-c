#include<stdio.h>
int main(){
    int n , max;
    scanf("%i",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%i",&arr[i]);
       // arr[j++] = arr[i];
    }
    max = arr[0];
    for(int i = 0 ; i < n ; i++){
    if(arr[i] > max ){
        max = arr[i];
    }
    }
 printf("%i",max);
 return 0;
}