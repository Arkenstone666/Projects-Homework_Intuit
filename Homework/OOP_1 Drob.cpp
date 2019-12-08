#include <iostream>
#include "Drob.h"
using namespace std;
int main()
{
	//Drob d3(1); to be added
	char operation;
	int a;
	Drob d1;
	Drob d2;
	Drob d3;
	Drob d4;
	d1.Input_one();
	d2.Input_two();
	operation = d3.Choose_Аrithmetics_Operation();
	if (operation == '+')
	{
		d3 = d1.Plus(d2);
		d3 = d3.Reduction(d3);
		cout << "After Sum New Drob: ";
		d3.Print(d3);
		a = d3.Drob_Integer(d3);
		d4 = d3.Drob_Right(d3, a);
		if (d4.Proverka_Na_Nol(d4) == true)
		{
			cout << "==========================================================================================" << endl;
			cout << "This Drob is correct and the chislitel divided entirely by the znamenatel = " << a<<endl;
		}
		else
		{
			cout << "=========================================================================================="<<endl;
			cout << "The Right Drob : Int = " << a;
			d4.Print(d4);
			cout << endl;
		}

	}
	else if (operation == '-')
	{
		d3 = d1.Minus(d2);
		d3 = d3.Reduction(d3);
		cout << "After Subtraction New Drob: ";
		d3.Print(d3);
		a = d3.Drob_Integer(d3);
		d4 = d3.Drob_Right(d3, a);
		if (d4.Proverka_Na_Nol(d4) == true)
		{
			cout << "==========================================================================================" << endl;
			cout << "This Drob is correct and the chislitel divided entirely by the znamenatel = " << a<<endl;
		}
		else
		{
			cout << "==========================================================================================" << endl;
			cout << "The Right Drob : Int = " << a;
			d4.Print(d4);
			cout << endl;
		}
	}
	else if (operation == '*')
	{
		d3 = d1.Multiplication(d2);
		d3 = d3.Reduction(d3);
		cout << "After Multiplication New Drob:";
		d3.Print(d3);
		a = d3.Drob_Integer(d3);
		d4 = d3.Drob_Right(d3, a);
		if (d4.Proverka_Na_Nol(d4) == true)
		{
			cout << "==========================================================================================" << endl;
			cout << "This Drob is correct and the chislitel divided entirely by the znamenatel = " << a<<endl;
		}
		else
		{
			cout << "==========================================================================================" << endl;
			cout << "The Right Drob : Int = " << a;
			d4.Print(d4);
			cout << endl;
		}
	}
	else if (operation == '/')
	{
		d3 = d1.Division(d2);
		d3 = d3.Reduction(d3);
		cout << "After Division New Drob:";
		d3.Print(d3);
		a = d3.Drob_Integer(d3);
		d4 = d3.Drob_Right(d3, a);
		if (d4.Proverka_Na_Nol(d4) == true)
		{
			cout << "==========================================================================================" << endl;
			cout << "This Drob is correct and the chislitel divided entirely by the znamenatel = " << a<<endl;

		}
		else
		{
			cout << "==========================================================================================" << endl;
			cout << "The Right Drob : Int = " << a;
			d4.Print(d4);
			cout << endl;
		}
	}
	else
		cout << "No such operation!!!" << endl;
	return 0;
}


