#include "howstring.h"
#include <locale.h>
#include <stdio.h>
int main()
{
    setlocale(LC_ALL, "Russian");
    FILE* fEng = fopen("EngWords.txt", "r");
    FILE* fRus = fopen("RusWords.txt", "r");
    printf("%d", howstring(fEng));
    rewind(fEng);
    rewind(fRus);
    fclose(fEng);
    fclose(fRus);
    return 0;
}
