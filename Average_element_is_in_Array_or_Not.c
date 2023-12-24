#include<stdio.h>
int main(){
    int n;
    scanf("%i" , &n);
    int ar[n] , sum = 0 , count = 0;
    for(int i = 0 ; i < n ; i++){
        scanf("%i" , &ar[i]);
        sum = sum + ar[i];
    }
    int avg = sum / n;
    //float avg = (float) sum / n; --> not right in this sum.
 for(int i = 0 ; i < n ; i++){
     if(avg == ar[i]) count++;
 }
 if(count > 0) printf("True");
 else printf("False");
    return 0;
}