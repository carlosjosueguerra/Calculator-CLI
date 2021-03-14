#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <cstring>
#include <iomanip>
#include <bits/stdc++.h>

using namespace std;

void FLT_NUMBER()
{
	
}

void INT_NUMBER()
{
	int num=0, total=0;
	char op_in, aux, aux2;
	
	do
	{
		cout << "  ________________________________________  " <<endl;
		cout << " |                                        | " << endl;
		cout << " |          *  CALCULATOR CLI  *          | " << endl;
		cout << " |________________________________________| " << endl;
		cout << " |                                        | " << endl;
		cout << " |        '+' - ADDITION                  | " << endl;
		cout << " |        '-' - SUBSTRACTION              | " << endl;
		cout << " |        '*' - MULTIPLICATION            | " << endl;
		cout << " |        '/' - DIVISON                   | " << endl;
		cout << " |________________________________________| " << endl;
		cout << endl << endl;
		
		cout << "Please enter an operation which you like to calculate:" << endl;
		cin >> op_in;
		
		switch(op_in)
		{
		case '+':
			cout << "Please enter the numbers:" << endl;
			break;
		case '-':
			cout << "Please enter the numbers:" << endl;
			break;
		case '*':
			cout << "Please enter the numbers:" << endl;
			break;
		case '/':
			cout << "Please enter the numbers:" << endl;
			break;
		default:
			cout << "Unknown command. Please enter a valid option! " << endl << endl;
			break;
		}
		
		do
		{
			cout << "Do you want continue? Press Y or N" << endl;
			cin >> aux;
			
			if(aux!='y' && aux!='Y' && aux!='n' && aux!='N')
				cout << endl << "Please enter a valid option!" << endl;
			
		}while(aux!='y' && aux!='Y' && aux!='n' && aux!='N');
		
	} while(aux=='y' || aux=='Y');
	
}


void HELP()
{
	system("cls");
}

void START()
{
	int op1=1;
	
	while(op1!=0)
	{
		cout << "  ________________________________________  " <<endl;
		cout << " |                                        | " << endl;
		cout << " |          *  CALCULATOR CLI  *          | " << endl;
		cout << " |________________________________________| " << endl;
		cout << " |                                        | " << endl;
		cout << " |         1 - INTEGER NUMBER             | " << endl;
		cout << " |         2 - FLOATING NUMBER            | " << endl;
		cout << " |         3 - HELP                       | " << endl;
		cout << " |                                        | " << endl;
		cout << " |         0 - EXIT                       | " << endl;
		cout << " |________________________________________| " << endl;
		cout << endl << endl;
		
		do{
			cin >> op1;
			
			if(op1!=0 && op1!=1 && op1!=2 && op1!=3)
				cout<< endl << "Please enter a valid option!" << endl;
			
		}while(op1!=0 && op1!=1 && op1!=2 && op1!=3);
		
		system("cls");
		
		if(op1==1)
	   		INT_NUMBER();
		else if(op1==2)
			FLT_NUMBER();
		else if(op1==3)
			HELP();
	
	}
	
}

int main()
{
	int op=1;
	
	while(op!=0)
	{
		cout << "  ________________________________________  " <<endl;
		cout << " |                                        | " << endl;
		cout << " |          *  CALCULATOR CLI  *          | " << endl;
		cout << " |________________________________________| " << endl;
		cout << " |                                        | " << endl;
		cout << " |         1 - START                      | " << endl;
		cout << " |         2 - HELP                       | " << endl;
		cout << " |                                        | " << endl;
		cout << " |         0 - EXIT                       | " << endl;
		cout << " |________________________________________| " << endl;
		cout << endl << endl;
		
		do{
			cin >> op;
			
			if(op!=0 && op!=1 && op!=2)
				cout << endl << "Please, enter a valid option!" << endl;
			
		}while(op!=0 && op!=1 && op!=2);
		
		system("cls");
		
		if(op==1)
	   		START();
		else if(op==2)
			HELP();
	}
	
	cout << "Desligando" << endl;
	
	return 0;
}