int main(){
	int c;
	int nlinhas=0;
	FILE*fp;
	fp=fopen("entrada.txt", "rt");
	if(fp==NULL){
		printf("Não fpi possivel abrir o arquivo.\n");
		return 1;
		
	}
	while((c=fgetc(fp))!=EOF){
	IF(C=='\n')
	nlinhas++;
}
fclose(fp);
printf("Numero de linhas="%d\n, nlinhas);
return 0;
}