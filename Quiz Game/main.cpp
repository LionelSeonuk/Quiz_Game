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
        Quiz("Faker�� ������ �����ΰ���?", "�̻���"),
        Quiz("Faker�� ���� ���� �̸��� �����ΰ���?", "T1"),
        Quiz("Faker�� ���� ������ ĳ���ʹ� �����ΰ���?", "�����")
    };

    int correctCount = 0;

    for (size_t i = 0; i < quizzes.size(); ++i) {
        cout << "���� " << i + 1 << ": " << quizzes[i].getQuestion() << endl;

        string answer;
        cout << "�亯�� �Է��ϼ���: ";
        cin >> answer;

        if (answer == quizzes[i].getAnswer()) {
            cout << "�����Դϴ�!" << endl;
            correctCount++;
        } else {
            cout << "Ʋ�Ƚ��ϴ�. ������ " << quizzes[i].getAnswer() << "�Դϴ�." << endl;
        }
    }

    cout << "���� ����: " << correctCount << " / " << quizzes.size() << endl;

    hist.addData(faker.getRandomNumber());
    cout << "Faker�� ���� ¦�� ����: " << faker.getRandomNumber() << endl;

    cout << "������׷�: " << hist.getHistogram() << endl;

    return 0;
}

