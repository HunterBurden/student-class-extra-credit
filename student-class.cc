/*
 *        File: student-class.cc
 *      Author: Hunter Burden
 *        Date: April 08, 2019
 * Description: Student class extra credit
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;
class Student {
public:
    //getters or accessors
    int getId();
    string getName();
    double getScore();

    //setters or mutators
    void setId(int newId);
    void setName(string newName);
    void setScore(double newScore);

    //output function
    void output();

private:
    int id;  //id must be >= 0
    string name; //must start with uppercase letter
    double score; //>= 0, -1 default
}; //semicolon is important


// function prototypes
// void printStudent(const Student &st);
// void inputStudent(Student &st);

int main(int argc, char const *argv[]) {
    Student s;

    //testing set and get member functions
    s.setId(123);
    s.setId(-123);
    s.setName("John Smith");
    s.setName("john smith");
    s.setScore(94);
    s.setScore(-30);
    cout << "Id: " << s.getId() << endl;
    cout << "Name: " << s.getName() << endl;
    cout << "Score: " << s.getScore() << endl;    
    
    //testing output member function
    s.setId(18);
    s.setName("Hunter Burden");
    s.setScore(100); //hopefully
    s.output();
    return 0;
}  // main

int Student::getId() {
    return id;
}

string Student::getName() {
    return name;
}

double Student::getScore() {
    return score;
}

void Student::setId(int newId) {
    if(newId >= 0)
    {
        id = newId;
    }
}

void Student::setName(string newName) {
    char first = newName.at(0);
    if(first >= 'A' && first <= 'Z') {
        name = newName;
    }

}

void Student::setScore(double newScore) {
    if(newScore >= 0) {
        score = newScore;
    }
}

void Student::output() {
    cout << "Id: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Score: " << score << endl;
}