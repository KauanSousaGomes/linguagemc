#include <stdio.h>
int main (){
    float nota1, nota2, nota3, nota4, resultado;

printf("Digite a nota 1:\n");
scanf("%f",&nota1);
printf("Digite a nota 2:\n");
scanf("%f",&nota2);
printf("Digite a nota 3:\n");
scanf("%f",&nota3);
printf("Digite a nota 4:\n");
scanf("%f",&nota4);

resultado = (nota1+nota2+nota3+nota4) /4;

printf("O resultado é:\n %f",resultado);

if (resultado>=6)
{
printf("Aluno aprovado!\n");
    
}
else{
    printf("Aluno reprovado!\n");
}



return 0;



}