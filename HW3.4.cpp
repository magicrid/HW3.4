#include <iostream>
#include <cstdlib>
#include <string>

int main()
{

	setlocale(LC_ALL, "RU");

	int num1{ 0 }, num2{ 0 };
	std::string textnum1, textnum2;

	std::cout << "Введите целое число: ";
	std::cin >> num1;

	if (num1 > 100 || num1 < -100)
	{
		std::cout << "Ошибка! Одно из чисел вне диапазона!" << std::endl;
		return EXIT_FAILURE;
	}

	std::cout << "Введите целое число: ";
	std::cin >> num2;

	if (num2 > 100 || num2 < -100)
	{
		std::cout << "Ошибка! Одно из чисел вне диапазона!" << std::endl;
		return EXIT_FAILURE;
	}

	int n = abs(num1);

	if (n == 0)
	{
		textnum1 += "ноль ";
	}
	else
	{
		if (num1 < 0)
		{
			textnum1 += "минус ";
		}
		switch (n / 100)
		{
		case 1: textnum1 += "сто "; break;
		}
		switch ((n % 100) / 10)
		{
		case 2: textnum1 += "двадцать "; break;
		case 3: textnum1 += "тридцать "; break;
		case 4: textnum1 += "сорок "; break;
		case 5: textnum1 += "пятдесят "; break;
		case 6: textnum1 += "шестьдесят "; break;
		case 7: textnum1 += "семьдесят "; break;
		case 8: textnum1 += "восемьдесят "; break;
		case 9: textnum1 += "девяносто "; break;
		}
		if (n % 100 >= 10 && n % 100 < 20)
		{
			switch (n % 100)
			{
			case 10: textnum1 += "десять "; break;
			case 11: textnum1 += "одинадцать "; break;
			case 12: textnum1 += "двенадцать "; break;
			case 13: textnum1 += "тринадцать "; break;
			case 14: textnum1 += "четырнадцать "; break;
			case 15: textnum1 += "пятнадцать "; break;
			case 16: textnum1 += "шестнадцать "; break;
			case 17: textnum1 += "семнадцать "; break;
			case 18: textnum1 += "восемнадцать "; break;
			case 19: textnum1 += "девятнадцать "; break;
			}
		}
		else if (n != 100 && n != -100 && n % 10 != 0)
		{
			switch (n % 10)
			{
			case 1: textnum1 += "один "; break;
			case 2: textnum1 += "два "; break;
			case 3: textnum1 += "три "; break;
			case 4: textnum1 += "четыре "; break;
			case 5: textnum1 += "пять "; break;
			case 6: textnum1 += "шесть "; break;
			case 7: textnum1 += "семь "; break;
			case 8: textnum1 += "восемь "; break;
			case 9: textnum1 += "девять "; break;
			}
		}
	}

	int n2 = abs(num2);

	if (n == 0)
	{
		textnum2 += "ноль ";
	}
	else
	{
		if (num2 < 0)
		{
			textnum2 += "минус ";
		}
		switch (n2 / 100)
		{
		case 1: textnum2 += "сто "; break;
		}
		switch ((n2 % 100) / 10)
		{
		case 2: textnum2 += "двадцать "; break;
		case 3: textnum2 += "тридцать "; break;
		case 4: textnum2 += "сорок "; break;
		case 5: textnum2 += "пятдесят "; break;
		case 6: textnum2 += "шестьдесят "; break;
		case 7: textnum2 += "семьдесят "; break;
		case 8: textnum2 += "восемьдесят "; break;
		case 9: textnum2 += "девяносто "; break;
		}
		if (n2 % 100 >= 10 && n2 % 100 < 20)
		{
			switch (n2 % 100)
			{
			case 10: textnum2 += "десять "; break;
			case 11: textnum2 += "одинадцать "; break;
			case 12: textnum2 += "двенадцать "; break;
			case 13: textnum2 += "тринадцать "; break;
			case 14: textnum2 += "четырнадцать "; break;
			case 15: textnum2 += "пятнадцать "; break;
			case 16: textnum2 += "шестнадцать "; break;
			case 17: textnum2 += "семнадцать "; break;
			case 18: textnum2 += "восемнадцать "; break;
			case 19: textnum2 += "девятнадцать  "; break;
			}
		}
		else if (n2 != 100 && n2 != -100 && n2 % 10 != 0)
		{
			switch (n2 % 10)
			{
			case 1: textnum2 += "один "; break;
			case 2: textnum2 += "два "; break;
			case 3: textnum2 += "три "; break;
			case 4: textnum2 += "четыре "; break;
			case 5: textnum2 += "пять "; break;
			case 6: textnum2 += "шесть "; break;
			case 7: textnum2 += "семь "; break;
			case 8: textnum2 += "восемь "; break;
			case 9: textnum2 += "девять "; break;
			}
		}
	}

	if (num1 < num2)
	{
		std::cout << textnum1 << "меньше чем " << textnum2 << std::endl;
	}
	else if (num1 > num2)
	{
		std::cout << textnum1 << "больше чем " << textnum2 << std::endl;
	}
	else
	{
		std::cout << textnum1 << "равно " << textnum2 << std::endl;
	}

	return EXIT_SUCCESS;
}