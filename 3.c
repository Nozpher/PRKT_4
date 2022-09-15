#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const n = 528;
int main()
{   char A[n], word,*word2, *alphg, sep[10] = " ", *last;
    int i, a,bk=0, dlin = 0, sered = 0;
    printf("Write your string: ");
    gets(A);
    word2 = strtok(A, " "); // получение первого слова через пробел

    while (word2!=NULL){ // пока strtok не дойдет до конца строки

        dlin = strlen(word2); // определение длины слова
        if (dlin % 2 != 0){
            sered = ((dlin-1) / 2);
            alphg = word2[sered]; // взятие центрального символа
            for (a = 0; a < dlin; a ++)
                if (word2[a] == alphg){ // долгий поиск вхождений
                        bk+=1;
                } else if(bk > 2){
                    bk=0;
                    dlin=0;
                }
            if (bk<2){ //если букв только две, то слово удовлетворяет значению, иначе.....
                bk=0;
            } else if (bk == 2){
                printf("%s ", word2);
                bk=0;
            }
            }
        word2 = strtok(0, " "); // След. слово через пробел
    }
    return 0;
}
