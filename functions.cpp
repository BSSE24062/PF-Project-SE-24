//
// Created by Zaki on 11/9/2024.
//
#include <iostream>
using namespace std;

void showLectures() {

}

void Quizzes() {

}

void performance () {

}

void details() {
    int opt;
    do {
        cout << "1. Show enrolled courses" << endl;
        cout << "2. Enroll in a new course" << endl;
        cout << "3. Semester information" << endl;
        cout << "4. Exit" << endl;
        cin >> opt;
    } while(opt > 0 && opt < 4);

}