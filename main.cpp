#include <iostream>
#include "functions.cpp"
using namespace std;
int main()
{
    int choice;
    do {
        cout << "Please enter your choice:\n";
        cout << "1. Show Lectures" << endl;
        cout << "2. Show Quizzes" << endl;
        cout << "3. Check your Performance" << endl;
        cout << "4. More Details" <<endl;
        cout << "5. Exit" <<endl;
        cin >> choice;

        switch (choice) {
            case 1:
                showLectures();
            break;
            case 2:
                Quizzes();
            break;
            case 3:
                performance();
                    break;
            case 4:
                details();
                break;
        }
    } while (choice < 5 && choice >0);
    return 0;
}
