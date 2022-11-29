#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <process.h>
#include <time.h>
#include <stdlib.h>
#include "windows.h"
#define STACK_MAX_SIZE 52
#define STACK_OVERFLOW -100
#define STACK_UNDERFLOW -101
#define spade 06
#define club 05
#define diamond 04     
#define heart 03
int dealer_total=0, player_total=0, d, stk, random_card, k=0, l=0, mainflag=1;
int clubcard() {
    srand((unsigned)time(NULL));
    k = rand() % 13 + 1;
    if (k <= 9){
        printf("-------\n");
        printf("|%c    |\n", club);
        printf("|  %d  |\n", k);
        printf("|    %c|\n", club);
        printf("-------\n");
    }
    if (k == 10){
        printf("-------\n");
        printf("|%c    |\n", club);
        printf("|  J  |\n");
        printf("|    %c|\n", club);
        printf("-------\n");
    }
    if (k == 11){
        printf("-------\n");
        printf("|%c    |\n", club);
        printf("|  A  |\n");
        printf("|    %c|\n", club);
        printf("-------\n");
        if (player_total <= 10){
            k = 11;
        } else {
            k = 1;
        }
    }
    if (k == 12){
        printf("-------\n");
        printf("|%c    |\n", club);
        printf("|  Q  |\n");
        printf("|    %c|\n", club);
        printf("-------\n");
        k = 10;
    }
    if (k == 13){
        printf("-------\n");
        printf("|%c    |\n", club);
        printf("|  K  |\n");
        printf("|    %c|\n", club);
        printf("-------\n");
        k = 10;
    }
    return k;
}
int diamondcard(){
    srand((unsigned)time(NULL));
    k = rand() % 13 + 1;
    if (k <= 9){
        printf("-------\n");
        printf("|%c    |\n", diamond);
        printf("|  %d  |\n", k);
        printf("|    %c|\n", diamond);
        printf("-------\n");
    }
    if (k == 10){
        printf("-------\n");
        printf("|%c    |\n", diamond);
        printf("|  J  |\n");
        printf("|    %c|\n", diamond);
        printf("-------\n");
    }
    if (k == 11){
        printf("-------\n");
        printf("|%c    |\n", diamond);
        printf("|  A  |\n");
        printf("|    %c|\n", diamond);
        printf("-------\n");
        if (player_total <= 10){
            k = 11;
        } else {
            k = 1;
        }
    }
    if (k == 12){
        printf("-------\n");
        printf("|%c    |\n", diamond);
        printf("|  Q  |\n");
        printf("|    %c|\n", diamond);
        printf("-------\n");
        k = 10;
    }
    if (k == 13){
        printf("-------\n");
        printf("|%c    |\n", diamond);
        printf("|  K  |\n");
        printf("|    %c|\n", diamond);
        printf("-------\n");
        k = 10;
    }
    return k;
}
int heartcard(){
    srand((unsigned)time(NULL));
    k = rand() % 13 + 1;
    if (k <= 9){
        printf("-------\n");
        printf("|%c    |\n", heart);
        printf("|  %d  |\n", k);
        printf("|    %c|\n", heart);
        printf("-------\n");
    }
    if (k == 10){
        printf("-------\n");
        printf("|%c    |\n", heart);
        printf("|  J  |\n");
        printf("|    %c|\n", heart);
        printf("-------\n");
    }
    if (k == 11){
        printf("-------\n");
        printf("|%c    |\n", heart);
        printf("|  A  |\n");
        printf("|    %c|\n", heart);
        printf("-------\n");
        if (player_total <= 10){
            k = 11;
        } else {
            k = 1;
        }
    }
    if (k == 12){
        printf("-------\n");
        printf("|%c    |\n", heart);
        printf("|  Q  |\n");
        printf("|    %c|\n", heart);
        printf("-------\n");
        k = 10;
    }
    if (k == 13){
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
    if (k <= 9){
        printf("-------\n");
        printf("|%c    |\n", spade);
        printf("|  %d  |\n", k);
        printf("|    %c|\n", spade);
        printf("-------\n");
    }
    if (k == 10){
        printf("-------\n");
        printf("|%c    |\n", spade);
        printf("|  J  |\n");
        printf("|    %c|\n", spade);
        printf("-------\n");
    }
    if (k == 11){
        printf("-------\n");
        printf("|%c    |\n", spade);
        printf("|  A  |\n");
        printf("|    %c|\n", spade);
        printf("-------\n");
        if (player_total <= 10){
            k = 11;
        } else {
            k = 1;
        }
    }
    if (k == 12){

        printf("-------\n");
        printf("|%c    |\n", spade);
        printf("|  Q  |\n");
        printf("|    %c|\n", spade);
        printf("-------\n");
        k = 10;
    }
    if (k == 13){
        printf("-------\n");
        printf("|%c    |\n", spade);
        printf("|  K  |\n");
        printf("|    %c|\n", spade);
        printf("-------\n");
        k = 10;
    }
    return k;
}
void rules() {
    char choice;
    printf("1. The goal of the game of Blackjack is to collect cards with a total of points as close to 21 as possible.\n");
    printf("2. 21 is the maximum, busting immediately leads to defeat.\n");
    printf("3. The higher the score, the higher the value of the collected cards.\n");
    printf("4. However, one clarification is needed: an ace and a ten are called blackjack and are considered the most significant combination.\n");
    printf("5. J, Q, and K cards hold a value of 10.\n");
    printf("6. All these cards are equivalent and are called tens for simplicity.\n");
    printf("7. Aces at the request of the player count as 11 points or 1 point.\n");
    printf("8. The remaining cards - in accordance with their rank (two - 2 points, eight - 8 points, etc.).\n");
    printf("9. The suits of the cards don't matter.\n");
}

struct stack {
    int data[STACK_MAX_SIZE];
    int top;
};
typedef struct Card {
    int value, points;
} card;
void init(struct stack* s) {
    s->top = 0;
}
float pop(struct stack* s) {

}
void shuffle() {
    player_total = 0;
    dealer_total = 0;
}
int randcard(){
    srand((unsigned)time(NULL));
    random_card = rand() % 4 + 1;
    if (random_card == 1){
        clubcard();
        l = k;
    }
    if (random_card == 2){
        diamondcard();
        l = k;
    }
    if (random_card == 3){
        heartcard();
        l = k;
    }
    if (random_card == 4){
        spadecard();
        l = k;
    }
    return l;
}
int dealer() {
    int z;
    if (dealer_total < 17) {
        srand((unsigned)time(NULL) + 1);
        z = rand() % 13 + 1;
        if (z <= 10) {
            d = z;
        }
        if (z > 11) {
            d = 10;
        }
        if (z == 11) {
            if (dealer_total <= 10) {
                d = 11;
            }
            else {
                d = 1;
            }
        }
        dealer_total = dealer_total + d;
    }
    return dealer_total;
}
/*int ask() {
    printf("Want to play one more time? Y for yes, N for no");
    char answer;
    scanf("%c", &answer);
    switch (answer) {
    case 'Y':
        return 1;
    case 'N':
        return 0;
    }
}*/
void stay() {
    dealer();
    if (dealer_total >= 17) {
        if (player_total >= dealer_total) {
            printf("\nDealer's score less than your: %d. You have won!\n", dealer_total);
            shuffle();
        }
        if (player_total < dealer_total) {
            printf("\nDealer has the better hand: %d. You have lost.\n", dealer_total);
            shuffle();
        }
        if (dealer_total > 21) {
            printf("\nDealer's score is more than 21: %d. You have won!\n", dealer_total);
            shuffle();
        }
    }
    else {
        stay();
    }
}
void play() {
    //stk = (struct stack*)malloc(sizeof(struct stack));
    //init(stk);
    randcard();
    player_total = player_total + l;
    Sleep(1000);
    randcard();
    player_total = player_total + l;
    char choice, retrychoice;
    while (1) {
        if (player_total == 21) {
            printf("Bingo! Your score is 21. You have won.\n");
            break;
        }
        if (player_total > 21) {
            printf("Your score is more than 21. You have lost! :(\n");
            break;
        }
        if (player_total < 21) {
            printf("Your total score: %d\n", player_total);
            printf("Enter T to take one more card or S to stay\n\n");
            scanf("%c", &choice);
            if (choice == 'T') {
                randcard();
                player_total = player_total + l;
            }
            if (choice == 'S') {
                printf("Your total score: %d You have chosen to stay.\n", player_total);
                stay();
                break;
            }
        }
    }
    printf("Want to play one more time? Y for Yes, N for No\n");
    scanf("%c", &retrychoice);
    if (retrychoice == 'Y') {
        shuffle();
        system("cls");
        play();
    }
    else if (retrychoice == 'N') {
        printf("\nThe game is over, see you soon!\n");
    }
    else {
        while (retrychoice == 'N' || retrychoice == 'Y') {
            printf("Enter a correct answer(Y or N)");
        }
    }
}

int main() {
    struct stack* stk;
    int i, n, p, answer;
    float elem;
    setlocale(LC_ALL, "Rus");
    char choice,choice1;
    int choice2;
    printf("Want to play? Y for Yes, N for No\n");
    scanf("\n%c", &choice1);
    if (choice1 == 'Y') {
        system("cls");
        printf("Enter 1 to play\n");
        printf("Enter 2 to read a rules.\n");
        printf("Enter 3 to exit\n");
        scanf("%d", &choice2);
        if ((choice2 < 1) || (choice2 > 3))
        {
            printf("\nIncorrect choice. Please enter 1, 2 or 3\n");
            scanf("%d", &choice2);
        }
        switch (choice2)
        {
        case 1:
            system("cls");
            play();
            break;
        case 2:
            system("cls");
            rules();
            printf("Enter S to start a game\n");
            scanf("%c", &choice);
            if (choice == 'S') {
                play();
            }
            else {
                printf("\nIncorrect choice. Please enter S to play a game\n");
            }
        case 3:
            printf("\nHave an almost perfect day!\n\n");
            system("pause");
            exit(0);
            break;
        }
    }
    else if (choice1 == 'N') {
        printf("\nHave an almost perfect day!\n\n");
        system("pause");
        exit(0);
    }
    return 0;
}
