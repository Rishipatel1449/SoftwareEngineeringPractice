#include <stdio.h>

int main()
{
    printf("Welcome to the page of patterns\n");
    
    
     /*
    first pattern 
     1
     1 0 
     1 0 1 
     1 0 1 0 
     1 0 1 0 1
    */
    printf("\n");
    printf("Pattern number 1 : \n");
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= i; j++){
            if(j % 2 == 0){
                printf(" 0 "); 
            }else{
                printf(" 1 ");
            }
           
        }
         printf("\n"); 
        
    }
     /*
    Second pattern 
     1
     2 3 
     4 5 6 
     7 8 9 10 
     11 12 13 14 15
    */
    printf("\n");
    int num = 1; 
    printf("Pattern number 2 : \n");
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= i; j++){
            printf(" %d ",num++);
           
        }
         printf("\n"); 
        
    }
      /*
    third pattern 
     A
     B C 
     D E F 
     G H I J 
     K L M N O
    */
    printf("\n");
    char alpha = 'A'; 
    printf("Pattern number 3 : \n");
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= i; j++){
            printf(" %c ",alpha++);
           
        }
         printf("\n"); 
        
    }
       /*
    fourth pattern 
     A
     A B 
     A B C 
     A B C D 
     A B C D E
    */
    printf("\n"); 
    printf("Pattern number 4 : \n");
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= i; j++){
            char alpha = 'A';
            char sum = alpha + j - 1; 
            printf(" %c ",sum);
           
        }
         printf("\n"); 
        
    }
       /*
    fifth pattern 
          *
       *  *  * 
     * *  *  * * 
    *  *  *  * * * 
    
    */
    printf("\n"); 
    printf("Pattern number 5 : \n");
    for(int i = 1; i <= 5; i++){
        for(int j = i; j < 5; j++ ){
            printf(" "); 
            
        }
        for(int j = 1; j <= i; j++){
            printf(" * ");
        }
        printf("\n"); 
    }
        /*
    Sixth pattern 
    *
    * *   
    * * * 
    * * * *  
    * * * * *
    * * * *
    * * * 
    * * 
    *
    
    */
    printf("\n"); 
    printf("Pattern number 6 : \n");
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= i; j++ ){
            printf("*"); 
            
        }
        printf("\n"); 
        
    }
    for(int i = 1; i <= 5; i++){
      for(int j = i; j < 5; j++){
            printf(" ");
        }
        printf("\n");
    }
    
    
    
    
    

    return 0;
}

