#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define USER_GUESS
//#define COMPUTER_GUESS

#ifdef USER_GUESS
int main() {
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	int number = rand() % 101, guess, numberofguess = 0;
	int lb = 0, rb = 100;
	printf("�����,������� ����� �������� � ������� �����!\n");
	while (numberofguess != 10) {
		guess = (rb + lb) / 2;
		printf("����� ���� ��� %d?", guess);
		char answer;
		answer = getchar();
		getchar();
		if (answer == '<')
		{
			rb = guess - 1;
			printf("������,�� �� ����,����� ������\n");
			numberofguess++;
		}
		if (answer == '>') {
			lb = guess + 1;
			printf("������,����� ������\n");
			numberofguess++;
		}


		if (answer == '=') {
			printf("win\n");
			break;
		}



	}
		system("pause");
	return 0;
}
#else
#ifdef COMPUTER_GUESS
int main() {
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	int number = rand() % 101, guess, numberofguess = 0;
	
		printf("� ������ ����� �� 0 �� 100. �������� ������� ��� �� 10 �������.\n");
		while (numberofguess != 10) {
			printf("���� %d �������: ", numberofguess + 1);
			scanf_s("%d", &guess);
			if (guess > number)
			{
				printf("������,�� �� ����,����� ������\n");
				numberofguess++;
			}
			if (number > guess) {
				printf("������,����� ������\n");
				numberofguess++;
			}


			if (number == guess) {
				printf("win\n");
				break;
			}

		}
	

		system("pause");
	return 0;
}
#endif
#endif
