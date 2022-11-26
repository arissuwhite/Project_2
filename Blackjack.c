#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <process.h>
#include <time.h>
#include <stdlib.h>
#define STACK_MAX_SIZE 52
#define STACK_OVERFLOW  -100
#define STACK_UNDERFLOW -101
#define spade 06
#define club 05
#define diamond 04     
#define heart 03
int dealer_total, player_total, d, stk, random_card, k, l;
int clubcard(){
    srand((unsigned)time(NULL));
    k = rand() % 13 + 1;
    if (k <= 9)
    {
        printf("-------\n");
        printf("|%c    |\n", club);
        printf("|  %d  |\n", k);
        printf("|    %c|\n", club);
        printf("-------\n");
    }
    if (k == 10)
    {
        printf("-------\n");
        printf("|%c    |\n", club);
        printf("|  J  |\n");
        printf("|    %c|\n", club);
        printf("-------\n");
    }
    if (k == 11)
    {
        printf("-------\n");
        printf("|%c    |\n", club);
        printf("|  A  |\n");
        printf("|    %c|\n", club);
        printf("-------\n");
        if (player_total <= 10)
        {
            k = 11;
        }
        else
        {
            k = 1;
        }
    }
    if (k == 12)
    {
        printf("-------\n");
        printf("|%c    |\n", club);
        printf("|  Q  |\n");
        printf("|    %c|\n", club);
        printf("-------\n");
        k = 10;
    }
    if (k == 13)
    {
        printf("-------\n");
        printf("|%c    |\n", club);
        printf("|  K  |\n");
        printf("|    %c|\n", club);
        printf("-------\n");
        k = 10;
    }
    return k;
}
int diamondcard()
{
    srand((unsigned)time(NULL));
    k = rand() % 13 + 1;

    if (k <= 9)
    {
        printf("-------\n");
        printf("|%c    |\n", diamond);
        printf("|  %d  |\n", k);
        printf("|    %c|\n", diamond);
        printf("-------\n");
    }

    if (k == 10)
    {
        printf("-------\n");
        printf("|%c    |\n", diamond);
        printf("|  J  |\n");
        printf("|    %c|\n", diamond);
        printf("-------\n");
    }

    if (k == 11)
    {

        printf("-------\n");
        printf("|%c    |\n", diamond);
        printf("|  A  |\n");
        printf("|    %c|\n", diamond);
        printf("-------\n");
        if (player_total <= 10)
        {
            k = 11;
        }

        else
        {
            k = 1;
        }
    }

    if (k == 12)
    {
        printf("-------\n");
        printf("|%c    |\n", diamond);
        printf("|  Q  |\n");
        printf("|    %c|\n", diamond);
        printf("-------\n");
        k = 10;
    }

    if (k == 13)
    {
        printf("-------\n");
        printf("|%c    |\n", diamond);
        printf("|  K  |\n");
        printf("|    %c|\n", diamond);
        printf("-------\n");
        k = 10;
    }
    return k;
}

int heartcard()
{
    srand((unsigned)time(NULL));
    k = rand() % 13 + 1;
    if (k <= 9)
    {
        printf("-------\n");
        printf("|%c    |\n", heart);
        printf("|  %d  |\n", k);
        printf("|    %c|\n", heart);
        printf("-------\n");
    }

    if (k == 10)
    {
        printf("-------\n");
        printf("|%c    |\n", heart);
        printf("|  J  |\n");
        printf("|    %c|\n", heart);
        printf("-------\n");
    }

    if (k == 11)
    {

        printf("-------\n");
        printf("|%c    |\n", heart);
        printf("|  A  |\n");
        printf("|    %c|\n", heart);
        printf("-------\n");
        if (player_total <= 10)
        {
            k = 11;
        }

        else
        {
            k = 1;
        }
    }

    if (k == 12)
    {
        printf("-------\n");
        printf("|%c    |\n", heart);
        printf("|  Q  |\n");
        printf("|    %c|\n", heart);
        printf("-------\n");
        k = 10;
    }

    if (k == 13)
    {
        printf("-------\n");
        printf("|%c    |\n", heart);
        printf("|  K  |\n");
        printf("|    %c|\n", heart);
        printf("-------\n");
        k = 10;
    }
    return k;
}
int spadecard()
{
    srand((unsigned)time(NULL));
    k = rand() % 13 + 1;

    if (k <= 9)
    {
        //Spade Card
        printf("-------\n");
        printf("|%c    |\n", spade);
        printf("|  %d  |\n", k);
        printf("|    %c|\n", spade);
        printf("-------\n");
    }

    if (k == 10)
    {
        //Spade Card
        printf("-------\n");
        printf("|%c    |\n", spade);
        printf("|  J  |\n");
        printf("|    %c|\n", spade);
        printf("-------\n");
    }

    if (k == 11)
    {
        printf("-------\n");
        printf("|%c    |\n", spade);
        printf("|  A  |\n");
        printf("|    %c|\n", spade);
        printf("-------\n");
        if (player_total <= 10)
        {
            k = 11;
        }

        else
        {
            k = 1;
        }
    }

    if (k == 12)
    {

        printf("-------\n");
        printf("|%c    |\n", spade);
        printf("|  Q  |\n");
        printf("|    %c|\n", spade);
        printf("-------\n");
        k = 10;
    }

    if (k == 13)
    {

        printf("-------\n");
        printf("|%c    |\n", spade);
        printf("|  K  |\n");
        printf("|    %c|\n", spade);
        printf("-------\n");
        k = 10;
    }
    return k;
}
struct stack {
	int data[STACK_MAX_SIZE];
	int top;
};
typedef struct Card {
	int value, points;
} card;
void init(struct stack *s) {
	s->top = 0;
}
float pop(struct stack *s) {

}
void shuffle() {

}

int randcard()
{
	srand((unsigned)time(NULL));
	random_card = rand() % 4 + 1;
	if (random_card == 1)
	{
		clubcard();
		l = k;
	}
	if (random_card == 2)
	{
		diamondcard();
		l = k;
	}
	if (random_card == 3)
	{
		heartcard();
		l = k;
	}
	if (random_card == 4)
	{
		spadecard();
		l = k;
	}
	return l;
}
void rules() {
	printf("Цель игры Блэкджек – набрать карты с суммой очков, по возможности близкой к 21. 21 – это максимум, перебор сразу же приводит к поражению.\n");
	printf("Чем больше сумма очков, тем выше ценность набранных карт.\n");
	printf("Необходимо, правда, одно уточнение: туз и десятка называются блэкджеком и считаются самой значимой комбинацией.\n");
	printf("По ценности она превосходит любые другие карты, составляющие 21 очко.\n");
	printf("Короли, дамы, валеты и десятки оцениваются в 10 очков.\n");
	printf("Все эти карты равнозначны и для простоты называются десятками.\n");
	printf("Тузы по желанию игрока считаются за 11 очков или за 1 очко.\n");
	printf("Остальные карты – в соответствии с их рангом (двойка – 2 очка, восьмёрка – 8 очков и т.д.).\n");
	printf("Масти карт значения не имеют.\n");
	printf("Нажми любую кнопку, чтобы начать игру.\n");
}
int ask() {
	printf("Хотите сыграть еще?\n1: Да\n2: Нет\n");
	int answer;
	scanf("%d", &answer);
	switch (answer) {
	case 1:
		return 1;
	case 2:
		return 0;
	}
}
void play() {
	int p = 0, i = 1;
	stk = (struct stack*)malloc(sizeof(struct stack));
	init(stk);
	char choice;
	while (i <= 21) {
		if (p == 21) {
			printf("You won!");
		}
		if (p > 21) {
			printf("You loss! :(");

		}
		if (p <= 21) {
			printf("Enter T to take one more card or S to stay");
			scanf("%c", &choice);
			if (choice == "T") {
				randcard();
				//player_total = player_total + Card.points;
			}
		}
	}
}
int main() {
	struct stack* stk;
	int i, n, answer;
	float elem;
	setlocale(LC_ALL, "Rus");
    randcard();
    randcard();
	/*printf("1 to start a game\n");
	printf("2 to learn how to play\n");
	scanf("%d", &answer);
	switch (answer) {
	case 1:
		while (ask() != 0) {
			printf("A game have started\n");
			shuffle();
			play();
		}
		break;
	case 2:
		system("cls");
		rules();
		while (ask())
		play();
		break;
	}*/

	return 0;
}
