#include <string>
using namespace std;

class Faker {
public:
    Faker();
    Faker(int randomNumber);
    ~Faker();

    int getRandomNumber() const;
    void setRandomNumber(int randomNumber);

private:
    int randomNumber;
};
