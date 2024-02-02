#include<stdio.h>
#include<stdlib.h>
int main(){

FILE *arquivo=fopen("entrada.text","wt");
if(arquivo==NULL){
printf("ERRO NA ABERTURA DO ARQUIVO!\n");
exit(1);
}
else
{printf("Arquivo criado");
}
fclose(arquivo);
return 0;}
