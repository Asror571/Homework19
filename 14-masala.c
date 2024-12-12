#include <stdio.h>
#include <string.h>
#include<ctype.h>

void word(char arr[]){   // So'zlarni teskari  qilib beradigan funksiya yaratildi 
    int start = 0, end ;    
    int length = strlen(arr);  // User kiritgan so'zni uzunligini aniqlab beradi

        for (int  i = 0; i <= length; i++){ 
            if (arr[i] == ' ' || arr[i] == '\0'){
                end = i - 1;

                while (start < end){
                    char temp = arr[start]; // Bable sort orqali end birinchi indexni va ozirgi indexni joyi almashtirildi
                    arr[start] = arr[end];
                    arr[end] = temp;

                    start++;   // O'sish tartibida 
                    end--;     // Kamayish tartibida 
                }
                
                start = i+1;  // Har sikl aylanganda  start yangilanadi
            }
            
        }
        
    
}
int main(){
    char user[100];

    printf("So'zlarni kiriting : "); 
    fgets(user,sizeof(user),stdin);    //  Foydalanuvchida seria olindi 

    word(user);
    
    printf("So'zlarni teskarisi : %s",user);  // NAtyija chiqarildi 

    return 0;
}

  

