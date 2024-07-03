# Quiz_game
<br>
A quiz about professional gamers FAKER
<br>

# Implementation Description
1. We're going to prepare a quiz about LOL professional gamers FAKER.
2. Present a quiz to the user one by one and receive input from the user.
3. Verify that the user's answer is correct and increase the count if it is correct.
4. Outputs the number of correct answers after all quizzes have been completed.
5. Use the Faker class to generate a random even integer and histogram it add to the class.
6. Outputs the last random even integers and histograms generated.
<br>
In other words, by running the program, the user can participate in a quiz on the faker, and after the quiz, a random even integer and
You can check the histogram.
<br>

# Code Explain
```cpp
Faker::Faker() : randomNumber(0) { srand(time(0)); }
Faker::Faker(int randomNumber) : randomNumber(randomNumber) {}
Faker::~Faker() {}

int Faker::getRandomNumber() const { return randomNumber; }
void Faker::setRandomNumber(int randomNumber) { this->randomNumber = randomNumber; }

```
Faker.cpp
<br>
```cpp

Histogram::Histogram() {}
Histogram::~Histogram() {}

void Histogram::addData(int data) {
    this->data.push_back(data);
}

string Histogram::getHistogram() const {
    ostringstream oss;
    for (int i = 0; i < data.size(); ++i) {
        oss << data[i];
        if (i < data.size() - 1) {
            oss << ", ";
        }
    }
    return oss.str();
}
```
Histogram.cpp
<br>
```cpp

Player::Player() : name(""), id("") {}
Player::Player(string name, string id) : name(name), id(id) {}
Player::~Player() {}

string Player::getName() const { return name; }
void Player::setName(const string &name) { this->name = name; }

string Player::getId() const { return id; }
void Player::setId(const string &id) { this->id = id; }

```
Player.cpp
<br>
```cpp

Quiz::Quiz() : question(""), answer("") {}
Quiz::Quiz(string question, string answer) : question(question), answer(answer) {}
Quiz::~Quiz() {}

string Quiz::getQuestion() const { return question; }
void Quiz::setQuestion(const string &question) { this->question = question; }

string Quiz::getAnswer() const { return answer; }
void Quiz::setAnswer(const string &answer) { this->answer = answer; }
```
Quiz.cpp
<br>
