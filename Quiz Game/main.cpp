#include <iostream>
#include <vector>
#include "Player.h"
#include "Faker.h"
#include "Quiz.h"
#include "Histogram.h"

int main() {
    Player player("Faker", "SKT T1");
    Faker faker((rand() % 50) * 2);
    Histogram hist;

    vector<Quiz> quizzes = {
        Quiz("Faker의 본명은 무엇인가요?", "이상혁"),
        Quiz("Faker가 속한 팀의 이름은 무엇인가요?", "T1"),
        Quiz("Faker가 가장 유명한 캐릭터는 누구인가요?", "르블랑")
    };

    int correctCount = 0;

    for (size_t i = 0; i < quizzes.size(); ++i) {
        cout << "퀴즈 " << i + 1 << ": " << quizzes[i].getQuestion() << endl;

        string answer;
        cout << "답변을 입력하세요: ";
        cin >> answer;

        if (answer == quizzes[i].getAnswer()) {
            cout << "정답입니다!" << endl;
            correctCount++;
        } else {
            cout << "틀렸습니다. 정답은 " << quizzes[i].getAnswer() << "입니다." << endl;
        }
    }

    cout << "정답 개수: " << correctCount << " / " << quizzes.size() << endl;

    hist.addData(faker.getRandomNumber());
    cout << "Faker의 랜덤 짝수 정수: " << faker.getRandomNumber() << endl;

    cout << "히스토그램: " << hist.getHistogram() << endl;

    return 0;
}

