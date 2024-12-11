#include <stdio.h>
#include <ctype.h>

int katta_word(char arr[]){  //  katta harflarni hisoblash uchun funksiya yaratildi
    int count = 0;

        for (int  i = 0; arr[i] != '\0'; i++){ // Sikil '\0' ga duch kelmaguncha ishlaydi
             if (isupper(arr[i]))    // isupper funksiyasi bilan katta harf yoki katta harf emasligi aniqlandi
                count ++;    // Shart bajarilsa count 1 ga oshadi
             
             
        }
    printf("%d ta katta harf mavjud ",count);  // Return bizga natijani chiqarib beradi!
}
int main(){
    char user[40];   // Maksimum 40 ta belgi kiritadi

    printf("Matinni kiriting :"); 
    fgets(user,sizeof(user),stdin);   // Olindi

    katta_word(user);  // Funksiya call qilindi
}