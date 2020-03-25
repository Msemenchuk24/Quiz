#pragma once
#include<iostream>
#include<string>


struct Quiz
{
	string name;
	Question* questions;
};

struct Question {

	string answers;
	

};

void choseQuiz();
void addQuiz();