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
	Drob Plus(Drob);//Сумма дробей/Sum Drobs  
	Drob Minus(Drob);//Вычитание дробей/Subtraction Drobs
	Drob Multiplication(Drob);//Умножение дробей/Multiplication Drobs
	Drob Division(Drob);//Деление дробей 
	Drob Reduction(Drob);//Ищет НОД числителя и знаменателя и сокращает их /Find GCF shislitel and znamenatel and reduction them
	char Choose_Аrithmetics_Operation();//Выбор арифметической операции 
	int Drob_Integer(Drob);
	Drob Drob_Right(Drob,int a);
	bool Proverka_Na_Nol(Drob);

};

