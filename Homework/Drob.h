#pragma once
class Drob
{
private:
	//data members
	int chis;
	int znam;
public:
	Drob();
	Drob(int a, int b);
	//Drob_Int(int x);
	~Drob();
	void Print(Drob);
	void Input_one();
	void Input_two();
	Drob Plus(Drob);//����� ������/Sum Drobs  
	Drob Minus(Drob);//��������� ������/Subtraction Drobs
	Drob Multiplication(Drob);//��������� ������/Multiplication Drobs
	Drob Division(Drob);//������� ������ 
	Drob Reduction(Drob);//���� ��� ��������� � ����������� � ��������� �� /Find GCF shislitel and znamenatel and reduction them
	char Choose_�rithmetics_Operation();//����� �������������� �������� 
	int Drob_Integer(Drob);
	Drob Drob_Right(Drob,int a);
	bool Proverka_Na_Nol(Drob);

};

