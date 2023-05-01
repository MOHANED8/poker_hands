# poker_hands

This program simulates a simple card game where the user is asked to enter five cards, and the program checks if they are valid and not duplicates. If a card is invalid or a duplicate, it is ignored, and the user is prompted to enter another card.

The program uses a structure Card to represent a single card with its rank and suit. It also defines two arrays ranks and suits to store all possible ranks and suits, respectively.

The program includes two functions:

analyze_cards() - to check if a card is valid.
read_cards() - to check if a card is already in the hand.
The main function uses a loop to ask the user to enter five cards, and if the cards are valid and not duplicates, they are added to the hand. If the user enters "0" as the first character of a card, the program exits. If the user enters a valid hand, the program prints the hand and asks the user if they want to play again.

How to use the program

1.Enter five cards by entering the rank and suit of each card (e.g., "2C" for the 2 of Clubs)

2.If a card is invalid or a duplicate, the program will notify you and ask you to enter another card

3.If you enter a valid hand, the program will print the hand and ask you if you want to play again

4.If you enter "1" to play again, the program will ask you to enter another hand of five cards

5.If you enter "0" to exit, the program will stop running
