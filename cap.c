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
	printf("Малыш,подумай своей тыковкой и загадай чилос!\n");
	while (numberofguess != 10) {
		guess = (rb + lb) / 2;
		printf("Может быть это %d?", guess);
		char answer;
		answer = getchar();
		getchar();
		if (answer == '<')
		{
			rb = guess - 1;
			printf("Зайчик,ты не прав,число меньше\n");
			numberofguess++;
		}
		if (answer == '>') {
			lb = guess + 1;
			printf("Пупсик,число больше\n");
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
	
		printf("Я набрал число от 0 до 100. Попробуй угадать это за 10 попыток.\n");
		while (numberofguess != 10) {
			printf("Твоя %d попытка: ", numberofguess + 1);
			scanf_s("%d", &guess);
			if (guess > number)
			{
				printf("Зайчик,ты не прав,число меньше\n");
				numberofguess++;
			}
			if (number > guess) {
				printf("Пупсик,число больше\n");
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
