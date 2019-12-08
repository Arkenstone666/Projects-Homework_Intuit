
#include "Drob.h"
#include <iostream>
using namespace std;

Drob::Drob()
{
	chis = 0;
	znam = 1;
}

Drob::Drob(int a, int b)
{
	chis = a;
	znam = b;
}

Drob::~Drob()
{
}

void Drob::Print(Drob x) //Prited Drob/�������� �����
{	
	if (x.chis == 0 or x.znam == 0)
		cout << "Drob = 0" << endl;
	else
		cout << " Chisl = " << chis << " Znam = " << znam << endl;
}

void Drob::Input_one()//���� ������ �����
{
	cout << "Drob one! Enter chislitel and znamenatel:";
	cin >> chis >> znam;
	cout << endl;
}

void Drob::Input_two() //���� ������ �����
{
	cout << "Drob two! Enter chislitel and znamenatel:";
	cin >> chis >> znam;
	cout << endl;
}

Drob Drob::Plus(Drob x) //����� ������/Sum Drobs 
{
	Drob result;
	result.znam = this->znam * x.znam;
	result.chis = this->chis * x.znam + this->znam * x.chis;
	return result;
}

Drob Drob::Minus(Drob x) //��������� ������/Subtraction Drobs
{
	Drob result;
	result.znam = this->znam * x.znam;
	result.chis = this->chis * x.znam - this->znam * x.chis;
	return result;
}

Drob Drob::Multiplication(Drob x)//Multiplication Drobs/��������� ������
{
	Drob result;
	result.znam = this->znam * x.znam;
	result.chis = this->chis * x.chis;
	return result;
}
Drob Drob::Division(Drob x)//Division Drobs/������� ������
{
	Drob result;
	result.znam = this->znam * x.chis;
	result.chis = this->chis * x.znam;
	return result;
}
Drob Drob::Reduction(Drob x) //���������� �����/Reduction Drob
{
	Drob result;
	int tmp=0;
	int chis1 = x.chis;
	int znam1 = x.znam;
	while (znam1!=0)
	{
		tmp = chis1;
		chis1 = znam1;
		znam1 =tmp%znam1;
	}
	result.znam = this->znam / chis1;
	result.chis = this->chis / chis1; 
	return result;
}
char Drob::Choose_�rithmetics_Operation() //����� �������������� �������� 
{
	char operation;
	cout << "Please choose operation:";
	cin >> operation;
	cout << endl;
	return operation;
}
int Drob::Drob_Integer(Drob x)//How much Integer piece/������� ����� ������ � �����
{
	int result;
	result = this->chis / this->znam;
	return result;
}
Drob Drob::Drob_Right(Drob x,int a)//������� ����� � ���������� �����
{
	Drob result;
	Drob result1;
	result1.znam = x.znam;
	result1.chis = x.znam * a;
	result = x.Minus(result1);
	result = result.Reduction(result);
	return result;
}
bool Drob::Proverka_Na_Nol(Drob x)//��������� ���� �� � ����� ����
{
	if (x.chis == 0 or x.znam == 0)
		return true;
	else
		return false;
}