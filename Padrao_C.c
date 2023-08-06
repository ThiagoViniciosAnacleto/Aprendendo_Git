#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <locale.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "Portuguese_Brasil");

    printf("Hello World!");
    printf("\n");

    printf("Edição 2");

    printf("Edição 3");
    
    return 0;
}