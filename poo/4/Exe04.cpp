#include <iostream>
#include <fstream>
#include <string>

#include "Data.h"
#include "Pessoa.h"

using namespace std;

int main(void){

	string str;
	char aux[100];
	
	cout << endl << endl;//4b
	Pessoa a("Jonas Culatra","Rua da direita n2",Data(20,9,1987)), 
	b("Joni Rato","Rua da esquerda n3",4,2,1990);
	
	cout << endl << endl;//4c
	a.Show();
	b.Show();
	cout << endl << endl;//4d
	cout << "Nova Morada: ";
	cin.getline(aux, sizeof aux);
	b.SetMorada(aux);	// c.Show();
	
	cout << endl << endl;//4e
	cout << "Alteração data Nascimento: "<< "\n Insira nova data" << endl;
	Data _data;
	cin >> _data;
	a.SetData(_data);	// c.Show();

	cout << endl << endl;//4f
	Pessoa c;
	c.ReadK();	// c.Show();

	cout << endl << endl;//4g
	Pessoa d;
	cin >> d;
	cout << d;

	cout << endl << endl;//4h
	if (a == b) {
		cout << "as pessoas são iguais";
	}else {
		cout << "as pessoas são diferentes";
	}

	cout << endl << endl;//4i
	if (a.MaisNovo(b)) {
		cout << " O mais novo é: " << a << endl;
	} else {
		cout << " O mais novo é: " << b << endl;
	}
	
	
	cout << endl << endl;//4j
	cout << "Nome do ficheiro a abrir: ";
	cin >> str; //	str="pessoas.txt";
	
	ofstream ofile;
	ofile.open(str);
	if (ofile){	
		a.SaveFile(ofile);
		b.SaveFile(ofile);
		c.SaveFile(ofile);
		d.SaveFile(ofile);
		ofile.close();
		cout << "Ficheiro " << str << " criado com sucesso!" << endl;
	} else {
		cout << "ERRO: não é possível abrir o ficheiro" << str << '\n';
	}
	 
	cout << endl << endl;//4l
	Pessoa P[9];
	int size = 0, i = 0;
	ifstream ifile;

	ifile.open(str);
	if (ifile){	
		while (ifile.peek() != EOF)	{
			P[size].ReadFile(ifile);
			ifile.get();
			size++;
		}
		ifile.close();
		cout << "Ficheiro pessoas.txt lido  para memoria (vetor), com sucesso. " << endl;
	} else {
		cout << "ERRO: não é possível abrir o ficheiro data.txt" << '\n\n\n';
	}

	cout << endl << endl;//4m
	cout << "Alunos nascidos antes de 1990" << endl<< endl;
	for (i = 0; i<size; i++){
		if (P[i].GetData().GetAno() < 1990) {
			P[i].Show();
		}
	}

	cout << endl << endl;
	system("pause");	
	return 0;
}

