#include <string>
using namespace std;

class Quiz {
public:
    Quiz();
    Quiz(string question, string answer);
    ~Quiz();

    string getQuestion() const;
    void setQuestion(const string &question);

    string getAnswer() const;
    void setAnswer(const string &answer);

private:
    string question;
    string answer;
};
