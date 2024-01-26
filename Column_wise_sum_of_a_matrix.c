#include<stdio.h>
int main(){
    int n , m , i , j , sum = 0;
    scanf("%i %i" , &n , &m);
    int mat[n][m];
    for(i = 1 ; i <= n ; i++){
        for(j = 1 ; j <= m ; j++){
            scanf("%i" , &mat[i][j]);
        }
    }
   for(j = 1 ; j <= m ; j++){
        for(i = 1 ; i <= n ; i++){
            sum = sum + mat[i][j];
        }
        printf("%i " , sum);
        sum = 0;
    }
    return 0;
}