#include <stdio.h>

int check_number(char number[]){        // Nechta raqam qatnashganligini hisoblovchi funksiya yaratildi
    int count = 0;         // Netcha qatnashganligini hisoblash uchun count nomli o'zgaruvchi olindi
    
        for (int  i = 0; number[i] != '\0'; i++) {  // Sikl '\0' belgisiga duch kelmaguncha ishlaydi

            if (number[i] >= '0'  && number[i] <= '9'){   // Raqam yoki raqam emasigini tekshirish 
                count++;        // Rost bo'lsa count 1 ga oshadi
            }
            
        }
    printf("Raqamlar soni :%d",count);    // Return  natijani yani count ni qaytaradi
}
int main(){
    char user[50];       // User maksimal 50 ta belgi kirita oladi!

    printf("Kiriting :");
    fgets(user,sizeof(user),stdin);     // user da belgilar olinadi 

    check_number(user);       // Funksiya call qilinadi!
}