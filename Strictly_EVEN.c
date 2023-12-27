#include<stdio.h>
int main(){
    int n , count = 0;
    scanf("%i" , &n);
    int ar[n] , i;
    for(i = 0 ; i < n ; i++){
        scanf("%i" , &ar[i]);
        if(ar[i] % 2 == 0){
            if(i % 2 == 0){
                continue;
            }
            else {
                count++;            printf("False");
                break;
            }
        }
    }
    if(count == 0) printf("True");
    return 0;
}