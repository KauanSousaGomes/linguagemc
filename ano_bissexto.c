#include <stdio.h>

int main(){


int ano;

printf("Digite o ano:\n");

scanf("%d",&ano);

if(ano % 4 ==0)
{
    printf("Esse ano é bissexto\n");

}

return 0;
}