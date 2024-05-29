#include <iostream>
#include <vector>
using namespace std;
class Pila {
private:
    vector<int> elements;

public:
    void push(int element) {
        elements.push_back(element);
    }

    void pop() {
        elements.pop_back();
    }

    int top() {
        return elements.back();
    }

    int size() {
        return elements.size();
    }
};
