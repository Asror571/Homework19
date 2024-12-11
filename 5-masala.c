#include <stdio.h>
#include <string.h>

int main(){
    char array[300], c;
    int length , max = 0;

    printf("So'zlarni kiriting :");
    fgets(array,sizeof(array),stdin);
    
    length = strlen(array);

    c = array[0];

        for (int  i = 0; i < length; i++)
            if (c == array[i]) 
                max++;
         
        for (int  i = 1; i < length; i++){
            int count = 0;
        
        for (int  j = 0; j < length; j++){
            if (array[i]  ==  array[j]){
                count++;
            }
            
        }if (max < count){
            max = count;
            c = array[i];
        }
        
        
        }
    printf("Eng ko'p ishtirok etgan harf %c ' '  %d marta",c,max);
        

}