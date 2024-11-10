//
// Created by Zaki on 11/10/2024.
//

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
using namespace std;

struct Student{
    string name;
    int age;
    string studentID;
    string email;
    string phoneNumber;
    string address;
    string dateOfBirth;

};
Student s[100];

struct studentAttendance {
    int lectureID;
    bool isPresent;
    string attendanceDate;
    string studentID;
};

void showLectures();
void Quizzes();
void performance();
void details();



#endif //FUNCTIONS_H
