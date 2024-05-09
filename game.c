//contributors
//Elias Dawarpana
//Gretel Castillo

#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

// Global variables for room 17
char inputComputerSymbol = ' ';
char inputPlayerSymbol = ' ';

void chooseRoomFor17();

void room17RoomOneLevelOne();
void room17RoomOneLevelTwo();

void room17RoomTwoLevelOne();
void room17RoomTwoLevelTwo();

void room17RoomThreeLevelOne();
void room17RoomThreeLevelTwo();

void room17RoomFourLevelOne();

void room17RoomFiveLevelOne();
void printBoard(char board[3][3]);
char getChosenSymbol(char c);
void playerTurn(char board[3][3]);
void placeMove(char board[3][3], int position, char symbol);
bool isValidMove(char board[3][3], int position);
bool isGameFinished(char board[3][3]);
bool hasContestantWon(char board[3][3], char symbol);
void FinalArea(int level);

int main(int argc, char *argv[])
{
	int choice = 0;
	char name[30] = "bob";

	srand(time(NULL));
	
	printf("Please enter your name: ");
	scanf("%s",name);

	printf("Hello %s welcome to the RPG Game!\n",name);

	while(choice != 99)
	{
		puts("You find yourself in a dark room and you are not sure how you got here.");
		puts("As you look around you see the room has 55 doors, each labeled with a number.");
		puts("The room starts filling with water and you must choose a door to open or you will likely drown. you may quit anytime by selecting option 99.");
		puts("What door do you choose?");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
			{
				puts("room1");
				break;
			}
			case 2:
			{
				puts("room2");
				break;
			}
			case 3:
			{
				puts("room3");
				break;
			}
			case 4:
			{
				puts("room4");
				break;
			}
			case 5:
			{
				puts("room5");
				break;
			}
			case 6:
			{
				puts("room6");
				break;
			}
			case 7:
			{
				puts("room7");
				break;
			}
			case 8:
			{
				puts("room8");
				break;
			}
			case 9:
			{
				puts("room9");
				break;
			}
			case 10:
			{
				puts("room10");
				break;
			}
			case 11:
			{
				puts("room11");
				break;
			}
			case 12:
			{
				puts("room12");
				break;
			}
			case 13:
			{
				printf("Welcome to room 13!\n");
				printf("The room of The Evil Future...\n");
				printf("Dear Player, the goal of this room is to make it back to the present!\n");
				printf("Select a road to follow and make your way back to the present...\nRoad 1: Shadowed Alley\nRoad 2: Desolation Boulevard\nRoad 3: Abyssal Passage\nRoad 4: Echoing Ruins Route\nRoad 5: Darkened Pathway\nPlease type in the number of the Road:");
				int x = 0;
				int w = 0;
				srand(time(NULL));
				int rNum = rand() % 10;
				int levels[] = 
				{
					1, 2, 3, 4, 5, 6, 7, 8, 9, 10
				};
				scanf("%d", &x);
				while (x != 4)
				{
					if (x == 1)
					{
						printf("\nYou walked down the Shadowed Alley and came across a dysfunctional robot that warps you to a jail cell...\nPlease Try again!\n\n");
					}
					else if (x == 2)
					{
						printf("\nYou reached the Desolation Boulevard and see a hologram of a pile of money, as you walk to grab it a robot grabs you and arrests you for illegal time travel...\nPlease try again!\n\n");
					}
					else if (x == 3)
					{
						printf("\nYou reached the Abyssal Passage, you come across an AI powered time machine, it asks you to place your fingerprint in the reader, it warps you back in time to the start area...\nPlease try again!\n\n");
					}
					else if (x == 5)
					{
						printf("\nYou reached the Dark Pathway, an area with no robot, as you make your way through the pathway you see a few aliens building something and they chase you away back to the starting area.\nPlease try again!\n\n");
					}
					printf("\nYou are back to the starting area, Select a road to follow and make your way back to the present...\nRoad 1: Shadowed Alley\nRoad 2: Desolation Boulevard\nRoad 3: Abyssal Passage\nRoad 4Echoing Ruins Route\nRoad 5: Darkened Pathway\nPlease type in the number of the Road:");
					scanf("%d", &x);
				}
				FinalArea(levels[rNum]);
          	break;
			}
			case 14:
			{
				puts("room14");
				break;
			}
			case 15:
			{
				puts("room15");
				break;
			}
			case 16:
			{
				puts("room16");
				break;
			}
			case 17:
			{
				puts("room17");
				srand(time(NULL));

                		// Number User Chose
                		int num = 0;

                		// Number for room chosen
                		int roomNum = 0;

            			printf("WELCOME TO SUPERNATURAL FINDINGS! A FANTASY RPG GAME WHERE YOUR TASK IS TO FIND THE GOLEM AND DEFEAT IT BY COMPLETEING CERTAIN LEVELS\n");
            			printf("BUT BEFORE YOU START THE GAME YOU MUST FIRST BE ASSIGNED A SUPPERNATURAL CHARACTER TO PLAY\n");
            			printf("IT'S A VERY SIMPLE TASK! PICK A NUMBER BETWEEN 1 - 20: \n");
            			scanf("%d", &num);


            			while (num < 1 || num > 20)
            			{
                			printf("INVALID NUMBER. PICK A NUMBER BETWEEN 1 - 20: \n");
                			scanf("%d", &num);
            			}


    				// Loop used to assign supernatural creature to user
    				if(num == 1 || num <= 5)
    				{
        				printf("SUPERNATURAL CREATURE YOU'VE BEEN ASSIGNED: WEREWOLF\n");
    				}
    				else if(num == 6 || num <= 10)
    				{
        				printf("SUPERNATURAL CREATURE YOU'VE BEEN ASSIGNED: VAMPIRE\n");
    				}
    				else if(num == 11 || num <= 15)
    				{
        				printf("SUPERNATURAL CREATURE YOU'VE BEEN ASSIGNED: MERMAID\n");
    				}
   				 else if(num == 16 || num <= 20)
    				{
        				printf("SUPERNATURAL CREATURE YOU'VE BEEN ASSIGNED: DRAGON\n");
    				}

    				// Backstory
    				printf("\n");
    				printf("NOW IT'S TIME TO START THE GAME.\n");
    				printf("BUT FIRST YOU NEED THE BACKSTORY.\n");
    				printf("IN A KINGDOM THAT EXISTS SOMEWHERE, PEOPLE HAVE FLED IN FEAR OF THE CREATURE THAT IS TERRORIZING THE PEACE.\n");
    				printf("THAT CREATURE IS KNOWN AS THE GOLEM. A FATHER AND SON HAVE CAUGHT SIGHT OF THE CREATURE NEAR THE ABANDONED VICTORIAN CASTLE.\n");
    				printf("THEY EVEN STATED THAT THEY SAW IT GO INSIDE. THEY HAVE ASKED FOR YOUR HELP IN ORDER TO ELIMINATE THE GOLEM.\n");
    				printf("YOUR TASK IS TO GO INSIDE THE OLD NOW ABANDONED VICTORIAN CASTLE, LOOK INTO ROOMS OF YOUR CHOICE, FIND THE GOLEM, AND DEFEAT IT.\n");
    				printf("IN THE ROOMS THERE ARE LITTLE GAMES AND LEVELS YOU HAVE TO PASS IN ORDER TO CLEAR THE ROOMS AND FIND GOLEM.\n");
    				printf("AFTER EACH GAME IN EACH ROOM IT WILL LET YOU KNOW WHETHER YOU FOUND THE GOLEM OR DIDNT AND WILL HAVE TO LOOK FOR IT ANOTHER ROOM.\n");

    				printf("NOW THAT YOU HAVE THE NECESSARY INFORMATION TO DEAFEAT THE GOLEM YOU CAN START THE GAME\n");
    				printf("THERE ARE ROOMS WHERE THE GOLEM COULD BE AND IN THESE ROOMS THERE ARE CERTAIN TASKS YOU MUST COMPLETE AND AT THE END OF ALL THE TASKS IN THE ROOM IT WILL DETERMINE IF YOU HAVE FOUND THE GOLEM OR NOT.\n");
    				printf("IF THE GOLEM IS NOT FOUND IN THE ROOM OF YOUR CHOICE YOU CAN CHOOSE ANOTHER ROOM AFTERWARDS UNTIL THE GOLEM IS FOUND.\n");

    				chooseRoomFor17();
				break;
			}
			case 18:
			{
				puts("room18");
				break;
			}
			case 19:
			{
				puts("room19");
				break;
			}
			case 20:
			{
				puts("room20");
				break;
			}
			case 21:
			{
				puts("room21");
				break;
			}
			case 22:
			{
				puts("room22");
				break;
			}
			case 23:
			{
				puts("room23");
				break;
			}
			case 24:
			{
				puts("room24");
				break;
			}
			case 25:
			{
				puts("room25");
				break;
			}
			case 26:
			{
				puts("room26");
				break;
			}
			case 27:
			{
				puts("room27");
				break;
			}
			case 28:
			{
				puts("room28");
				break;
			}

			case 29:
			{
				puts("room29");
				break;
			}
			case 30:
			{
				puts("room30");
				break;
			}
			case 31:
			{
				puts("room31");
				break;
			}
			case 32:
			{
				puts("room32");
				break;
			}

			case 33:
			{
				puts("room33");
				break;
			}
			case 34:
			{
				puts("room35");
				break;
			}

			case 36:
			{
				puts("room36");
				break;
			}

			case 37:
			{
				puts("room37");
				break;
			}

			case 38:
			{
				puts("room38");
				break;
			}
			case 39:
			{
				puts("room39");
				break;
			}
			case 40:
			{
				puts("room40");
				break;
			}
			case 41:
			{
				puts("room41");
				break;
			}
			case 42:
			{
				puts("room42");
				break;
			}
			case 43:
			{
				puts("room43");
				break;
			}
			case 44:
			{
				puts("room44");
				break;
			}
			case 45:
			{
				puts("room45");
				break;
			}
			case 46:
			{
				puts("room46");
				break;
			}
			case 47:
			{
				puts("room47");
				break;
			}
			case 48:
			{
				puts("room48");
				break;
			}
			case 49:
			{
				puts("room49");
				break;
			}
			case 50:
			{
				puts("room50");
				break;
			}
			case 51:
			{
				puts("room51");
				break;
			}
			case 52:
			{
				puts("room52");
				break;
			}
			case 53:
			{
				puts("room53");
				break;
			}
			case 54:
			{
				puts("room54");
				break;
			}
			case 55:
			{
				puts("room55");
				break;
			}
			case 99:
			{
				puts("You have escaped");
				break;
			}
			default:
			{
				puts("invalid choice");
			}
		}
	}
	puts("Game Over");
	return EXIT_SUCCESS;
}

void FinalArea(int level)
{
   printf("\nYou have made it through the Echoing Ruins Route, you come across a giant Robot Guard Monster that is guarding a fully functioning time machine, as you go to approach it, the robot awakens and says: INTRUDER!!!\n\nYou are given a holographic weapon menu that will spit out a ray gun weapon...\n");
   printf("The screen spins from a few levels and then reads: 'You have received the: Level %d ray gun!'\n", level);
   printf("As you grab the weapon the giant Robot Guard tries to attack you and you use The level %d ray gun to destroy the robot!\n", level);
   printf("You make your way to the time machine, panting heavily and set the date to the day you were in front of all the rooms...\nYou made it back!\n\nROOM CLEAR!\n\n");
   return;
}

void chooseRoomFor17()
{

    // Number for room chosen
    int roomNum = 0;

    printf("\n");
    printf("THERE ARE FIVE ROOMS WHERE THE GOLEM COULD BE: 1) THE DUNGEON 2) THE GREAT HALL 3) THE GATEHOUSE 4) CHAPEL 5) DOVECOAT\n");
    printf("CHOOSE THE ROOM YOU WANT TO CHECK BY ENTERING A NUMBER 1-5 THAT WILL INDICATE THE CHOICES ABOVE:\n");
    scanf("%d", &roomNum);

    while(roomNum < 1 || roomNum > 5)
    {
        printf("INVALID ROOM NUMBER.\n");
        printf("THERE ARE FIVE ROOMS WHERE THE GOLEM COULD BE: 1) THE DUNGEON 2) THE GREAT HALL 3) THE GATEHOUSE 4) CHAPEL 5) DOVECOAT\n");
        printf("CHOOSE THE ROOM YOU WANT TO CHECK BY ENTERING A NUMBER 1-5 THAT WILL INDICATE THE CHOICES ABOVE:\n");
        scanf("%d", &roomNum);
    }

    // Loop used to enter room
    if(roomNum == 1)
    {
        room17RoomOneLevelOne();
    }
    else if(roomNum == 2)
    {
        room17RoomTwoLevelOne();
    }
    else if(roomNum == 3)
    {
        room17RoomThreeLevelOne();
    }
    else if(roomNum == 4)
    {
        room17RoomFourLevelOne();
    }
    else if(roomNum == 5)
    {
        room17RoomFiveLevelOne();
    }
}

void room17RoomOneLevelOne()
{
    // Random number
    int randNum = rand() % 10;

    // Number User Chose for Random Number
    int userGuess = 0;

    // Number of Guesses
    int numOfGuesses = 0;

    printf("\n");
    printf("YOU HAVE ENTERED: THE DUNGEON\n");
    printf("NOW THAT YOU HAVE ENTERED THIS ROOM YOU ARE TO COMPLETE THE TWO LEVELS.\n");
    printf("IT IS IMPORTANT TO NOTE THAT YOU WILL BE GIVEN FIVE CHANCES IN ORDER TO GET THE CORRECT ANSWERS FOR EACH OF THE LEVELS IN THIS ROOM.\n");
    printf("NOW LETS BEGIN!\n");
    printf("\n");
    printf("\n");
    printf("LEVEL ONE: \n");
    printf("DIFFICULTY LEVEL: EASY\n");

    while(userGuess != randNum && numOfGuesses < 5)
    {
        printf("TASK: GUESS A NUMBER BETWEEEN 1-10: \n");
        scanf("%d", &userGuess);

        // Counter
        numOfGuesses++;

        if(userGuess < randNum)
        {
            printf("YOUR GUESS WAS LESS THAN THE NUMBER.\n");
        }
        else if(userGuess > randNum)
        {
            printf("YOUR GUESS WAS HIGHER THAN THE NUMBER.\n");
        }
        else
        {
            printf("YOU GUESSED CORRECTLY!\n");
            printf("YOU GET TO MOVE ON TO LEVEL TWO!\n");
            room17RoomOneLevelTwo();
        }
    }

    if(numOfGuesses == 5 && userGuess != randNum)
    {
        printf("YOU'VE USED UP YOUR FIVE GUESSES.\n");
        printf("GAME OVER!!!!!\n");
    }

}

void room17RoomOneLevelTwo()
{
    // Number user guessed for math problem
    int userMathR1Guess = 0;
    int mathR1Answer = 1;
    int numOfGuesses = 0;

    printf("\n");
    printf("\n");
    printf("LEVEL TWO: \n");
    printf("DIFFICULTY LEVEL: EASY\n");

    while(userMathR1Guess != mathR1Answer && numOfGuesses < 5)
    {
        // Change math problem up later
        printf("SOLVE THE MATH PROBLEM: : 7-24/8*4+6\n");
        scanf("%d", &userMathR1Guess);

        // Counter
        numOfGuesses++;

        if(userMathR1Guess == mathR1Answer)
        {
            printf("YOU ANSWERED CORRECTLY!\n");
            printf("BUT SADLY THE GOLEM ISN'T HERE.\n");
            printf("YOU'VE CLEARED THE ROOM THOUGH AND CAN NOW LOOK FOR THE GOLEM IN ANOTHER ROOM.\n");
            chooseRoomFor17();
        }
    }

    if(numOfGuesses == 5 && mathR1Answer != userMathR1Guess)
    {
        printf("YOU'VE USED UP YOUR FIVE GUESSES.\n");
        printf("GAME OVER!!!!!\n");
    }


}

void room17RoomTwoLevelOne()
{
    // User binary guess
    char binaryOneGuess[10];

    // Number of Guesses user made
    int numOfGuesses = 0;

    printf("\n");
    printf("YOU HAVE ENTERED: THE GREAT HALL\n");
    printf("NOW THAT YOU HAVE ENTERED THIS ROOM YOU ARE TO COMPLETE THE TWO LEVELS.\n");
    printf("IT IS IMPORTANT TO NOTE THAT YOU WILL BE GIVEN FIVE CHANCES IN ORDER TO GET THE CORRECT ANSWERS FOR EACH OF THE LEVELS IN THIS ROOM.\n");
    printf("NOW LETS BEGIN!\n");
    printf("\n");
    printf("\n");
    printf("LEVEL ONE: \n");
    printf("GAME: BINARY CONVERSION\n");
    printf("DIFFICULTY LEVEL: EASY\n");

    while(strcmp(binaryOneGuess, "0111") !=  0 && numOfGuesses < 5)
    {
        printf("CONVERT THE NUMBER 7 TO A BINARY NUMBER: \n");
        scanf("%s", binaryOneGuess);

        // Counter
        numOfGuesses++;

        if(strcmp(binaryOneGuess, "0111") == 0)
        {
            printf("YOU ANSWERED CORRECTLY!\n");
            printf("YOU GET TO MOVE ON TO LEVEL TWO!\n");
            room17RoomTwoLevelTwo();
        }
    }

    if(numOfGuesses == 5 && strcmp(binaryOneGuess, "0111") != 0)
    {
        printf("YOU'VE USED UP YOUR FIVE GUESSES.\n");
        printf("GAME OVER!!!!!\n");
    }
}

void room17RoomTwoLevelTwo()
{
    // User binary guess
    char binaryTwoGuess[10];

    // Number of Guesses user made
    int numOfGuesses = 0;

    printf("\n");
    printf("\n");
    printf("LEVEL TWO: \n");
    printf("GAME: BINARY CONVERSION\n");
    printf("DIFFICULTY LEVEL: EASY\n");

    while(strcmp(binaryTwoGuess, "1100") != 0 && numOfGuesses < 5)
    {
        printf("CONVERT THE NUMBER 25 TO A BINARY NUMBER: \n");
        scanf("%s", binaryTwoGuess);

        // Counter
        numOfGuesses++;

        if(strcmp(binaryTwoGuess, "1100") == 0)
        {
            printf("YOU ANSWERED CORRECTLY!\n");
            printf("BUT SADLY THE GOLEM ISN'T HERE.\n");
            printf("YOU'VE CLEARED THE ROOM THOUGH AND CAN NOW LOOK FOR THE GOLEM IN ANOTHER ROOM.\n");
            chooseRoomFor17();
        }
    }

    if(numOfGuesses == 5 && strcmp(binaryTwoGuess, "1100") != 0)
    {
        printf("YOU'VE USED UP YOUR FIVE GUESSES.\n");
        printf("GAME OVER!!!!!\n");
    }


}


void room17RoomThreeLevelOne() {
    // Number of Guesses user made
    int numOfGuesses = 0;

    char word[] = "METAMORPHOSIS";

    char userWord[100];

    printf("\n");
    printf("YOU HAVE ENTERED: THE GATEHOUSE\n");
    printf("NOW THAT YOU HAVE ENTERED THIS ROOM YOU ARE TO COMPLETE THE ONE LEVEL.\n");
    printf("IT IS IMPORTANT TO NOTE THAT YOU WILL BE GIVEN FIVE CHANCES IN ORDER TO GET THE CORRECT ANSWERS FOR EACH OF THE LEVELS.\n");
    printf("NOW LETS BEGIN!\n");
    printf("\n");
    printf("\n");
    printf("LEVEL ONE: \n");
    printf("GAME: UNSCRAMBLING LETTERS\n");
    printf("DIFFICULTY LEVEL: MEDIUM\n");
    printf("IMPORTANT NOTE: WHEN ENTERING YOUR ANSWER MAKE SURE TO TYPE IN ALL CAPS.\n");

    while(strcmp(userWord, word) != 0 && numOfGuesses < 5)
    {

        printf("GIVEN THE SCRAMBLED LETTERS 'MRTISAPSMOOEH' UNSCRAMBLE THEM AND CREATE THE SECRET WORD: \n");
        scanf("%s", userWord);

        // Counter
        numOfGuesses++;

        if(strcmp(userWord, word) == 0)
        {
            printf("YOU ANSWERED CORRECTLY!\n");
            printf("YOU GET TO MOVE ONTO LEVEL TWO!\n");
            room17RoomThreeLevelTwo();
        }

    }

    if(numOfGuesses == 5 && strcmp(userWord, word) != 0)
    {
        printf("YOU'VE USED UP YOUR FIVE GUESSES.\n");
        printf("GAME OVER!!!!!\n");
    }
}

void room17RoomThreeLevelTwo()
{
    // Number of Guesses user made
    int numOfGuesses = 0;

    char wordTwo[] = "COMMUNICATION";

    char userWordTwo[100];

    printf("\n");
    printf("\n");
    printf("LEVEL TWO: \n");
    printf("GAME: UNSCRAMBLING LETTERS\n");
    printf("DIFFICULTY LEVEL: MEDIUM\n");
    printf("IMPORTANT NOTE: WHEN ENTERING YOUR ANSWER MAKE SURE TO TYPE IN ALL CAPS.\n");

    while(strcmp(userWordTwo, wordTwo) != 0 && numOfGuesses < 5)
    {

        printf("GIVEN THE SCRAMBLED LETTERS 'ONACMNIMIOTUC' UNSCRAMBLE THEM AND CREATE THE SECRET WORD: \n");
        scanf("%s", userWordTwo);

        // Counter
        numOfGuesses++;

        if(strcmp(userWordTwo, wordTwo) == 0)
        {
            printf("YOU ANSWERED CORRECTLY!\n");
            printf("BUT SADLY THE GOLEM ISN'T HERE.\n");
            printf("YOU'VE CLEARED THE ROOM THOUGH AND CAN NOW LOOK FOR THE GOLEM IN ANOTHER ROOM.\n");
            chooseRoomFor17();
        }

    }

    if(numOfGuesses == 5 && strcmp(userWordTwo, wordTwo) != 0)
    {
        printf("YOU'VE USED UP YOUR FIVE GUESSES.\n");
        printf("GAME OVER!!!!!\n");
    }
}

void room17RoomFourLevelOne()
{
    char userChoice;

    printf("\n");
    printf("YOU HAVE ENTERED: THE CHAPEL\n");
    printf("NOW THAT YOU HAVE ENTERED THIS ROOM YOU ARE TO COMPLETE THE ONE LEVEL.\n");
    printf("IT IS IMPORTANT TO NOTE THAT YOU WILL ONLY BE GIVEN ONE CHANCE FOR THIS GAME IN ORDER TO GET THE CORRECT ANSWER FOR THE ONE LEVEL.\n");
    printf("NOW LETS BEGIN!\n");
    printf("\n");
    printf("\n");
    printf("LEVEL ONE: \n");
    printf("GAME: ROCK, PAPER, SCISSORS\n");
    printf("DIFFICULTY LEVEL: HARD\n");

    printf("YOU WILL PLAY THE GAME AGAINST THE COMPUTER BUT AFTER ENTERING YOUR CHOICE AND IF YOU LOST THEN IT WONT LET YOU KNOW WHAT THE COMPUTER HOLDS ONLY WHAT YOU CHOSE\n");
    printf("CHOOSE EITHER ROCK, PAPER, OR SCISSORS BY ENTERING 'R', 'P', OR 'S': \n");
    scanf(" %c", &userChoice);

    while(userChoice != 'R' && userChoice != 'P' && userChoice != 'S')
    {
        printf("INVALID CHOICE. CHOOSE EITHER ROCK, PAPER, OR SCISSORS BY ENTERING 'R', 'P', OR 'S': \n");
        scanf(" %c", &userChoice);
    }

    if(userChoice == 'S')
    {
        printf("YOU CHOSE SCISSORS.\n");
        printf("YOU LOST THE ROCK, PAPER, SCISSORS GAME.\n");
        printf("GAME OVER!!!!!\n");
    }
    else if(userChoice == 'P')
    {
        printf("YOU CHOSE PAPER.\n");
        printf("YOU ANSWERED CORRECTLY!\n");
        printf("AND YOU HAVE FOUND THE GOLEM! CONGRATULATIONS ON WINNING THE GAME!!\n");
    }
    else if(userChoice == 'R')
    {
        printf("YOU CHOSE ROCK.\n");
        printf("YOU LOST THE ROCK, PAPER, SCISSORS GAME.\n");
        printf("GAME OVER!!!!!\n");
    }
}

void computerTurn(char board[3][3])
{
    srand(time(NULL));

    int computerMove;

    while(true)
    {
        computerMove = rand() % 9 + 1;

        if(isValidMove(board, computerMove))
        {
            break;
        }
    }

    printf("COMPUTER CHOSE %d\n", computerMove);

    placeMove(board, computerMove, inputComputerSymbol);
}

void room17RoomFiveLevelOne()
{
    printf("\n");
    printf("YOU HAVE ENTERED: THE DOVECOTE\n");
    printf("NOW THAT YOU HAVE ENTERED THIS ROOM YOU ARE TO COMPLETE THE ONE LEVEL.\n");
    printf("IT IS IMPORTANT TO NOTE THAT YOU WILL ONLY BE GIVEN ONE CHANCE FOR THIS GAME IN ORDER TO GET THE CORRECT ANSWER FOR THE ONE LEVEL.\n");
    printf("NOW LETS BEGIN!\n");
    printf("\n");
    printf("\n");
    printf("LEVEL ONE: \n");
    printf("GAME: TIC TAC TOE \n");
    printf("DIFFICULTY LEVEL: HARD\n");

    char board[3][3] = {{' ', ' ', ' '}, {' ', ' ',' '}, {' ',' ', ' '}};

    printBoard(board);


    char chosenSymbol;

    while(true)
    {
        printf("ENTER A SYMBOL (X OR O): \n");
        scanf(" %c", &chosenSymbol);

        if(chosenSymbol == 'X' || chosenSymbol == 'O')
        {
            break;
        }
        else
        {
            printf("INVALID SYMBOL. PLEASE ENTER EITHER 'X' OR 'O'.\n");
        }
    }
    getChosenSymbol(chosenSymbol);

    if(getChosenSymbol(chosenSymbol) == ('X'))
    {
        inputComputerSymbol = 'O';
        inputPlayerSymbol = 'X';
    }
    else
    {
        inputComputerSymbol = 'X';
        inputPlayerSymbol = 'O';
    }

    while(true)
    {
        playerTurn(board);

        if(isGameFinished(board))
        {
            break;
        }

        printBoard(board);
        computerTurn(board);

        if(isGameFinished(board))
        {
            break;
        }
        printBoard(board);
    }

}

void printBoard(char board[3][3])
{
    printf("%c|%c|%c\n", board[0][0], board[0][1], board[0][2]);
    printf("-+-+-\n");
    printf("%c|%c|%c\n", board[1][0], board[1][1], board[1][2]);
    printf("-+-+-\n");
    printf("%c|%c|%c\n", board[2][0], board[2][1], board[2][2]);
}

char getChosenSymbol(char c)
{
    return c;
}

void playerTurn(char board[3][3])
{
    int userInput;

    while(true)
    {
        printf("WHERE WOULD YOU LIKE TO PLAY? (1-9) ");
        if (scanf("%d", &userInput) != 1)
        {
            while (getchar() != '\n');
            printf("INVALID INPUT. PLEASE ENTER A NUMBER BETWEEN 1 AND 9.\n");
            continue;
        }

        printf("USER INPUT: %d\n", userInput);

        if(isValidMove(board, userInput))
        {
            break;
        }
        else
        {
            printf("%d IS NOT A VALID MOVE.\n", userInput);
        }


    }

    placeMove(board, userInput, inputPlayerSymbol);
}


void placeMove(char board[3][3], int position, char symbol)
{
    switch(position)
    {
        case 1:
            board[0][0] = symbol;
        break;
        case 2:
            board[0][1] = symbol;
        break;
        case 3:
            board[0][2] = symbol;
        break;
        case 4:
            board[1][0] = symbol;
        break;
        case 5:
            board[1][1] = symbol;
        break;
        case 6:
            board[1][2] = symbol;
        break;
        case 7:
            board[2][0] = symbol;
        break;
        case 8:
            board[2][1] = symbol;
        break;
        case 9:
            board[2][2] = symbol;
        break;
        default:
            printf(":(");
            break;

    }
}

bool isValidMove(char board[3][3], int position)
{
    if(position < 1 || position > 9)
        return false;

    switch(position)
    {
        case 1:
            return ( board[0][0] == ' ');
        case 2:
            return ( board[0][1] == ' ');
        case 3:
            return ( board[0][2] == ' ');
        case 4:
            return ( board[1][0] == ' ');
        case 5:
            return ( board[1][1] == ' ');
        case 6:
            return ( board[1][2] == ' ');
        case 7:
            return ( board[2][0] == ' ');
        case 8:
            return ( board[2][1] == ' ');
        case 9:
            return ( board[2][2] == ' ');
        default:
            return false;

    }
}

bool hasContestantWon(char board[3][3], char symbol)
{
    if((board[0][0] == symbol && board[0][1] == symbol && board[0][2] == symbol) ||
           (board[1][0] == symbol && board[1][1] == symbol && board[1][2] == symbol) ||
           (board[2][0] == symbol && board[2][1] == symbol && board[2][2] == symbol) ||

           (board[0][0] == symbol && board[1][0] == symbol && board[2][0] == symbol) ||
           (board[0][1] == symbol && board[1][1] == symbol && board[2][1] == symbol) ||
           (board[0][2] == symbol && board[1][2] == symbol && board[2][2] == symbol) ||

           (board[0][0] == symbol && board[1][1] == symbol && board[2][2] == symbol) ||
           (board[0][2] == symbol && board[1][1] == symbol && board[2][0] == symbol))
    {

        return true;
    }
    return false;
}

bool isGameFinished(char board [3][3])
{
    if (hasContestantWon(board, inputPlayerSymbol))
    {
        printBoard(board);
        printf("YOU WON!\n");
        printf("BUT SADLY THE GOLEM ISN'T HERE.\n");
        printf("YOU'VE CLEARED THE ROOM THOUGH AND CAN NOW LOOK FOR THE GOLEM IN ANOTHER ROOM.\n");
        chooseRoomFor17();
        return true;
    }

    if (hasContestantWon(board, inputComputerSymbol))
    {
        printBoard(board);
        printf("COMPUTER WINS!\n");
        printf("YOU LOST THE TIC TAC TOE GAME.\n");
        printf("GAME OVER!!!!!\n");
        return true;
    }




    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if (board[i][j] == ' ')
            {
                return false;
            }
        }
    }

    printBoard(board);
    printf("THE GAME ENDED IN A TIE!\n");
    printf("YOU LOST THE TIC TAC TOE GAME.\n");
    printf("GAME OVER!!!!!\n");
    return true;
}

















































