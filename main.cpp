#include <iostream>
#include <string>
using namespace std;

class LongNumb{

    long maximum = 1e6;
    long number;

public:

    LongNumb add(LongNumb x, LongNumb y){
        LongNumb result;
        result.number = x.number + y.number;
        return result;
    }

    void print(){
        cout<< number;
    }

    LongNumb(){}

    LongNumb(long x) {
        try {
            if (x > maximum) {
                throw "one";
            } else {
                number = x;
            }
        }
        /*
        catch (const char* err) {

            if (strcmp(err,"one") == 0){
                cout << "Number is too big to be this type";
            }

        } */
    }


};

int main(){

    catch (const char* err) {

        if (strcmp(err,"one") == 0){
            cout << "Number is too big to be this type";
        }

    }
    
    return 0;
}
