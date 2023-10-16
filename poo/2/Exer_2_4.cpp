#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

typedef struct{
	char nome[50];
	int idade, num;
}ALUNO;

int main(void){
	
	ifstream is; // objecto os para abrir o ficheiro em modo de leitura
	ALUNO v[3];
	int i = 0;
	char aux[30] = "";

	is.open("alunos.txt");
	if (!is){
		cout << "ERRO: não é possível abrir o ficheiro alunos.txt" << endl;
		system("pause");
		exit(1);
	}

	i=0;
	while (is.peek() != EOF)	{	
		is.getline(v[i].nome, sizeof(v[i].nome), ';');
		cout << "Nome: "<< v[i].nome << endl;
		is.getline(aux, 30,';');
		v[i].idade = atoi(aux);
		cout << "Idade: "<< v[i].idade << endl;
		is.getline(aux, 30,';');
		v[i].num=atoi(aux);
		cout << "Numero: "<< v[i].num << endl;
		is.get(); // retira o enter no final da linha
		i++;
	}

	is.close();  // fecha o ficheiro associado a is

	cout << endl << endl;
	system("pause");
    return (0);
}
