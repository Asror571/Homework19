#include <stdio.h>

int check_number(char number[]){
    int count = 0;
    
        for (int  i = 0; number[i] != '\0'; i++) {

            if (number[i] >= '0'  && number[i] <= '9'){
                count++;
            }
            
        }
    printf("Raqamlar soni :%d",count);
}
int main(){
    char user[50];

    printf("Kiritnig :");
    fgets(user,sizeof(user),stdin);

    check_number(user);
}