#include <stdio.h>

int main(void)
{
    char nome, sesso;
    printf("Inserisci l'iniziale del nome: ");
    scanf("%c", &nome);
    getchar();
    printf("Sesso (M o F): ");
    scanf("%c", &sesso);
    if (sesso == 'M')
    {
        printf("Egregio signor %c\n", nome);
    }
    else
    {
        printf("Gentilissima signora %c\n", nome);
    }
    return 0;
}
