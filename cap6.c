#include <stdio.h>
#include <locale.h>
#define ex2

#ifdef ex1
/*1 - Escreva um programa que receba via teclado 2 numeros inteiros e imprima-os no video com o resultado das 4 operacoes aritmeticas.*/

int main(void){
setlocale(LC_ALL,"");

int a,b,x,y,z;
float v;

printf("Digite o primeiro n�mero:\n");
scanf("%d",&a);
printf("Digite o segundo n�mero:\n");
scanf("%d",&b);

x = a+b;
y = a-b;
z = a*b;
v = (float)a/b;

printf(" O resultado da soma �: %d\n",x);
printf(" O resultado da subtra��o �: %d\n",y);
printf(" O resultado da multiplica��o �: %d\n",z);
printf(" O resultado da divis�o �: %.2f \n",v);

return(0);
}

#endif // ex1

#ifdef ex2
 /*2 - Reescreva o exercicio anterior utilizando operadores de atribuicao composta.*/

int main(void){
setlocale(LC_ALL,"");
int a,b,x,y,z;
float v;

printf("Digite o primeiro n�mero:\n");
scanf("%d",&a);
printf("Digite o segundo n�mero:\n");
scanf("%d",&b);

x = a+=b;
y = a-=b;
z = a*=b;
v = (float) a/b; // n�o consigo fazer a divis�o com atributos compostos.

printf(" O resultado da soma �: %d\n",x);
printf(" O resultado da subtra��o �: %d\n",y);
printf(" O resultado da multiplica��o �: %d\n",z);
printf(" O resultado da divis�o �: %.2f \n",v);

return(0);
}
#endif // ex2

#ifdef ex3
/*3 - Escreva um programa para determinar a idade de uma pessoa, em anos, meses e dias, recebendo via teclado a data (dia, mes e ano) do seu nascimento e a data (dia, mes e ano) atual.*/

 int main(void){
setlocale(LC_ALL,"");
int dia1,mes1,ano1,dia2,mes2,ano2,dnv;
int anos,meses,dias;

do{
printf("Este � um programa para descobrir sua idade.\n");
printf("Digite sua data de nascimento: dia , mes e ano. \n");
printf("Dia:\n");
scanf("%d",& dia1);
printf("M�s:\n");
scanf("%d",& mes1);
printf("Ano:\n");
scanf("%d",& ano1);
printf("Agora digite a data atual.\n");
printf("Dia:\n");
scanf("%d",& dia2);
printf("M�s:\n");
scanf("%d",& mes2);
printf("Ano:\n");
scanf("%d",& ano2);

 // c�lculo em anos
    anos = ano2 - ano1;
    if (mes2 < mes1 || (mes2 == mes1 && dia2 < dia1)) {
        anos--;
    }

    // c�lculo em meses/dias
    if (mes2 >= mes1) {
        meses = mes2 - mes1;
        dias = dia2 - dia1;
    } else {
        meses = 12 - (mes1 - mes2);
        dias = dia2 - dia1;
        if (dias < 0) {
            meses--;
            dias += 30;
        }
    }


printf("Sua idade �: %d anos, %d meses e %d dias \n",anos,meses,dias);

printf("Deseja fazer o c�lculo novamente?\n Digite 1 para Sim e 2 para N�o. \n");
scanf("%d",& dnv);
system("cls");
}while(dnv==1);

return(0);
}
#endif // ex3

#ifdef ex4
/*4 - Escreva um programa que receba via teclado 2 numeros inteiros e execute as operacoes logicas bit a bit AND, OU, OU EXCLUSIVO e imprima-os no video no formato decimal e hexadecimal. */


int main(void){
setlocale(LC_ALL,"");

}
#endif // ex4


#ifdef ex5
/*5 - Escreva um programa que receba via teclado uma data (dia, mes, e ano). Determine o dia da semana desta data.*/

 int main(void){
setlocale(LC_ALL,"");

}

#endif // ex5
