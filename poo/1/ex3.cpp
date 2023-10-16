//3
#include <iostream>
#include <iomanip>

using namespace std;
int main(void){
	
   	cout<<"ENSAIO do setw() .............." << endl;
	cout<< setw(10) <<11<< endl;
	cout<< setw(10) <<2222<< endl;
	cout<< setw(10) <<4<< endl;
	cout<< setfill('-')<< setw(10) <<11<< endl;
	
	cout << endl << endl;
	system("pause");
    return (0);
}
