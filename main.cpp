#include <iostream>

using namespace std;

class Erry {
    const char *message;
public:

    explicit Erry(const char *er) {
        message = er;
        print();
    }

    void print() {
        if (strcmp(message, "one") == 0) {
            cout << "Number is too big to be this type";
        } else if (strcmp(message, "two") == 0) {
            cout << "Summ is too large to live";
        } else if (strcmp(message, "three") == 0) {
            cout << "Argument cannot be negative";
        }
    }

};

class LongNumb {

    long maximum = 1e6;
    long number{};

public:

    LongNumb operator+(const LongNumb &chis) const {
        long result = number + chis.number;
        if (result > 1e6) {
            throw Erry("two");
        } else {
            return (number + chis.number);
        }
    }

    void print() const {
        cout << number;
    }

    LongNumb() {}

    LongNumb(long x) {
        if (x > maximum) {
            throw Erry("one");
        } else if (x < 0) {
            throw Erry("three");
        } else {
            number = x;
        }

    }


};

int main() {

    LongNumb n1 = LongNumb(-1e6);
    n1.print();
    LongNumb n2 = LongNumb(7);
    n2.print();
    n1 + n2;
    n1.print();

    return 0;
}
