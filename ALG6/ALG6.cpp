#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
	setlocale(LC_ALL, "Rus");
	int left, right, res;
	int n, count, exit = 0, c;
	while (exit == 0) {
		left = 0;
		right = 101;
		count = 0;
		printf("Загадайте число от 0 до 100: \n");
		scanf("%d", &n);
		do {
			res = (int)((left + right) / 2);
			count++;
			printf("%d попытка - %d ", count, res);
			if (n < res) {
				right = res;
			}
			else {
				left = res;
			}
			if (res != n)
				printf("(Новый отрезок от %d до %d)\n", left, right);
			else
				printf("(Искомое число)\n");
		} while (res != n);
		printf("Компьютер отгадал с %d попытки\n", count);
		printf("Хотите продолжить игру: (Y/N)\n");
		do
			c = getchar();
		while (isspace(c));
		if (c == 'N')
			exit = 1;
	}
	return 0;
}