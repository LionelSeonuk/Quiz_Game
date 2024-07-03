#include <string>
using namespace std;

class Player {
public:
    Player();
    Player(string name, string id);
    ~Player();

    string getName() const;
    void setName(const string &name);

    string getId() const;
    void setId(const string &id);

private:
    string name;
    string id;
};
