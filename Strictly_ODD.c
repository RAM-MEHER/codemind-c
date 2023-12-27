#include<stdio.h>
int main(){
    int n;
    scanf("%i" , &n);
    int ar[n] , i , c = 0;
    for(i = 0 ; i < n ; i++){
        scanf("%i" , &ar[i]);
        if(ar[i] % 2 != 0){
            if(i % 2 != 0){
                continue;
            }
            else{
                printf("False");
                c++;
                break;
            }
        }
    }
    if(c == 0) printf("True");
    return 0;
}