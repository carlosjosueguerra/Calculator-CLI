#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <cstring>
#include <iomanip>
#include <bits/stdc++.h>

using namespace std;



int main()
{
	int op=1;
	
	while(op!=0)
	{
		cout << "  ________________________________________  "<<endl;
		cout << " |                                        | " << endl;
		cout << " |          *  CALCULATOR CLI  *          | " << endl;
		cout << " |________________________________________| " << endl;
		cout << " |                                        | " << endl;
		cout << " |         1 - START                      | " << endl;
		cout << " |         2 - HELP                       | " << endl;
		cout << " |                                        | " << endl;
		cout << " |         0 - EXIT                       | " << endl;
		cout << " |________________________________________| " << endl;
	
	
		do{
			cin >> op;
			
			if(op!=0 && op!=1 && op!=2)
				cout<< endl << "Please, enter a valid option!" << endl;
			
		}while(op!=0 && op!=1 && op!=2);
		
		system("cls");
		
		/*if(op==1)
	   		START();
		else if(op==2)
			HELP();*/
	}
	
	cout << "Desligando" << endl;
	
	return 0;
}