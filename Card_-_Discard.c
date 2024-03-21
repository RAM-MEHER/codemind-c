#include<stdio.h>
int main(){
    int n;
    scanf("%i" , &n);
    int x , y;
    x = 52 / n;
    y = x * n;
    printf("%i" , 52 - y);
    return 0;
}