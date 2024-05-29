#include <iostream>
#include <list>
using namespace std;

class Cola {
private:
    list<int> elements;

public:
    void enqueue(int element) {
        elements.push_back(element);
    }

    void dequeue() {
        elements.pop_front();
    }

    int front() {
        return elements.front();
    }
};
