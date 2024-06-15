#include <iostream>
#include <cstring>
using namespace std;

class Person {
public:
    Person(const char* s) {
        name = new char[strlen(s) + 1];
        strcpy(name, s);
    }
    ~Person() {
        delete[] name;
    }
protected:
    char* name;
};

class Student : public Person {
private:
    char* studentNumber;
    float score;

public:
    Student(const char* num, const char* nam, float sc) : Person(nam), score(sc) {
        studentNumber = new char[strlen(num) + 1];
        strcpy(studentNumber, num);
    }
    ~Student() {
        delete[] studentNumber;
    }
    void print() {
        cout << studentNumber << " " << name << " " << score << endl;
    }
};

#define Maxsize 20

int main() {
    char name[Maxsize], num[Maxsize];
    float score;
    cin >> num >> name >> score;
    Student a(num, name, score);
    a.print();

    return 0;
}
