#include <stdio.h>

int low_to_upper(char massiv[]){      // Kichik harfni katta harfga o'tkazib beradigan funksiya 
    for (int  i = 0; i < massiv[i] != '\0'; i++){

        if (massiv[i] >= 'a' && massiv[i] <= 'z'){  // Kichik  harf bo'lsa 32 ni ayiradi
            putchar(massiv[i] - 32);

        }
        
    }
    
}int upper_to_low(char array[]){    // Katta harflarni kichik harfga o'tkazib beradigan funksiya 

    for (int  j = 0; array[j] != '\0'; j++){
        if (array[j] >= 'A'  && array[j] <= 'Z'){  // Katta harf bo'lsa ASCCI jaddvalidagi indexiga 32 ni qo'shadi
            putchar(array[j] + 32);

        }
        
    }
    
}
int main(){
    char user[30];

    printf("Kiriting :");
    fgets(user,sizeof(user),stdin);

    low_to_upper(user);    // Funksiyalar call qilindi
    upper_to_low(user);


}