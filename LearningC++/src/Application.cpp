#include <iostream>

int Batting();
int Bowling(int Runs);

int main() {

	Batting();
	
	return 0;
}
int Batting() {

	std::cout << "Batting \n";

	long PlayerChoice{};
	long ComputerChoice{};
	long Runs{};

	do {
		
		std::cout << "Type Number Between 1 to 9\n";
		std::cin >> PlayerChoice;

		srand(time(NULL));
		ComputerChoice = (rand() % 9) + 1;
			
		std::cout << "Player Choice : " << PlayerChoice << std::endl;
		std::cout << "Computer Choice : " << ComputerChoice << std::endl;

		Runs += ComputerChoice + PlayerChoice;
		std::cout << "Runs : " << Runs << std::endl;
		
	} while (ComputerChoice != PlayerChoice);
		
	Bowling(Runs);
	return 0;
}
int Bowling(int Runs) {

	std::cout << "Bowling \n";

	long PlayerChoice{};
	long ComputerChoice{};
	long cRuns{};

	do {

		std::cout << "Type Number Between 1 to 9\n";
		std::cin >> PlayerChoice;

		srand(time(NULL));
		ComputerChoice = (rand() % 9) + 1;

		std::cout << "Player Choice : " << PlayerChoice << std::endl;
		std::cout << "Computer Choice : " << ComputerChoice << std::endl;

		cRuns += ComputerChoice + PlayerChoice;
		std::cout << "Computer Runs : " << cRuns << std::endl;

	} while (ComputerChoice <= PlayerChoice && ComputerChoice > PlayerChoice);

	std::cout << "Computer Runs : " << cRuns << std::endl;
	std::cout << "Player Runs : " << Runs << std::endl;

	if (cRuns > Runs) {

		std::cout << "You Lose The Game!";
	}
	else if (cRuns < Runs) {

		std::cout << "You Win The Game!";
	}
	else {

		std::cout << "It's a Draw!";
	}

	return 0;
}