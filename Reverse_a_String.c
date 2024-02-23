#include<stdio.h>
#include<string.h>
int main(){
    char str[100] , c;
    scanf("%[^
]s" , str);
   int i , j , string_length = strlen(str);
   for(i = 0 , j = string_length - 1 ; i <= j ; i++ , j--){
       c = str[i];
       str[i] = str[j];
      str[j] = c;
   }
   printf("%s" , str);
    return 0;
}