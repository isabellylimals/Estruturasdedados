#include<stdio.h>
#include<stdlib.h>
int main(){

FILE *arquivo=fopen("entrada.text","r");
 char*c[20];
if (arquivo==NULL){
printf("ERRO NA ABERTURA DO ARQUIVO!\n");
exit(1);
}
else
{printf("Arquivo aberto");
}
fgets(c,20,arquivo);
printf("%c\n", c);
if 
(!fclose(arquivo)){
	printf("Arquivo fechado com sucesso");
}
return 0;}