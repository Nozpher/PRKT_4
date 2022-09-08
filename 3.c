#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const n = 528;
int main()
{   char A[n], word, *word2, alphg, sep[10] = " ";
    int i, a,bk=0, words = 0, dlin = 0, sered = 0;
    printf("Write your string: ");
    word = gets(A);
    word2 = strtok(A, sep);
    While (word2 != NULL){
        dlin = strlen(word2);
        if (dlin % 2 != 0){
            sered = (dlin-1) / 2;
            strncpy(alphg, words, sered);
            for (a = 0; a < dlin; a ++)
                if (A[a] == alphg){
                        bk+=1;
                } else if(bk >2){
                    bk=0;
                    dlin=0;
                } else{
                    printf("%s ", words);
                    bk=0;
                    words = "";
                    dlin=0;
                    }
            }
        }
    return 0;
}
