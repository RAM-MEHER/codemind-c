#include<stdio.h>
int main(){
    int r , c , x;
    scanf("%i %i" , &r , &c);
    int mat[r][c];
    int i , j , count = 0;
    for(i = 0 ; i < r ; i++){
        for(j = 0 ; j < c ; j++){
            scanf("%i" , &mat[i][j]);
        }
    }
    scanf("%i" , &x);
     for(i = 0 ; i < r ; i++){
        for(j = 0 ; j < c ; j++){
            if(mat[i][j] == x) count++;
        }
    }
    if(count != 0) printf("1");
    else printf("0");
    return 0;
    
}