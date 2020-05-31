#include "howstring.h"
#include <locale.h>
#include <stdio.h>
int main()
{
    setlocale(LC_ALL, "Russian");
    int menu = 0, strok = 0, simvEng = 0, simvRus = 0;
    FILE* fEng = fopen("EngWords.txt", "r");
    FILE* fRus = fopen("RusWords.txt", "r");
    strok = howstring(fEng);
    if (strok == (howstring(fRus))) {
        simvEng = howsymbols(fEng);
        simvRus = howsymbols(fRus);
    } else {
        printf("Количество строк в файлах не совпадает! Обновите ваши файлы\n");
        return 0;
    }
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
