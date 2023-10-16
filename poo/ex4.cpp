//4
#include <iostream>
#include <iomanip>

using namespace std;
int main(void){
	
	cout<<"Precisao global ....................... " << endl;
	cout<<"5 digitos, parte inteira e parte decimal "<< setprecision(5) <<1234.537<< endl; // A virgula n�o conta
	cout<<"6 digitos, parte inteira e parte decimal "<< setprecision(6) <<1234.537<< endl<< endl;
	
	cout<<"Precisao da parte decimal ....................... " << endl;
	cout.setf(ios::floatfield,ios::fixed);
	cout<< "2 digitos na parte decimal "<< setprecision(2)<<1234.537<< endl;
	cout<< "5 digitos na parte decimal "<< setprecision(5)<<1234.537<< endl;

	cout << endl << endl;
	system("pause");
    return (0);
} 
