#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>

char get_str[128];
char cod_str[128];

char converte (char letra){
	char retorno;
     if (letra == 't') retorno = 'p';
     if (letra == 'e') retorno = 'o';
     if (letra == 'n') retorno = 'l';
     if (letra == 'i') retorno = 'a';
     if (letra == 's') retorno = 'r';
     if (letra == 'p') retorno = 't';
     if (letra == 'o') retorno = 'e';
     if (letra == 'l') retorno = 'n';
     if (letra == 'a') retorno = 'i';
     if (letra == 'r') retorno = 's';
     if (letra == ' ') retorno = ' ';
     if (letra == 'b') retorno = 'b';
     if (letra == 'c') retorno = 'c';
     if (letra == 'd') retorno = 'd';
     if (letra == 'f') retorno = 'f';
     if (letra == 'g') retorno = 'g';
     if (letra == 'h') retorno = 'h';
     if (letra == 'j') retorno = 'j';
     if (letra == 'k') retorno = 'k';
     if (letra == 'm') retorno = 'm';
     if (letra == 'q') retorno = 'q';
     if (letra == 'u') retorno = 'u';
     if (letra == 'v') retorno = 'v';
     if (letra == 'w') retorno = 'w';
     if (letra == 'x') retorno = 'x';
     if (letra == 'y') retorno = 'y';
     if (letra == 'z') retorno = 'z';
     if (letra == 'T') retorno = 'P';
     if (letra == 'E') retorno = 'O';
     if (letra == 'N') retorno = 'L';
     if (letra == 'I') retorno = 'A';
     if (letra == 'S') retorno = 'R';
     if (letra == 'P') retorno = 'T';
     if (letra == 'O') retorno = 'E';
     if (letra == 'L') retorno = 'N';
     if (letra == 'A') retorno = 'I';
     if (letra == 'R') retorno = 'S';
     if (letra == 'B') retorno = 'B';
     if (letra == 'C') retorno = 'C';
     if (letra == 'D') retorno = 'D';
     if (letra == 'F') retorno = 'F';
     if (letra == 'G') retorno = 'G';
     if (letra == 'H') retorno = 'H';
     if (letra == 'J') retorno = 'J';
     if (letra == 'K') retorno = 'K';
     if (letra == 'M') retorno = 'M';
     if (letra == 'Q') retorno = 'Q';
     if (letra == 'U') retorno = 'U';
     if (letra == 'V') retorno = 'V';
     if (letra == 'W') retorno = 'W';
     if (letra == 'X') retorno = 'X';
     if (letra == 'Y') retorno = 'Y';
     if (letra == 'Z') retorno = 'Z';
     if (letra == '1') retorno = '1';
     if (letra == '2') retorno = '2';
	 if (letra == '3') retorno = '3';
	 if (letra == '4') retorno = '4';
	 if (letra == '5') retorno = '5';
	 if (letra == '6') retorno = '6';
	 if (letra == '7') retorno = '7';
	 if (letra == '8') retorno = '8';
	 if (letra == '9') retorno = '9';
	 if (letra == '0') retorno = '0';
	 return retorno;
						  }
int i=1;
char conversor(){
     for(i=0;i<128;i++){
                       cod_str[i] = converte (get_str[i]);
                       }
				return 0;
				}
 
int main(){
	while(1){
		int rc;
     printf("Digite a frase \n");
     gets_s(get_str);
     conversor();
     printf("\n\n");
     printf("Traduzido",get_str);
     printf("===%s\n\n",cod_str);
     printf("Espaco para continuar, ALT+F4 duas vezes para fechar");
     getch();
     rc = system( "cls" );
			}
 		  }
