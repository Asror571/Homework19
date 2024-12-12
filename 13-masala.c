#include <stdio.h>
#include <string.h>
#include <ctype.h>

int find_palindrom(char arr[],int length){  // Palimdrom yoki palindrom emasligini aniqlash uchu funksiya yartildi
    int start = 0,  end = length-1;     // Boshlanishi  va tugash indexslari belgilab olindi 

    while (start < end){     // Startdan endga cha davom etadi 
        if (arr[start] !=  arr[end]){    // Agar user kiritigan so'zni boshi va oxiri teng bo'lmasa Plindrom emas 
            return 0;
        }
        start ++;   // Start o'sib tekshirib boradi
        end --;  // End kamayish tartibida tekshirib boradi
    }
    return 1;   
    
}
int main(){
    char user[40];

    printf("So'z kiriting ");   // Foydalanuvchidan so'raldi 
    scanf("%s",user);

    if (find_palindrom(user,strlen(user)))  // Funksiya call qilinib tekshirildi gar funsiya 1 qaytarsa Palindrom hisoblanadi 
        printf("Palindrom\n");
    else
    printf("Palindrom emas\n");  // Aks holda Palindrom emas 

 return  0;   

}