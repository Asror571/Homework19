#include <stdio.h>
#include <ctype.h>

void unli_word(char massiv[], char massiv1[]){
    int count  = 0;
        for (int  i = 0; massiv[i] != '\0'; i++) {
            for (int  j = 0; massiv1[j] != '\0'; j++){
                
                if (massiv[i] == tolower(massiv1[j]))
                    count ++;
                
            }
            if (count != 0){
                printf("%c harf seriada marta ishtirok etgan %d\n",massiv[i],count);
            }
            count =  0;
        }
        
}
int main(){
    char arr[6] = "auieo";
    char user[100];

    printf("So'zni kiriting :");
    fgets(user,sizeof(user),stdin);

    unli_word(arr,user);
}