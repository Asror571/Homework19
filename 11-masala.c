#include <stdio.h>
#include <string.h>

void teng(char array[], char array2[]) {
    if (strlen(array) != strlen(array2)) {   // Solishtirildi
        printf("Ikkita seria teng emas\n");
        return;
    }

    for (int i = 0; array[i] != '\0'; i++) {  
        if (array[i] != array2[i]) {             // Solishtirildi
            printf("Ikkita seria teng emas\n");
            return;
        }
    }

    printf("Ikkita seria bir xil\n");
}

int main() {
    char user[40];
    char user1[40];

    printf("1-seriyani kiriting: ");  // 1-seriya kiritilishi   soraldi
    fgets(user, sizeof(user), stdin);

    printf("2-seriyani kiriting: ");   // 2-seriya kiritilishi   soraldi
    fgets(user1, sizeof(user1), stdin);


    teng(user, user1); // Funksiyani call qilish 

    return 0;
}
