//contributors
//th3cod3rbab3

#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

void guessGame();

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
				//int main(void) {
  
				int choice = 1;

  				while(choice >= 1 && choice <= 5)
    					{
    				printf("Oh no.. you have entered room 3.\n");
			        printf("This should be fun.. Remember depending on what door you choose, you will have to make lots of choices..\n");
			        printf("Let's begin choose from the following door: \n");
			        printf("Door 1 \n Door 2 \n Door 3 \n Door 4 \n Door 5 \n Select -1 to Exit \n");
			        printf("Whatever you do, do not choose Door 5 \n Okay now go ahead make your selection: ");
    				scanf("%d",&choice);
  
 			if (choice == 1)
  			{
     			int pick = -1 ;
          		int array [] = {5,3,1,4,2};
         		printf("\n");
          		printf("Oh no you have selected to enter door 1.. \n"); 
          		printf("In this room you will be told you fortune, I have created an array with 5 elements, you will pick a number 0-4, and depending on your choice you will be given a number in return, depending on the number you get back that will be your fortune..\n");
    			printf("\n");
    			printf("\n");
    			printf("\n");
    			printf("\n");
    			printf("Fortune List:\n");
    
       			printf("1. Never give up. You're not a failure if you don't give up.\n");
       			printf("2. Hard work pays off in the future, laziness pays off now.\n ");
       			printf("3. Now is the time to try something new.\n");
       			printf("4. You learn from your mistakes... You will learn a lot today.\n");
       			printf("5. A chance meeting opens new doors to success and friendship.\n"); 
    			printf("\n");
    			printf("\n");
    
        		while(pick < 0 || pick > 4)
        		{
        		printf("Pick a number 0-4: ");
        		scanf(" %d", &pick); 
        		}
         		printf("Your fortune is: %d\n", array[pick]);   
  			}
  			else if (choice == 2)
  			{
    			int diceSize = 6;
    			srand(time(NULL));
   			int dice = rand() % diceSize; 
    			int roll = 0;
    			printf("You have entered door 2 \n");
    			printf("In this room you will be given a dice to roll, you will get to choose a number between 1-6, do you think you will be able to guess the number you rolled? \n"); 
    			printf("May the odds be ever in your favor.. \n");
    			printf("Now whenever you are ready, enter the number you think you will roll:");
    			scanf(" %d", & roll);
    			while(roll >= 0 && roll <= 6)
      			{
   			 if (roll == dice)
    			{
      			printf("Congratulations you have guessed the number you rolled, you have won the game \n");
      			break;
    			}
    			else
    			{
      			printf("Sorry you have not guessed the number you rolled, you have lost the game \n");
      			printf("The number rolled was %d \n", dice);
      			break;
    			}	
  				}		
  					}

  			else if (choice == 3)
    
 			{
    			int age = 0;
    			printf("Sorry you have entered door 3,  here lives an angry alien, he will ask your age.\n");
    			printf("Alien: Alright, spill the beans! How many years have you been hogging all the oxygen on this planet?\n");
    			printf("Alien: Come on hurry up I don't have all day, enter your age here:");
    			scanf(" %d", & age);
    			printf("\n");
    			printf("\n");
    			printf("\n");
    			printf("\n");
    			printf("Alien: Hmmm, I see you are %d years old, just know that people are lying when they say age is just a number because you are old BYE!!\n",age);
    
 			 }

  			else if (choice == 4)
  			{
    			printf("Welcome to door four, in this room it will be endless wonders and boundless treasures!\n");
    			printf("CONGRATS!!\n");
    			printf("YOU HAVE\n");
   	 		printf("W ........");
    			printf("\n");
    			printf("\n");
    			printf("\n");
    			printf("\n");
    			printf("\n");
    			printf("\n");
    			printf("\n");
    			printf("\n");
    			printf("O .......");
    			printf("\n");
   			printf("\n");
    			printf("\n");
    			printf("\n");
    			printf("\n");
    			printf("\n");
    			printf("\n");
  			printf("\n");
    			printf("\n");
   			printf("\n");
    			printf("\n");
    			printf("\n");
    			printf("sorry its stuck");
   			printf("\n");
    			printf("\n");
    			printf("\n");
    			printf("\n");
    			printf("\n");
    			printf("\n");
    			printf("\n");
    			printf("\n");
    			printf("\n");
    			printf("\n");
    			printf("\n");
   			 printf("\n");
    			printf("\n");
    			printf("Lets try this again ");
    			printf("CONGRATS!! ... Oh, wait, scratch that. You've entered this room and behold... it is absolutely nothing BYE! \n");
 			 }  	

  			 else if (choice == 5) 
   			{
    			 printf("You have entered door 5 \n");
     			guessGame();
   			}

  			else if(choice == -1)
 			 {
    				printf("You have exited the game from room 3\n");
    				break;
 			 }		

			  else
  			{
   		 printf("You made an invalid selection. Try again. \n");
    
			  }
    
    }
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
				puts("room13");
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

	void guessGame()
	{
  		int size = 10;
 	 	srand(time(NULL));
  		int randomNum = rand() % size; 
  		int rand = 0;
  
  		printf("Oh no, you have entered the Guessing Game.\n");
  		printf("I am thinking of a number try to guess what number I have selected between 1 and 10:\n");
  		printf("When ever you are ready, enter a number: \n");
  		scanf(" %d", &rand);
  			while(rand <= 10 && rand >= 1)
  			{
    				if (rand == randomNum)
    				{
      					printf("Darn, we selected the same number! \n");
      					printf("You win this time we will meet again, and I will make sure I win next time. \n");
      				break;
    				}
    				else
    				{
      					printf("Haha I knew you would never guess my number, sadly we did not select the same number. \n");
      					printf("I selected %d \n", randomNum);
      					printf("You lost this game. Haha Loser!! \n");
      					break;
    				}	
  			}
	}		
















































