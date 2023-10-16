// Exemplo de leitura e escrita em ficheiros em linguagem C

//#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main(void){
	
    FILE *f1 = NULL, *f2 = NULL; // declaração e inicialização das variáveis
    int a = 0, b = 0;
	
    // abre o ficheiro dados_ent.txt no modo de leitura e associa-o a f1
	fopen_s(&f1, "dados_ent.txt", "r");
    if(f1 == NULL ){ 
         printf("ERRO: não é possível abrir o ficheiro dados_ent.txt\n");
         exit(1);
    } 
    
    // abre o ficheiro dados_saida.txt no modo de escrita e associa-o a f2
	fopen_s(&f2, "dados_saida.txt", "w");
    if( f2 == NULL ){
         printf("ERRO: não é possível abrir o ficheiro dados_saida.txt\n");
         exit(1);
    }

    fscanf_s( f1, "%d", &a ); // leitura e escrita
    fscanf_s( f1, "%d", &b );

    printf("%d %d\n", a, b);

    fprintf( f2, "Este ficheiro foi alterado na aula Nº  .\n" );
    fprintf( f2, "%d\n", a*a );
    fprintf( f2, "%d\n", b*b );

    fclose( f1 );  // fecha o ficheiro associado a f1
    fclose( f2 );  // fecha o ficheiro associado a f2

	printf("\n\n");
	system("pause");
    return (0);
}
