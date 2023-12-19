int x, y, *p; //declaraco de variaveis
y = 0; //atribui a y o valor 0
p = &y; //a variavel p recebe o endereço de y
x = *p; //x recebe o valor que é apontado para p
x = 4; //o valor de x eh alterado para 4
(*p)++; //eh adicionado +1 ao valor de p
--x; // e x diminui 1
(*p) += x; //o valor de p eh somado ao de x