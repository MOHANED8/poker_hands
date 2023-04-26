//Muhanned Hasan 2200000776
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// Define a structure to represent a single card with its suit and rank.
struct Card {
    char rank;
    char suit;
};

// Define an array of possible ranks and suits.
char ranks[] = { '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K', 'A' };
char suits[] = { 'C', 'D', 'H', 'S' };

// Function to check if a card is valid.
int analyze_cards(char rank, char suit) {
    int valid_rank = 0, valid_suit = 0;
    for (int i = 0; i < 13; i++) {
        if (rank == ranks[i]) {
            valid_rank = 1;
            break;
        }
    }
    for (int i = 0; i < 4; i++) {
        if (suit == suits[i]) {
            valid_suit = 1;
            break;
        }
    }
    return valid_rank && valid_suit;
}

// Function to check if a card is already in the hand.
int read_cards(struct Card* hand, struct Card card) {
    for (int i = 0; i < 5; i++) {
        if (hand[i].rank == card.rank && hand[i].suit == card.suit) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int play_again = 1;
    while (play_again) {
        struct Card hand[5];
        int num_cards = 0;
        while (num_cards < 5) {
            char rank, suit;
            printf("Enter card %d: ", num_cards + 1);
            scanf(" %c%c", &rank, &suit);
            if (rank == '0') {
                play_again = 0;
                break;
            }
            if (!analyze_cards(rank, suit)) {
                printf("Bad card;ignored\n");
                continue;
            }
            struct Card card = { rank, suit };
            if (read_cards(hand, card)) {
                printf("Duplicate card;ignored\n");
                continue;
            }
            hand[num_cards++] = card;
        }
        if (!play_again) {
            break;
        }
        printf("Your hand: ");
        for (int i = 0; i < 5; i++) {
            printf("%c%c ", hand[i].rank, hand[i].suit);
        }
        printf("\n");
        printf("Play again? (1 = yes, 0 = no): ");
        scanf("%d", &play_again);
    }
    return 0;
}
