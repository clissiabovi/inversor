/* Data de submissao:
 * Nome:Clissia Bozzer Bovi
 * RA:195744
 */

#include <stdio.h>
# define tam_buffer 100

typedef struct{
	char dados[tam_buffer];
	int n;
}pilha, *Pilha;

void inicio (Pilha p){
	p->n=0;
}

/*void inicializa_buffer(char *buffer){
	int i=0;
	while(i<tam_buffer){
		buffer[i]='\0';
		i++;
	}
}*/

void push(Pilha p, char c){
	if(p->n <tam_buffer){
		p->dados[p->n]=c;
		(p->n)++;
	}
}

char pop(Pilha p){
	char c;
	if(p->n>0){
		(p->n)--;
		c=p->dados[p->n];
	}
	return c;
}

int main() {
  char buffer[tam_buffer], c;
  //tem_n previne que imprima lixo
  int i, j, tem_n=0;
  pilha p;
  //recebendo a string
  fgets(buffer, tam_buffer, stdin);
  for(i=0; i<tam_buffer  && tem_n==0; i++){
	
  	if(buffer[i]!=' ' && buffer[i]!='\n'){
  		push(&p, buffer[i]);
  	}
  	else{
  		j=p.n;
  		while(j>0){
  			c=pop(&p);
  			printf("%c", c);
  			j--;

  		}
  		if(buffer[i]==' '){
			printf(" ");
  		}
  		else{
  			printf("\n");
  			tem_n=1;
  		}
  		
  	}
  }
  return 0;
}
