#include "Quiz.h"
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

Quiz* quizes;
int countQuizes = 0;

void choseQuiz()
{
	Quiz* temp = new Quiz[countQuizes+1];
	for (int i = 0; i < countQuizes; i++) {

		temp[i] = quizes[i];
	}
	
	int countQuestions = 0;

	cout << "Enter quiz name: " << endl;
	cin >> temp[countQuizes].name;
	cout << "Quiz question" << endl;
	cin >> countQuestions;
	temp[countQuizes].questions = countQuestions;
	

	
}

void addQuiz()
{

}
