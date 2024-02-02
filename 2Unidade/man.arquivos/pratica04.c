#include<stdio.h>
#include<stdlib.h>
int main(){

FILE *arquivo=fopen("entradaescrita.text","w" write);
 
if (arquivo==NULL){
printf("ERRO NA ABERTURA DO ARQUIVO!\n");
exit(1);
}
else
{printf("Arquivo aberto");
}

fputc('S', arquivoescrita);
if 
(!fclose(arquivo)){
	printf("Arquivo fechado com sucesso");
}
return 0;}