#include<stdio.h>
int main(){
    int n , i , z , count = 0;
    scanf("%i" , &n);
    int ar[n];
    for(i = 0 ; i < n ; i++){
        scanf("%i" , &ar[i]);
    }
    scanf("%i" , &z);
    for(i = 0 ; i < n ; i++){
        
        if(z == ar[i]) count++;
    }
if(count > 0 ) printf("True");
else printf("False");
    return 0;
}