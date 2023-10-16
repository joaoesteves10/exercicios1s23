// Exemplo de leitura e escrita em ficheiros em linguagem C++
#include <fstream >
#include <iostream>

using namespace std;
int main(void){
	
    ifstream is; // objecto os para abrir o ficheiro em modo de leitura
    ofstream os; // objecto os para abrir o ficheiro em modo de escrita
	           // para abrir o ficheiro em modo de escrita e leitura
 		     // deve usar-se a class fstream

    is.open("dados_ent.txt");
    if( !is ){
        cout << "ERRO: não é possível abrir o ficheiro dados_ent.txt" << '\n';
        exit(1);
    } 

    os.open("dados_saida_2_2.txt"); 
    if( !os ){ 
      cout << "ERRO: não é possível abrir o ficheiro dados_saida.txt" << '\n';
      exit(1);
    } 

    int a, b;

    is >> a >> b; 

    cout << a << endl << b << endl;

    os << "Criação de ficheiro com objeto fstream \n"<<a*a << ' ' << b*b;
	
    is.close();  // fecha o ficheiro associado a is
    os.close();  // fecha o ficheiro associado a os
    
	cout << endl << endl;
	system("pause");
    return (0);
}
