#include<stdio.h>
int main(){
    int n;
    scanf("%i" , &n);
    int ar[n] , sum = 0;
    for(int i = 0 ; i < n ; i++){
        scanf("%i" , &ar[i]);
        sum = sum + ar[i];
    }
    float avg = (float) sum / n;
    printf("%.2f" , avg);
    return 0;
}