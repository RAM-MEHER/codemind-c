#include<stdio.h>
int main(){
    int n , m , i , j , esum = 0 , osum = 0;
    scanf("%i %i" , &n , &m);
    int mat[n][m];
    for(i = 0 ; i < n ; i++){
        for(j = 0 ; j < m ; j++){
            scanf("%i" , &mat[i][j]);
        }
    }
    for(i = 0 ; i < n ; i++){
        for(j = 0 ; j < m ; j++){
          if(mat[i][j] % 2 == 0) esum = esum + mat[i][j];
          else osum = osum + mat[i][j];
        }
    } 
    printf("%i %i" , esum , osum);
    return 0;
}