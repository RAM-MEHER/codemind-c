#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%i" , &n);
    int i , ar[n] , sum = 0 , gum = 0;
    for(i = 0 ; i < n ; i++){
        scanf("%i" , &ar[i]);
        if(ar[i] % 2 == 0){
            sum = sum + ar[i];
        }
        else{
            gum = gum + ar[i];
        }
    }
    int diff = abs(sum - gum);
    printf("%i",diff);
    return 0;
}