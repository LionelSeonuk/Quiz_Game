# Quiz_game
<br>
A Quiz about Professional Gamer'FAKER'
<br>

# Result
![image](https://github.com/LionelSeonuk/Quiz_Game/assets/167200555/d93bf4f9-6f31-43b7-bdc0-c2e0330114bd)

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
The Faker class is a simple class that encapsulates a random number. 
<br>
The default constructor initializes the random number generator with the current time, and the parameterized constructor allows setting the random number directly. 
<br>
The getRandomNumber() and setRandomNumber() functions provide access to the random number value.
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
The Histogram class is a simple class that stores a collection of integer data points. 
<br>
The addData() function allows adding new data points to the collection, and the getHistogram() function returns a string representation of the collected data.
<br>
The default constructor and destructor are empty, as there are no special initialization or cleanup requirements for this class.
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
The Player class is a simple class that represents a player with a name and an ID.
<br>
The class provides constructors to initialize the player's name and ID, as well as getter and setter functions to access and modify these values.
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
The Quiz class is a simple class that represents a quiz with a question and an answer.
<br>
The class provides constructors to initialize the quiz's question and answer, as well as getter and setter functions to access and modify these values.
<br>
