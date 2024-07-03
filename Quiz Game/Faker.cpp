#include "Faker.h"
#include <cstdlib>
#include <ctime>

Faker::Faker() : randomNumber(0) { srand(time(0)); }
Faker::Faker(int randomNumber) : randomNumber(randomNumber) {}
Faker::~Faker() {}

int Faker::getRandomNumber() const { return randomNumber; }
void Faker::setRandomNumber(int randomNumber) { this->randomNumber = randomNumber; }
