﻿//	[The Count of Even Digits]
//	Количество чётных цифр 
//
//	Необходимо разработать рекурсивную функцию, которая подсчитывает 
//	количество чётных цифр у заданного пользователем целого числа.
//
//	Цифра ноль в математике является чётным числом. 
//
//	Число может быть как положительным, так и отрицательным.

#include "logic.h"

int count_even_digits(long long number) {
	if (number >-10 && number < 10) {
		return number % 2 == 0 ? 1 : 0;

	}
	int t = (number % 10) % 2 == 0 ? 1 : 0;

	return count_even_digits(number / 10) + t;

	return -1;
}
