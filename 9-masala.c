#include <stdio.h>
#include <string.h>

void chenge_belgi(char arr[]){       // '- ' LARNI ' ' JOYGA O'ZGARTIRIB BERADIGAN FUNKSIYA YARATILDI!
    for (int  i = 0; arr[i] != '\0'; i++){
        if (arr[i] == '-'){      // AGAR '-'   BO'LSA SART UNI ' ' GA O'ZGARTIRADI
            arr[i] = ' ';
    
        }
    }
}
int main(){
    char user[40];


    printf("Matn kiriting :");
    fgets(user,sizeof(user),stdin);  // FOYDFALANUVCHIDAN OLINDI

    chenge_belgi(user); // FUNKSIYA CALL QILINDI 

    printf("Natija %s",user);  // NATIJA CHIQARILDI
}