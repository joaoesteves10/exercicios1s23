#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

typedef struct{
	char nome[50];
	int idade, num;
}ALUNO;

int main(void){
	
	ofstream os; // objecto os para abrir o ficheiro em modo de escrita
	ALUNO v[3];
	
	for (int i = 0; i < 3; i++){
		cout << "Nome: ";
		cin.getline(v[i].nome, sizeof v[i].nome); 
		
		cout << "Idade: ";
		cin >> v[i].idade;
		cout << "Número: ";
		cin >> v[i].num;
		// Para limpar buffer
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		//cin.get();// para o caso de saltar a leitura do nome
	}

	os.open("alunos.txt");
	if (!os){
		cout << "ERRO: não é possível abrir o ficheiro alunos.txt" << '\n';
		exit(1);
	}

	for (int i = 0; i < 3; i++){
		os << v[i].nome << ";" << v[i].idade << ";" << v[i].num << ";"<<endl;
	}

	os.close();  // fecha o ficheiro associado a 'os'
	cout << "Ficheiro criado com sucesso!" << endl;

	cout << endl << endl;
	system("pause");
    return (0);
}

