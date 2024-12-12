#include <stdio.h>
#include <string.h>
#include <ctype.h>

int word_sanash(char arr[]){
    int count = 0;
    int worrds = 0;

        for (int  i = 0;arr[i] != '\0'; i++){
            if (isspace(arr[i])){
                worrds = 0;
            }else if (!worrds) {
                worrds = 1;
                count ++;
            }
            
        }
    return count ; 
}
int main(){
    char user[30];

    printf("So'zlarni kiriting !");
    fgets(user,sizeof(user),stdin);

    int wrords = word_sanash(user);

    printf(" %d  ta so'z mavjud ekan akajon",wrords);

return 0;
}