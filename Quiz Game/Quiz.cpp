#include "Quiz.h"

Quiz::Quiz() : question(""), answer("") {}
Quiz::Quiz(string question, string answer) : question(question), answer(answer) {}
Quiz::~Quiz() {}

string Quiz::getQuestion() const { return question; }
void Quiz::setQuestion(const string &question) { this->question = question; }

string Quiz::getAnswer() const { return answer; }
void Quiz::setAnswer(const string &answer) { this->answer = answer; }
