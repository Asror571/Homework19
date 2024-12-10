#include <stdio.h>
 
int  low_to_upper(char user[]){    // Kichik harflarni katta harfga o'tkazuvchi funksiya yaratildi
     for (int i = 0; i < user[i] != '\0'; i++){    // Sikl '\0' duch kelmaguncha ishlaydi
         if (user[i] >= 'a' && user[i] <= 'z'){    // Agar kishik son bo'lsa 
            
         putchar(user[i] - 32);    // Shart  bajariladi va ASCCI jadvalida indexdan 32 ni ayiramiz
         }
     }
     
}
int main(){
    char enter[30];  // User maksimal 30 ta son kirita oladi !

    fgets(enter,sizeof(enter),stdin);  // Userdan char arrayi olinadiQ

    low_to_upper(enter);  //Funksiya call qilinadi
}