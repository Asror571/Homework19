#include <stdio.h>

    void katta_letter(char user[]){  // Funcsiya yaratildi

        int count = 0;              // Qancha katta harf qatnashganligini hisoblash uchun

        for (int  i = 0; i < user[i] !=  '\0'; i++){  // For sikili matinni '\0' belgiga duch kelgancha ishlaydi

            if (user[i] >= 'A' && user[i] <= 'Z'){    // Agar foydalanuvchi kiritgan son ASCII tebeldagi Katta harflar orasida bo'lsa shart bajariladi
                count ++;          // count 1 ga oshadi
                  
            }
            
             
        }printf("Katta harflar soni :%d",count);  // Return count ni chiqaradi yani natijani !
        
    }
    int main(){
        char massiv[50];   // Foydalanuvchi maksimal 50 tagacha belgi kirita oladi

        printf("Matinni kiriting ");
        fgets(massiv,sizeof(massiv),stdin);  // fgets orqali foydalanuvchidan char seriasi olinadi

        katta_letter(massiv);  // Funksiyani  Call qiladi


return 0;

}
