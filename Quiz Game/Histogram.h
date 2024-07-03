#include <vector>
#include <string>
using namespace std;

class Histogram {
public:
    Histogram();
    ~Histogram();

    void addData(int data);
    string getHistogram() const;

private:
    vector<int> data;
};
