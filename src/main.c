#include "howstring.h"
#include <locale.h>
#include <stdio.h>
int main()
{
    setlocale(LC_ALL, "Russian");
    int menu = 0;
    FILE* fEng = fopen("EngWords.txt", "r");
    FILE* fRus = fopen("RusWords.txt", "r");
    printf("%d", howstring(fEng));
    rewind(fEng);
    rewind(fRus);
    fclose(fEng);
    fclose(fRus);
    switch (menu) {
    case 0: {
        printf("TEST\n");
        return 0;
    }
    }
    return 0;
}
