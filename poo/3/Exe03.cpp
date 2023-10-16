// Exe04.cpp : Defines the entry point for the console application.
//
#include "Data.h"

int main()
{
	//3e
	Data da, db(1,1,2014);

	da.Show();
	db.Show();

	da.ReadK();
	db.Update(2,2,2014);
 
	//3f
	if (da.Igual(db))
		cout << "Datas Iguais" << endl;
	else
		cout << "Datas Diferentes" << endl;

	//3g
	if (da == db)
		cout << "Datas Iguais" << endl;
	else
		cout << "Datas Diferentes" << endl;
	
	//3i
	Data dc;		
	cin >> dc;
	//3j
	cout << dc << endl << da << endl << db << endl;
	
	//3k
	ofstream os;
	os.open("datas.txt");
	if (!os)	{
		cout << "ERRO: não é possível abrir o ficheiro datas.txt" << '\n';
		exit(1);
	}
	dc.SaveFile(os);
	os.close();

	ifstream is;
	is.open("datas.txt");
	if (!is){
		cout << "ERRO: não é possível abrir o ficheiro datas.txt" << '\n';
		exit(1);
	}	
	da.ReadFile(is);
	
	cout<<da;
	os.close();


	//////////////
	cout << endl << endl;
	system("pause");
	return (0);
}

