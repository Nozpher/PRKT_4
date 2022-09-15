#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const n = 528;
int main()
{   char A[n], word,*word2, *alphg, sep[10] = " ", *last;
    int i, a,bk=0, dlin = 0, sered = 0;
    printf("Write your string: ");
    gets(A);
    word2 = strtok(A, " ");

    while (word2!=NULL){

        dlin = strlen(word2);
        if (dlin % 2 != 0){
            sered = ((dlin-1) / 2);;
            alphg = word2[sered];
            for (a = 0; a < dlin; a ++)
                if (word2[a] == alphg){
                        bk+=1;
                } else if(bk > 2){
                    bk=0;
                    dlin=0;
                }
            if (bk<2){
                bk=0;
            } else if (bk == 2){
                printf("%s ", word2);
                bk=0;
            }
            }
        word2 = strtok(0, " ");
    }
    return 0;
}
