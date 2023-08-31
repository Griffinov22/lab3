// lab3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void welcome() {
	cout << "Welcome to my program, please select an operation to perform:" << endl;
}
void notValidChoice() {
	cout << "\nYou chose an invalid option. Please choose a number on the menu. Thank you.\n";
}
void thankyouMessage() {
	cout << "Thank you for using my math menu! Booting down ... ... ... ...\n";
}
void printAnswer(float answer, float firstNum, float secondNum, char operation) {
	cout << firstNum << " " << operation << " " << secondNum << " = " << answer << endl;
}
void printMenu(int& choice) {
	cout << "\nYour mathematic menu:\n";
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "\n5. Exit Program" << endl;
	cout << "\nYour Selection: ";
	cin >> choice;
}

void captureNum(float& val, string number) {
	cout << "\nPlease enter the " << number << " value: ";
	cin >> val;
}

void visualizeMathOperation(float firstNum, float secondNum, char operation) {
	float answer;
	switch (operation) {
		case '+':
			answer = firstNum + secondNum;
			printAnswer(answer, firstNum, secondNum, operation);
			break;
		case '-':
			answer = firstNum - secondNum;
			printAnswer(answer, firstNum, secondNum, operation);
			break;
		case '*':
			answer = firstNum * secondNum;
			printAnswer(answer, firstNum, secondNum, operation);
			break;
		case '/':
			answer = firstNum / secondNum;
			printAnswer(answer, firstNum, secondNum, operation);
			break;
		default:
			cout << "Invalid operation character bug. Please fix";
			break;
	}
}

int main() {
	int choice;
	char operation;
	float A;
	float B;
	bool isDone = false;

	welcome();
	while (!isDone) {
		printMenu(choice);
		switch (choice) {
			case 1:
				//addition
				operation = '+';
				captureNum(A, "first");
				captureNum(B, "second");
				
				break;
			case 2:
				//subtraction
				operation = '-';
				captureNum(A, "first");
				captureNum(B, "second"); 
				break;
			case 3:
				//multiplication
				operation = '*';
				captureNum(A, "first");
				captureNum(B, "second"); 
				break;
			case 4:
				//division
				operation = '/';
				captureNum(A, "first");
				captureNum(B, "second"); 
				break;
			case 5:
				isDone = true;
				thankyouMessage();
				break;
			default:
				notValidChoice();
				break;

		}
		if (isDone) return 0;
		else visualizeMathOperation(A, B, operation);


	}


	//returning zero means that the main function was run successfully
	return 0;
}


