#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
char chooseWinner(char player, char computer);


int main (){

	char player;
	char computer;

	player = getUserChoice();
	std::cout << "you pick " << player;
	showChoice(player);

	computer = getComputerChoice();
	std::cout << "computer pick " << computer;
	showChoice(computer);
	chooseWinner( player,  computer);

	return 0;

}




char getUserChoice(){

	char choice;


	do{
		std::cout<< "Enter your choice: \n";
		std::cout<< "r = Rock \n";
		std::cout<< "p = Paper \n";
		std::cout<< "s = Scissor \n";
		std::cin>> choice;

	}while(choice != 'r' && choice != 'p' && choice != 's');	
	

	return choice;


}

char getComputerChoice()
{

	srand(time(NULL));
	int computer = (rand() % 3) + 1;


	switch(computer)
	{
		case 1: return 'r';
		case 2: return 'p';
		case 3: return 's';	
	}

	

}



void showChoice(char choice)
{


	switch(choice)
	{

		case 'r': std::cout << "Rock \n";
					break;
		case 'p': std::cout << "Paper \n";	
					break;
		case 's': std::cout << "Scissor \n";
					break;

	};


}


char chooseWinner(char player, char computer)
{

switch (player)
{
	case 'r': if(computer == 'r'){
		std::cout << "its a tie \n";
				}
				else if(computer == 'p'){
					std::cout << "computer wins \n";
				}
				else if(computer == 's'){
					std::cout << "player wins \n";
				}
				break;
	case 'p': if(computer == 'r'){	
					std::cout << "player wins \n";
				}
				else if(computer == 'p'){
					std::cout << "its a tie \n";
				}
				else if(computer == 's'){
					std::cout << "computer wins \n";
				}
				break;
	case 's': if(computer == 'r'){
					std::cout << "computer wins \n";
				}
				else if(computer == 'p'){		
					std::cout << "player wins \n";
				}
				else if(computer == 's'){	
					std::cout << "its a tie \n";
				}		
				break;
}


}