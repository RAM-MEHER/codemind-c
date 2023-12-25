#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%i" , &n);
    int ar[n] , i , esum = 0 , osum = 0;
    for(i = 0 ; i < n ; i++){
        scanf("%i" , &ar[i]);
        if(i % 2 == 0) esum = esum + ar[i];
        else osum = osum + ar[i];
    }
 int diff = abs(esum - osum);
 printf("%i" , diff);
 return 0;
}