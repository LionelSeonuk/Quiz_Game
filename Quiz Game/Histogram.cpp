#include "Histogram.h"
#include <sstream>

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
