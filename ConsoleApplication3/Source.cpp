#include<iostream>
#include<cstdio>
#include<locale.h>
#include<math.h>
#include <cstdlib>

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	system("color 04");
	int N, exit;
	do
	{
		cout << "номер задания" << endl;
		cin >> N;
		switch (N)
		{
		case 1:
		{
			/*1.	Написать программу поиска чисел,
			лежащих в интервале от -5 до 5, в последовательности чисел, вводимых с клавиатуры,
			предшествующих первому введенному нулю . Контрольный пример: 1,10,-4,5,-16,-5,0.*/
			int a, b;
			do
			{
				cout << "введите число ";
				cin >> a;
				if ((a >= -5) && (a <= 5))
					cout << a << " " << endl;;
			} while (a != 0);//не знаю как вывести в конце программы
		}
		break;
		case 2:
		{
			/*2.	Вычислить сумму чисел от 1 до N, возведенных в степень M.
			Возведение в степень оформить как многократное умножение*/
			int a, i, stepen, b = 1, c = 1;
			int summ = 0;
			cout << "введите число" << endl;
			cin >> a;
			cout << "введите степень" << endl;
			cin >> stepen;
			for (i = 1;i <= a;i++)
			{
				c = 1;
				for (b = 1;b <= stepen;b++)
				{
					c *= i;
					summ += c;
				}
			}
			cout << "summa " << summ << endl;
		}
		break;
		case 3:
		{
			/*3.	У студента имеются накопления S тенге. Ежемесячная стипендия составляет А тенге,
			а расходы на проживание превышают ее и составляют B тенге. в месяц Рост цен ежемесячно увеличивает расходы на 3%.
			Определить, сколько месяцев сможет прожить студент, используя только накопления и стипендию.*/
			int nakopleniya;
			int stipendiya;
			int rashodi;
			int schet = 0;
			cout << "введите сумму накоплений" << endl;
			cin >> nakopleniya;
			cout << "введите сумму стипендии" << endl;
			cin >> stipendiya;
			cout << "введите расходы на месяц" << endl;
			cin >> rashodi;
			do
			{
				if (nakopleniya >= (rashodi - stipendiya))
				{
					schet++;
					nakopleniya -= (rashodi - stipendiya);
					rashodi = rashodi + (rashodi*0.03);
				}

			} while (nakopleniya >= (rashodi - stipendiya));
			cout << "студент проживет " << schet << " месяцев" << endl;
		}
		break;
		case 4:
		{
			/* Дано натуральное число n(n<9999) и число m.Найти сумму mпоследних цифр числа n.*/
			int n;
			int m;
			int s;
			int k;
			cout << "введите число N" << endl;
			cin >> n;
			cout << "m" << endl;
			cin >> m;
			s = 0;
			for (int i = 1;i <= m;i++)
			{
				k = n % 10;
				n = n / 10;
				s += k;
			}
			cout << "Сумма m последних цифр числа есть " << s << endl;
		}
		break;
		case 6:
		{
			/* Найти все числа кратные семи, и сумма цифр которых также кратна семи */
			int i;
			int a;
			int b;
			int c = 1;
			for (i = 1;i < 100;i++)
			{
				if (i % 7 == 0)
				{
					a = i % 10;
					b = i / 10;
					c = a + b;
					if (c % 7 == 0)
						cout << i << " " << c << endl;
				}
			}
		}
		break;
		case 5:
		{
			
			/*Натуральное число из n цифр является число Армстронга,
			если сумма его цифр возведенных в n-ую степень равна самому числу. 
			Получите все  эти числа состоящие из трех и четырех цифр (пример 1³ + 5³ + 3³ = 153 ). */
			int i,x,y,c,z;
			int summ;
			cout << "трехзначные числа" << endl;
			for (i = 100;i <= 999;i++)
			{
				x = i / 100;
				y = i % 100 / 10;
				c = i % 10;
				summ = pow(x, 3) + pow(y, 3) + pow(c, 3);
				if (summ == i)
					cout << i << endl;
			}
			cout << "четырехзначные числа" << endl;
			for (i == 1000;i <= 9999;i++)
			{
				x = i / 1000;
				y = i % 1000 / 100;
				c = i % 100 / 10;
				z = i % 10;
				summ = pow(x, 4) + pow(y, 4) + pow(c, 4)+pow(z, 4);
				if (summ == i)
					cout << i << endl;
			}
		}
		break;
		case 7:
		{
			int dex,oct;
			cin >> dex;
			while (dex != 0)
			{
				oct = dex % 8;
				dex /= 8;
				cout << oct;//не знаю как перевернуть число
				
			}
			cout << endl;
		}
		break;
		default:cout << "нет такого задания" << endl;
			break;
		}
		cout << "вы хотите продолжить (1) Да (2) Нет";
		cin >> exit;
	} while (exit == 1);

}