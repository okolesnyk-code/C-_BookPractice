#include "chapter6_exercise1.h"
#include <iostream>
using namespace std;

class Int {
private:
    int value;

public:
    // встановити значення 0
    void setZero() {
        value = 0;
    }

    // ініціалізувати цілим значенням
    void setValue(int v) {
        value = v;
    }

    // вивести значення
    void show() const {
        cout << value << endl;
    }

    // додати два об'єкти Int і повернути результат
    Int add(const Int& other) const {
        Int temp;
        temp.value = value + other.value;
        return temp;
    }
};

void chapter6_exercise1() {
    Int a, b, c;

    a.setValue(10);
    b.setValue(25);

    c = a.add(b);

    cout << "Result: ";
    c.show();

}
