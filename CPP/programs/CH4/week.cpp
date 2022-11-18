// dayenum.cpp
// применение перечислений
#include <iostream>
using namespace std; 
// объявление перечисляемого типа
enum days_of_week { Sun, Mon, Tue, Wed, Thu, Fri, Sat };
int main()
{
days_of_week day1, day2;	// определения переменных, хранящих дни недели
day1 = Mon; 				// инициализация переменных
day2 = Thu;
int diff = day2 - day1;		// арифметическая операция
cout << "Разница в днях: " << diff << endl;
if(day1 < day2)
// сравнение
cout << "day1 наступит раньше, чем day2\n";
return 0;
}