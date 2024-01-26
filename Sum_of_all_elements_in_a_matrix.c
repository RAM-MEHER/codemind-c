#include<stdio.h>
int main(){
    int n , m , i , j ,sum=0;
   scanf("%i %i" , &n , &m);
   int mat[n][m];
   for(i = 0 ; i < n ; i++){
       for(j = 0 ; j < m ; j++){
           scanf("%i" , &mat[i][j]);
           sum = sum + mat[i][j];
       }
   }
   printf("%i" , sum);
   return 0;
}