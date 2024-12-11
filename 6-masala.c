#include <stdio.h>
#include <string.h>
#include <ctype.h>

void find_word(char massiv[],char massiv1[]){
    int count ,j;

        for (int  i = 0; i < massiv1[i+1] != '\0'; i++){
            for ( ; j < massiv[j]; j++){

                if (massiv1[i] == massiv[j]){
                    count++;
                    j++;
                    break;
                }
                else{
                    count = 0;
                    j = 0;
                    
                }
                
                
            }
            
        }if (count == strlen(massiv1)-1){
            printf("BU  so'z  seriada mavjud %c ",massiv1);
        }else{
            printf("So'z seriada mavjud emas !");
        }
        
        
}