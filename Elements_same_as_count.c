#include<stdio.h>
int main(){
    int n , count = 0 , cou = 0;
    scanf("%i" , &n);
    int ar[n] , i;
    for(i = 0 ; i < n ; i++){
        scanf("%i" , & ar[i]);
    }
    
    for(i = 0 ; i < n - 1; i++){
        for(int j = 0 ; j < n ; j++){
        if(ar[i] == ar[j]){
            count++;
            
        }
    }
     if(count == ar[i] && count >= i){
         cou++;
            printf("%i " , ar[i]);
        }
   
        count = 0;
    }
    if(cou == 0) printf("-1");
    return 0;
}