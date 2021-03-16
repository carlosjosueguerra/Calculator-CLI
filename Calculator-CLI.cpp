#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <cstring>
#include <iomanip>
#include <bits/stdc++.h>

using namespace std;

void HELP()
{
	cout << "____________________________HELP____________________________" << endl << endl;
	cout << "Commands: " << endl <<  endl;
	cout << "'+' -> It allows the user to perform the addition operation " << endl;
	cout << "between two or more numbers." << endl;
	cout << "'-' -> It allows the user to perform the subtraction operation " << endl;
	cout << "between two or more numbers." << endl;
	cout << "'*' -> It allows the user to perform the multiplication operation " << endl;
	cout << "between two or more numbers." << endl;
	cout << "'/' -> It allows the user to perform the division operation " << endl;
	cout << "between two or more numbers." << endl;
	cout << "'V' -> It allows the user to perform the square root operation " << endl;
	cout << "between two or more numbers." << endl << endl << endl;
	
	cout << "Functions: " << endl <<  endl;
	cout << "FREE MODE -> It allows the user to perform arithmetic operations " << endl;
	cout << "without any restriction on the numbers to which the equation is to be assigned." << endl;
	cout << "INT NUMBER -> It allows the user to perform arithmetic operations " << endl;
	cout << "using only integer numbers." << endl;
	cout << "FLT NUMBER -> It allows the user to perform arithmetic operations " << endl;
	cout << "using only floating numbers." << endl;
	cout << "ODD NUMBER -> It allows the user to perform arithmetic operations " << endl;
	cout << "using only odd numbers." << endl;
	cout << "EVEN NUMBER -> It allows the user to perform arithmetic operations " << endl;
	cout << "using only even numbers." << endl << endl << endl;
	
	cout << "Comments: " << endl << endl;
	cout << "- To add a third number or more to each arithmetic operation, " << endl;
	cout << "a verification message will appear, and must be answered with " << endl;
	cout << "'Y' or 'y' for 'YES' or 'N' or 'n' for 'NO'. " << endl;
	cout << "- In this version of the program, it's not possible to perform " << endl;
	cout << "different arithmetic operations at once." << endl << endl;
	
	system("pause");
	system("cls");
}

void FREE_MODE()
{
	float num=0, num2=0, adc=0, total=0;
	char op_in, aux, aux2;
	
	do
	{
		cout << "  ________________________________________  " << endl;
		cout << " |                                        | " << endl;
		cout << " |          *  CALCULATOR CLI  *          | " << endl;
		cout << " |________________________________________| " << endl;
		cout << " |                                        | " << endl;
		cout << " |        '+' - ADDITION                  | " << endl;
		cout << " |        '-' - SUBSTRACTION              | " << endl;
		cout << " |        '*' - MULTIPLICATION            | " << endl;
		cout << " |        '/' - DIVISON                   | " << endl;
		cout << " |        'V' - SQUARE ROOT               | " << endl;
		cout << " |________________________________________| " << endl;
		cout << endl << endl;
		
		cout << "Please enter an operation which you like to calculate:" << endl;
		cin >> op_in;
		
		switch(op_in)
		{
		case '+':
			cout << "Please enter the first number:" << endl;	
			cin >> num;	
			
			cout << "Please enter the second number:" << endl;
			cin >> num2;
			
			total = num+num2;
			
			do
			{
				do
				{	
					cout << "Add any more? Y or N" << endl;
					cin >> aux2;
					
					if(aux2!='Y' && aux2!='y' && aux2!='N' && aux2!='n')
						cout << "Unknown command. Please enter a valid option! " << endl << endl;
					
				}while(aux2=='Y' && aux2=='y' && aux2!='N' && aux2!='n');
				
				if(aux2=='Y' || aux2=='y')
				{
					cin >> adc;
					total = total+adc;
				}
				
			}while(aux2=='Y' || aux2=='y');
			
			cout << "Result: " << total << endl;
			system("pause");
			system("cls");
			
			break;
		
		case '-':
			cout << "Please enter the first number:" << endl;	
			cin >> num;	
			
			cout << "Please enter the second number:" << endl;
			cin >> num2;
			
			total = num-num2;
			
			do
			{
				do
				{	
					cout << "Add any more? Y or N" << endl;
					cin >> aux2;
					
					if(aux2!='Y' && aux2!='y' && aux2!='N' && aux2!='n')
						cout << "Unknown command. Please enter a valid option! " << endl << endl;
					
				}while(aux2=='Y' && aux2=='y' && aux2!='N' && aux2!='n');
				
				if(aux2=='Y' || aux2=='y')
				{
					cin >> adc;
					total = total-adc;
				}
				
			}while(aux2=='Y' || aux2=='y');
			
			cout << "Result: " << total << endl;
			system("pause");
			system("cls");
			
			break;
		
		case '*':
			cout << "Please enter the first number:" << endl;	
			cin >> num;	
			
			cout << "Please enter the second number:" << endl;
			cin >> num2;
			
			total = num*num2;
			
			do
			{
				do
				{	
					cout << "Add any more? Y or N" << endl;
					cin >> aux2;
					
					if(aux2!='Y' && aux2!='y' && aux2!='N' && aux2!='n')
						cout << "Unknown command. Please enter a valid option! " << endl << endl;
					
				}while(aux2=='Y' && aux2=='y' && aux2!='N' && aux2!='n');
				
				if(aux2=='Y' || aux2=='y')
				{
					cin >> adc;
					total = total*adc;
				}
				
			}while(aux2=='Y' || aux2=='y');
			
			cout << "Result: " << total << endl;
			system("pause");
			system("cls");
			
			break;
		
		case '/':
			cout << "Please enter the first number:" << endl;	
			cin >> num;	
			
			cout << "Please enter the second number:" << endl;
			cin >> num2;
			
			total = num/num2;
			
			do
			{
				do
				{	
					cout << "Add any more? Y or N" << endl;
					cin >> aux2;
					
					if(aux2!='Y' && aux2!='y' && aux2!='N' && aux2!='n')
						cout << "Unknown command. Please enter a valid option! " << endl << endl;
					
				}while(aux2!='Y' && aux2!='y' && aux2!='N' && aux2!='n');
				
				if(aux2=='Y' || aux2=='y')
				{
					cin >> adc;
					total = total/adc;
				}
				
			}while(aux2=='Y' || aux2=='y');
			
			cout << "Result: " << total << endl;
			system("pause");
			system("cls");
			
			break;
		
		case 'V':
			cout << "Please enter the number:" << endl;
			
			cin >> num;
			
			total = sqrt(num);
			
			cout << "Result: " << total << endl;
			system("pause");
			system("cls");
			
			break;
		
		default:
			
			cout << "Unknown command. Please enter a valid option! " << endl << endl;
			
			system("pause");
			system("cls");
			
			break;
		}
		
		do
		{
			cout << "Do you want continue? Y or N" << endl;
			cin >> aux;
			
			if(aux!='y' && aux!='Y' && aux!='n' && aux!='N')
				cout << endl << "Please enter a valid option!" << endl;
			
		}while(aux!='y' && aux!='Y' && aux!='n' && aux!='N');
		
	}while(aux=='y' || aux=='Y');
	
	system("pause");
	system("cls");
}

void ODD_NUMBER()
{
	float num=0, num2=0, adc=0, total=0;
	char op_in, aux, aux2;
	
	do
	{
		cout << "  ________________________________________  " << endl;
		cout << " |                                        | " << endl;
		cout << " |          *  CALCULATOR CLI  *          | " << endl;
		cout << " |________________________________________| " << endl;
		cout << " |                                        | " << endl;
		cout << " |        '+' - ADDITION                  | " << endl;
		cout << " |        '-' - SUBSTRACTION              | " << endl;
		cout << " |        '*' - MULTIPLICATION            | " << endl;
		cout << " |        '/' - DIVISON                   | " << endl;
		cout << " |        'V' - SQUARE ROOT               | " << endl;
		cout << " |________________________________________| " << endl;
		cout << endl << endl;
		
		cout << "Please enter an operation which you like to calculate:" << endl;
		cin >> op_in;
		
		switch(op_in)
		{
		case '+':
			cout << "Please enter the first odd number:" << endl;
			
			do
			{
				cin >> num;
				if((int)num % 2 == 0)
					cout << "This number is not odd. Please enter a valid number!" << endl;
				
			}while((int)num % 2 == 0);
			
			cout << "Please enter the second odd number:" << endl;
			
			do
			{
				cin >> num2;
				if((int)num2 % 2 == 0)
					cout << "This number is not odd. Please enter a valid number!" << endl;
				
			}while((int)num2 % 2 == 0);
			
			total = num+num2;
			
			do
			{
				do
				{	
					cout << "Add any more? Y or N" << endl;
					cin >> aux2;
					
					if(aux2!='Y' && aux2!='y' && aux2!='N' && aux2!='n')
						cout << "Unknown command. Please enter a valid option! " << endl << endl;
					
				}while(aux2=='Y' && aux2=='y' && aux2!='N' && aux2!='n');
				
				if(aux2=='Y' || aux2=='y')
				{
					do
					{
						cin >> adc;
						if((int)adc % 2 == 0)
							cout << "This number is not odd. Please enter a valid number!" << endl;
				
					}while((int)adc % 2 == 0);
					
					total = total+adc;
				}
				
			}while(aux2=='Y' || aux2=='y');
			
			cout << "Result: " << total << endl;
			system("pause");
			system("cls");
			
			break;
		
		case '-':
			cout << "Please enter the first odd number:" << endl;
			
			do
			{
				cin >> num;
				if((int)num % 2 == 0)
					cout << "This number is not odd. Please enter a valid number!" << endl;
				
			}while((int)num % 2 == 0);
			
			cout << "Please enter the second odd number:" << endl;
			
			do
			{
				cin >> num2;
				if((int)num2 % 2 == 0)
					cout << "This number is not odd. Please enter a valid number!" << endl;
				
			}while((int)num2 % 2 == 0);
			
			total = num-num2;
			
			do
			{
				do
				{	
					cout << "Add any more? Y or N" << endl;
					cin >> aux2;
					
					if(aux2!='Y' && aux2!='y' && aux2!='N' && aux2!='n')
						cout << "Unknown command. Please enter a valid option! " << endl << endl;
					
				}while(aux2=='Y' && aux2=='y' && aux2!='N' && aux2!='n');
				
				if(aux2=='Y' || aux2=='y')
				{
					do
					{
						cin >> adc;
						if((int)adc % 2 == 0)
							cout << "This number is not odd. Please enter a valid number!" << endl;
				
					}while((int)adc % 2 == 0);
					
					total = total-adc;
				}
				
			}while(aux2=='Y' || aux2=='y');
			
			cout << "Result: " << total << endl;
			system("pause");
			system("cls");
			
			break;
		
		case '*':
			cout << "Please enter the first odd number:" << endl;
			
			do
			{
				cin >> num;
				if((int)num % 2 == 0)
					cout << "This number is not odd. Please enter a valid number!" << endl;
				
			}while((int)num % 2 == 0);
			
			cout << "Please enter the second odd number:" << endl;
			
			do
			{
				cin >> num2;
				if((int)num2 % 2 == 0)
					cout << "This number is not odd. Please enter a valid number!" << endl;
				
			}while((int)num2 % 2 == 0);
			
			total = num*num2;
			
			do
			{
				do
				{	
					cout << "Add any more? Y or N" << endl;
					cin >> aux2;
					
					if(aux2!='Y' && aux2!='y' && aux2!='N' && aux2!='n')
						cout << "Unknown command. Please enter a valid option! " << endl << endl;
					
				}while(aux2=='Y' && aux2=='y' && aux2!='N' && aux2!='n');
				
				if(aux2=='Y' || aux2=='y')
				{
					do
					{
						cin >> adc;
						if((int)adc % 2 == 0)
							cout << "This number is not odd. Please enter a valid number!" << endl;
				
					}while((int)adc % 2 == 0);
					
					total = total*adc;
				}
				
			}while(aux2=='Y' || aux2=='y');
			
			cout << "Result: " << total << endl;
			system("pause");
			system("cls");
			
			break;
		
		case '/':
			cout << "Please enter the first odd number:" << endl;
			
			do
			{
				cin >> num;
				if((int)num % 2 == 0)
					cout << "This number is not odd. Please enter a valid number!" << endl;
				
			}while((int)num % 2 == 0);
			
			cout << "Please enter the second odd number:" << endl;
			
			do
			{
				cin >> num2;
				if((int)num2 % 2 == 0)
					cout << "This number is not odd. Please enter a valid number!" << endl;
				
			}while((int)num2 % 2 == 0);
			
			total = num/num2;
			
			do
			{
				do
				{	
					cout << "Add any more? Y or N" << endl;
					cin >> aux2;
					
					if(aux2!='Y' && aux2!='y' && aux2!='N' && aux2!='n')
						cout << "Unknown command. Please enter a valid option! " << endl << endl;
					
				}while(aux2!='Y' && aux2!='y' && aux2!='N' && aux2!='n');
				
				if(aux2=='Y' || aux2=='y')
				{
					do
					{
						cin >> adc;
						if((int)adc % 2 == 0)
							cout << "This number is not odd. Please enter a valid number!" << endl;
				
					}while((int)adc % 2 == 0);
					
					total = total/adc;
				}
				
			}while(aux2=='Y' || aux2=='y');
			
			cout << "Result: " << total << endl;
			system("pause");
			system("cls");
			
			break;
		
		case 'V':
			cout << "Please enter the odd number:" << endl;
			
			do
			{
				cin >> num;
				if((int)num % 2 == 0)
					cout << "This number is not a odd type. Please enter a valid number!" << endl;
				
			}while((int)num % 2 == 0);
			
			total = sqrt(num);
			
			cout << "Result: " << total << endl;
			system("pause");
			system("cls");
			
			break;
		
		default:
			
			cout << "Unknown command. Please enter a valid option! " << endl << endl;
			
			system("pause");
			system("cls");
			
			break;
		}
		
		do
		{
			cout << "Do you want continue? Y or N" << endl;
			cin >> aux;
			
			if(aux!='y' && aux!='Y' && aux!='n' && aux!='N')
				cout << endl << "Please enter a valid option!" << endl;
			
		}while(aux!='y' && aux!='Y' && aux!='n' && aux!='N');
		
	}while(aux=='y' || aux=='Y');
	
	system("pause");
	system("cls");
}

void EVEN_NUMBER()
{
	float num=0, num2=0, adc=0, total=0;
	char op_in, aux, aux2;
	
	do
	{
		cout << "  ________________________________________  " << endl;
		cout << " |                                        | " << endl;
		cout << " |          *  CALCULATOR CLI  *          | " << endl;
		cout << " |________________________________________| " << endl;
		cout << " |                                        | " << endl;
		cout << " |        '+' - ADDITION                  | " << endl;
		cout << " |        '-' - SUBSTRACTION              | " << endl;
		cout << " |        '*' - MULTIPLICATION            | " << endl;
		cout << " |        '/' - DIVISON                   | " << endl;
		cout << " |        'V' - SQUARE ROOT               | " << endl;
		cout << " |________________________________________| " << endl;
		cout << endl << endl;
		
		cout << "Please enter an operation which you like to calculate:" << endl;
		cin >> op_in;
		
		switch(op_in)
		{
		case '+':
			cout << "Please enter the first even number:" << endl;
			
			do
			{
				cin >> num;
				if((int)num % 2 != 0)
					cout << "This number is not even. Please enter a valid number!" << endl;
				
			}while((int)num % 2 != 0);
			
			cout << "Please enter the second even number:" << endl;
			
			do
			{
				cin >> num2;
				if((int)num2 % 2 != 0)
					cout << "This number is not even. Please enter a valid number!" << endl;
				
			}while((int)num2 % 2 != 0);
			
			total = num+num2;
			
			do
			{
				do
				{	
					cout << "Add any more? Y or N" << endl;
					cin >> aux2;
					
					if(aux2!='Y' && aux2!='y' && aux2!='N' && aux2!='n')
						cout << "Unknown command. Please enter a valid option! " << endl << endl;
					
				}while(aux2=='Y' && aux2=='y' && aux2!='N' && aux2!='n');
				
				if(aux2=='Y' || aux2=='y')
				{
					do
					{
						cin >> adc;
						if((int)adc % 2 != 0)
							cout << "This number is not even. Please enter a valid number!" << endl;
				
					}while((int)adc % 2 != 0);
					
					total = total+adc;
				}
				
			}while(aux2=='Y' || aux2=='y');
			
			cout << "Result: " << total << endl;
			system("pause");
			system("cls");
			
			break;
		
		case '-':
			cout << "Please enter the first even number:" << endl;
			
			do
			{
				cin >> num;
				if((int)num % 2 != 0)
					cout << "This number is not even. Please enter a valid number!" << endl;
				
			}while((int)num % 2 != 0);
			
			cout << "Please enter the second even number:" << endl;
			
			do
			{
				cin >> num2;
				if((int)num2 % 2 != 0)
					cout << "This number is not even. Please enter a valid number!" << endl;
				
			}while((int)num2 % 2 != 0);
			
			total = num-num2;
			
			do
			{
				do
				{	
					cout << "Add any more? Y or N" << endl;
					cin >> aux2;
					
					if(aux2!='Y' && aux2!='y' && aux2!='N' && aux2!='n')
						cout << "Unknown command. Please enter a valid option! " << endl << endl;
					
				}while(aux2=='Y' && aux2=='y' && aux2!='N' && aux2!='n');
				
				if(aux2=='Y' || aux2=='y')
				{
					do
					{
						cin >> adc;
						if((int)adc % 2 != 0)
							cout << "This number is not even. Please enter a valid number!" << endl;
				
					}while((int)adc % 2 != 0);
					
					total = total-adc;
				}
				
			}while(aux2=='Y' || aux2=='y');
			
			cout << "Result: " << total << endl;
			system("pause");
			system("cls");
			
			break;
		
		case '*':
			cout << "Please enter the first even number:" << endl;
			
			do
			{
				cin >> num;
				if((int)num % 2 != 0)
					cout << "This number is not even. Please enter a valid number!" << endl;
				
			}while((int)num % 2 != 0);
			
			cout << "Please enter the second even number:" << endl;
			
			do
			{
				cin >> num2;
				if((int)num2 % 2 != 0)
					cout << "This number is not even. Please enter a valid number!" << endl;
				
			}while((int)num2 % 2 != 0);
			
			total = num*num2;
			
			do
			{
				do
				{	
					cout << "Add any more? Y or N" << endl;
					cin >> aux2;
					
					if(aux2!='Y' && aux2!='y' && aux2!='N' && aux2!='n')
						cout << "Unknown command. Please enter a valid option! " << endl << endl;
					
				}while(aux2=='Y' && aux2=='y' && aux2!='N' && aux2!='n');
				
				if(aux2=='Y' || aux2=='y')
				{
					do
					{
						cin >> adc;
						if((int)adc % 2 != 0)
							cout << "This number is not even. Please enter a valid number!" << endl;
				
					}while((int)adc % 2 != 0);
					
					total = total*adc;
				}
				
			}while(aux2=='Y' || aux2=='y');
			
			cout << "Result: " << total << endl;
			system("pause");
			system("cls");
			
			break;
		
		case '/':
			cout << "Please enter the first even number:" << endl;
			
			do
			{
				cin >> num;
				if((int)num % 2 != 0)
					cout << "This number is not even. Please enter a valid number!" << endl;
				
			}while((int)num % 2 != 0);
			
			cout << "Please enter the second even number:" << endl;
			
			do
			{
				cin >> num2;
				if((int)num2 % 2 != 0)
					cout << "This number is not even. Please enter a valid number!" << endl;
				
			}while((int)num2 % 2 != 0);
			
			total = num/num2;
			
			do
			{
				do
				{	
					cout << "Add any more? Y or N" << endl;
					cin >> aux2;
					
					if(aux2!='Y' && aux2!='y' && aux2!='N' && aux2!='n')
						cout << "Unknown command. Please enter a valid option! " << endl << endl;
					
				}while(aux2!='Y' && aux2!='y' && aux2!='N' && aux2!='n');
				
				if(aux2=='Y' || aux2=='y')
				{
					do
					{
						cin >> adc;
						if((int)adc % 2 != 0)
							cout << "This number is not even. Please enter a valid number!" << endl;
				
					}while((int)adc % 2 != 0);
					
					total = total/adc;
				}
				
			}while(aux2=='Y' || aux2=='y');
			
			cout << "Result: " << total << endl;
			system("pause");
			system("cls");
			
			break;
		
		case 'V':
			cout << "Please enter the even number:" << endl;
			
			do
			{
				cin >> num;
				if((int)num % 2 != 0)
					cout << "This number is not a even type. Please enter a valid number!" << endl;
				
			}while((int)num % 2 != 0);
			
			total = sqrt(num);
			
			cout << "Result: " << total << endl;
			system("pause");
			system("cls");
			
			break;
		
		default:
			
			cout << "Unknown command. Please enter a valid option! " << endl << endl;
			
			system("pause");
			system("cls");
			
			break;
		}
		
		do
		{
			cout << "Do you want continue? Y or N" << endl;
			cin >> aux;
			
			if(aux!='y' && aux!='Y' && aux!='n' && aux!='N')
				cout << endl << "Please enter a valid option!" << endl;
			
		}while(aux!='y' && aux!='Y' && aux!='n' && aux!='N');
		
	}while(aux=='y' || aux=='Y');
	
	system("pause");
	system("cls");
}

void FLT_NUMBER()
{
	float num=0, num2=0, adc=0, total=0;
	char op_in, aux, aux2;
	
	do
	{
		cout << "  ________________________________________  " << endl;
		cout << " |                                        | " << endl;
		cout << " |          *  CALCULATOR CLI  *          | " << endl;
		cout << " |________________________________________| " << endl;
		cout << " |                                        | " << endl;
		cout << " |        '+' - ADDITION                  | " << endl;
		cout << " |        '-' - SUBSTRACTION              | " << endl;
		cout << " |        '*' - MULTIPLICATION            | " << endl;
		cout << " |        '/' - DIVISON                   | " << endl;
		cout << " |        'V' - SQUARE ROOT               | " << endl;
		cout << " |________________________________________| " << endl;
		cout << endl << endl;
		
		cout << "Please enter an operation which you like to calculate:" << endl;
		cin >> op_in;
		
		switch(op_in)
		{
		case '+':
			cout << "Please enter the first floating number:" << endl;
			
			do
			{
				cin >> num;
				if(num==(int)num)
					cout << "This number is not a float type. Please enter a valid number!" << endl;
				
			}while(num==(int)num);
			
			cout << "Please enter the second floating number:" << endl;
			
			do
			{
				cin >> num2;
				if(num2==(int)num2)
					cout << "This number is not a float type. Please enter a valid number!" << endl;
				
			}while(num2==(int)num2);
			
			total = num+num2;
			
			do
			{
				do
				{	
					cout << "Add any more? Y or N" << endl;
					cin >> aux2;
					
					if(aux2!='Y' && aux2!='y' && aux2!='N' && aux2!='n')
						cout << "Unknown command. Please enter a valid option! " << endl << endl;
					
				}while(aux2=='Y' && aux2=='y' && aux2!='N' && aux2!='n');
				
				if(aux2=='Y' || aux2=='y')
				{
					do
				   	{
						cin >> adc;
						if(adc==(int)adc)
					   	   	cout << "This number is not a float type. Please enter a valid number!" << endl;
				
					}while(adc==(int)adc);
					
					total = total+adc;
				}
				
			}while(aux2=='Y' || aux2=='y');
			
			cout << "Result: " << total << endl;
			system("pause");
			system("cls");
			
			break;
		
		case '-':
			cout << "Please enter the first floating number:" << endl;
			
			do
			{
				cin >> num;
				if(num==(int)num)
					cout << "This number is not a float type. Please enter a valid number!" << endl;
				
			}while(num==(int)num);
			
			cout << "Please enter the second floating number:" << endl;
			
			do
			{
				cin >> num2;
				if(num2==(int)num2)
					cout << "This number is not a float type. Please enter a valid number!" << endl;
				
			}while(num2==(int)num2);
			
			total = num-num2;
			
			do
			{
				do
				{	
					cout << "Add any more? Y or N" << endl;
					cin >> aux2;
					
					if(aux2!='Y' && aux2!='y' && aux2!='N' && aux2!='n')
						cout << "Unknown command. Please enter a valid option! " << endl << endl;
					
				}while(aux2=='Y' && aux2=='y' && aux2!='N' && aux2!='n');
				
				if(aux2=='Y' || aux2=='y')
				{
					do
				   	{
						cin >> adc;
						if(adc==(int)adc)
					   	   	cout << "This number is not a float type. Please enter a valid number!" << endl;
				
					}while(adc==(int)adc);
					
					total = total-adc;
				}
				
			}while(aux2=='Y' || aux2=='y');
			
			cout << "Result: " << total << endl;
			system("pause");
			system("cls");
			
			break;
		
		case '*':
			cout << "Please enter the first floating number:" << endl;
			
			do
			{
				cin >> num;
				if(num==(int)num)
					cout << "This number is not a float type. Please enter a valid number!" << endl;
				
			}while(num==(int)num);
			
			cout << "Please enter the second floating number:" << endl;
			
			do
			{
				cin >> num2;
				if(num2==(int)num2)
					cout << "This number is not a float type. Please enter a valid number!" << endl;
				
			}while(num2==(int)num2);
			
			total = num*num2;
			
			do
			{
				do
				{	
					cout << "Add any more? Y or N" << endl;
					cin >> aux2;
					
					if(aux2!='Y' && aux2!='y' && aux2!='N' && aux2!='n')
						cout << "Unknown command. Please enter a valid option! " << endl << endl;
					
				}while(aux2=='Y' && aux2=='y' && aux2!='N' && aux2!='n');
				
				if(aux2=='Y' || aux2=='y')
				{
					do
				   	{
						cin >> adc;
						if(adc==(int)adc)
					   	   	cout << "This number is not a float type. Please enter a valid number!" << endl;
				
					}while(adc==(int)adc);
					
					total = total*adc;
				}
				
			}while(aux2=='Y' || aux2=='y');
			
			cout << "Result: " << total << endl;
			system("pause");
			system("cls");
			
			break;
		
		case '/':
			cout << "Please enter the first floating number:" << endl;
			
			do
			{
				cin >> num;
				if(num==(int)num)
					cout << "This number is not a float type. Please enter a valid number!" << endl;
				
			}while(num==(int)num);
			
			cout << "Please enter the second floating number:" << endl;
			
			do
			{
				cin >> num2;
				if(num2==(int)num2)
					cout << "This number is not a float type. Please enter a valid number!" << endl;
				
			}while(num2==(int)num2);
			
			total = num/num2;
			
			do
			{
				do
				{	
					cout << "Add any more? Y or N" << endl;
					cin >> aux2;
					
					if(aux2!='Y' && aux2!='y' && aux2!='N' && aux2!='n')
						cout << "Unknown command. Please enter a valid option! " << endl << endl;
					
				}while(aux2!='Y' && aux2!='y' && aux2!='N' && aux2!='n');
				
				if(aux2=='Y' || aux2=='y')
				{
					do
				   	{
						cin >> adc;
						if(adc==(int)adc)
					   	   	cout << "This number is not a float type. Please enter a valid number!" << endl;
				
					}while(adc==(int)adc);
					
					total = total/adc;
				}
				
			}while(aux2=='Y' || aux2=='y');
			
			cout << "Result: " << total << endl;
			system("pause");
			system("cls");
			
			break;
		
		case 'V':
			cout << "Please enter the floating number:" << endl;
			
			do
			{
				cin >> num;
				if(num==(int)num)
					cout << "This number is not a floating type. Please enter a valid number!" << endl;
				
			}while(num==(int)num);
			
			total = sqrt(num);
			
			cout << "Result: " << total << endl;
			system("pause");
			system("cls");
			
			break;
		
		default:
			
			cout << "Unknown command. Please enter a valid option! " << endl << endl;
			
			system("pause");
			system("cls");
			
			break;
		}
		
		do
		{
			cout << "Do you want continue? Y or N" << endl;
			cin >> aux;
			
			if(aux!='y' && aux!='Y' && aux!='n' && aux!='N')
				cout << endl << "Please enter a valid option!" << endl;
			
		}while(aux!='y' && aux!='Y' && aux!='n' && aux!='N');
		
	}while(aux=='y' || aux=='Y');
	
	system("pause");
	system("cls");
}

void INT_NUMBER()
{
	float num=0, num2=0, adc=0, total=0;
	char op_in, aux, aux2;
	
	do
	{
		cout << "  ________________________________________  " << endl;
		cout << " |                                        | " << endl;
		cout << " |          *  CALCULATOR CLI  *          | " << endl;
		cout << " |________________________________________| " << endl;
		cout << " |                                        | " << endl;
		cout << " |        '+' - ADDITION                  | " << endl;
		cout << " |        '-' - SUBSTRACTION              | " << endl;
		cout << " |        '*' - MULTIPLICATION            | " << endl;
		cout << " |        '/' - DIVISON                   | " << endl;
		cout << " |        'V' - SQUARE ROOT               | " << endl;
		cout << " |________________________________________| " << endl;
		cout << endl << endl;
		
		cout << "Please enter an operation which you like to calculate:" << endl;
		cin >> op_in;
		
		switch(op_in)
		{
		case '+':
			cout << "Please enter the first integer number:" << endl;
			
			do
			{
				cin >> num;
				if(num!=(int)num)
					cout << "This number is not a integer type. Please enter a valid number!" << endl;
				
			}while(num!=(int)num);
			
			cout << "Please enter the second integer number:" << endl;
			
			do
			{
				cin >> num2;
				if(num2!=(int)num2)
					cout << "This number is not a integer type. Please enter a valid number!" << endl;
				
			}while(num2!=(int)num2);
			
			total = num+num2;
			
			do
			{
				do
				{	
					cout << "Add any more? Y or N" << endl;
					cin >> aux2;
					
					if(aux2!='Y' && aux2!='y' && aux2!='N' && aux2!='n')
						cout << "Unknown command. Please enter a valid option! " << endl << endl;
					
				}while(aux2=='Y' && aux2=='y' && aux2!='N' && aux2!='n');
				
				if(aux2=='Y' || aux2=='y')
				{
					do
					{
						cin >> adc;
						if(adc!=(int)adc)
							cout << "This number is not a integer type. Please enter a valid number!" << endl;
				
					}while(adc!=(int)adc);
					
					total = total+adc;
				}
				
			}while(aux2=='Y' || aux2=='y');
			
			cout << "Result: " << total << endl;
			system("pause");
			system("cls");
			
			break;
		
		case '-':
			cout << "Please enter the first integer number:" << endl;
			
			do
			{
				cin >> num;
				if(num!=(int)num)
					cout << "This number is not a integer type. Please enter a valid number!" << endl;
				
			}while(num!=(int)num);
			
			cout << "Please enter the second integer number:" << endl;
			
			do
			{
				cin >> num2;
				if(num2!=(int)num2)
					cout << "This number is not a integer type. Please enter a valid number!" << endl;
				
			}while(num2!=(int)num2);
			
			total = num-num2;
			
			do
			{
				do
				{	
					cout << "Add any more? Y or N" << endl;
					cin >> aux2;
					
					if(aux2!='Y' && aux2!='y' && aux2!='N' && aux2!='n')
						cout << "Unknown command. Please enter a valid option! " << endl << endl;
					
				}while(aux2=='Y' && aux2=='y' && aux2!='N' && aux2!='n');
				
				if(aux2=='Y' || aux2=='y')
				{
					do
					{
						cin >> adc;
						if(adc!=(int)adc)
							cout << "This number is not a integer type. Please enter a valid number!" << endl;
				
					}while(adc!=(int)adc);
					
					total = total-adc;
				}
				
			}while(aux2=='Y' || aux2=='y');
			
			cout << "Result: " << total << endl;
			system("pause");
			system("cls");
			
			break;
		
		case '*':
			cout << "Please enter the first integer number:" << endl;
			
			do
			{
				cin >> num;
				if(num!=(int)num)
					cout << "This number is not a integer type. Please enter a valid number!" << endl;
				
			}while(num!=(int)num);
			
			cout << "Please enter the second integer number:" << endl;
			
			do
			{
				cin >> num2;
				if(num2!=(int)num2)
					cout << "This number is not a integer type. Please enter a valid number!" << endl;
				
			}while(num2!=(int)num2);
			
			total = num*num2;
			
			do
			{
				do
				{	
					cout << "Add any more? Y or N" << endl;
					cin >> aux2;
					
					if(aux2!='Y' && aux2!='y' && aux2!='N' && aux2!='n')
						cout << "Unknown command. Please enter a valid option! " << endl << endl;
					
				}while(aux2=='Y' && aux2=='y' && aux2!='N' && aux2!='n');
				
				if(aux2=='Y' || aux2=='y')
				{
					do
					{
						cin >> adc;
						if(adc!=(int)adc)
							cout << "This number is not a integer type. Please enter a valid number!" << endl;
				
					}while(adc!=(int)adc);
					
					total = total*adc;
				}
				
			}while(aux2=='Y' || aux2=='y');
			
			cout << "Result: " << total << endl;
			system("pause");
			system("cls");
			
			break;
		
		case '/':
			cout << "Please enter the first integer number:" << endl;
			
			do
			{
				cin >> num;
				if(num!=(int)num)
					cout << "This number is not a integer type. Please enter a valid number!" << endl;
				
			}while(num!=(int)num);
			
			cout << "Please enter the second integer number:" << endl;
			
			do
			{
				cin >> num2;
				if(num2!=(int)num2)
					cout << "This number is not a integer type. Please enter a valid number!" << endl;
				
			}while(num2!=(int)num2);
			
			total = num/num2;
			
			do
			{
				do
				{	
					cout << "Add any more? Y or N" << endl;
					cin >> aux2;
					
					if(aux2!='Y' && aux2!='y' && aux2!='N' && aux2!='n')
						cout << "Unknown command. Please enter a valid option! " << endl << endl;
					
				}while(aux2!='Y' && aux2!='y' && aux2!='N' && aux2!='n');
				
				if(aux2=='Y' || aux2=='y')
				{
					do
					{
						cin >> adc;
						if(adc!=(int)adc)
							cout << "This number is not a integer type. Please enter a valid number!" << endl;
				
					}while(adc!=(int)adc);
					
					total = total/adc;
				}
				
			}while(aux2=='Y' || aux2=='y');
			
			cout << "Result: " << total << endl;
			system("pause");
			system("cls");
			
			break;
		
		case 'V':
			cout << "Please enter the integer number:" << endl;
			
			do
			{
				cin >> num;
				if(num!=(int)num)
					cout << "This number is not a integer type. Please enter a valid number!" << endl;
				
			}while(num!=(int)num);
			
			total = sqrt(num);
			
			cout << "Result: " << total << endl;
			system("pause");
			system("cls");
			
			break;
		
		default:
			
			cout << "Unknown command. Please enter a valid option! " << endl << endl;
			
			system("pause");
			system("cls");
			
			break;
		}
		
		do
		{
			cout << "Do you want continue? Y or N" << endl;
			cin >> aux;
			
			if(aux!='y' && aux!='Y' && aux!='n' && aux!='N')
				cout << endl << "Please enter a valid option!" << endl;
			
		}while(aux!='y' && aux!='Y' && aux!='n' && aux!='N');
		
	}while(aux=='y' || aux=='Y');
	
	system("pause");
	system("cls");
	
}

void START()
{
	int op1=1;
	
	while(op1!=0)
	{
		cout << "  ________________________________________  " << endl;
		cout << " |                                        | " << endl;
		cout << " |          *  CALCULATOR CLI  *          | " << endl;
		cout << " |________________________________________| " << endl;
		cout << " |                                        | " << endl;
		cout << " |         1 - INTEGER NUMBER             | " << endl;
		cout << " |         2 - FLOATING NUMBER            | " << endl;
		cout << " |         3 - EVEN NUMBER                | " << endl;
		cout << " |         4 - ODD NUMBER                 | " << endl;
		cout << " |         5 - FREE MODE                  | " << endl;
		cout << " |         6 - HELP                       | " << endl;
		cout << " |                                        | " << endl;
		cout << " |         0 - EXIT                       | " << endl;
		cout << " |________________________________________| " << endl;
		cout << endl << endl;
		
		do{
			cin >> op1;
			
			if(op1!=0 && op1!=1 && op1!=2 && op1!=3)
				cout<< endl << "Please enter a valid option!" << endl;
			
		}while(op1!=0 && op1!=1 && op1!=2 && op1!=3 && op1!=4 && op1!=5 && op1!=6);
		
		system("cls");
		
		if(op1==1)
	   		INT_NUMBER();
		else if(op1==2)
			FLT_NUMBER();
		else if(op1==3)
			EVEN_NUMBER();
		else if(op1==4)
			ODD_NUMBER();
		else if(op1==5)
			FREE_MODE();
		else if(op1==6)
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