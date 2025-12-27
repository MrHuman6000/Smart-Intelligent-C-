#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void inccorectanswer() {
    cout << "Incorrect answer, please try again." << endl;
}
struct user {
    string name;
    string country;
    int age; 
};
void userinfo(user usr) {
    cout << "User information:" << endl;
    cout << "Name: " << usr.name << endl;
    cout << "Country: " << usr.country << endl;
    cout << "Age: " << usr.age << endl;
}

int main() {

    srand(time(0));

    string answer1;
    string answer;
    float maths;

    cout << "Please, enter your name: ";
    user usr;
    getline(cin,usr.name);
    cout << "Enter your age: ";
    cin >> usr.age;
    cin.ignore();
    cout << "Enter your country: ";
    getline(cin,usr.country);

    cout << "Processing your information..." << endl;

    if (usr.age > 0 && usr.age < 120) {
        cout << "Hello, " << usr.name << " from " << usr.country << ", age " << usr.age << "!" << endl;
    } else {
        cout << "Invalid age entered." << endl;
        return 0;
    }

    cout << "Do you want to continue? (yes/no)" << endl;
    cout << "> ";
    getline(cin, answer);
    if (answer == "yes" && answer == "YES") {
        cout << "Great! Let's continue." << endl;
    } else if (answer == "no") {
        cout << "Goodbye!" << endl;
    }
    cout << "Math or Info ? (math/userinfo)"  << endl;
    cin >> answer1;
    cout << "> ";
    if (answer1 == "userinfo") {
        userinfo(usr);
    } else if (answer1 == "math") {
        cout << "Please, enter the number " << endl;
        cout << "> ";
        getline(cin, answer);
        if (answer == "yes"){
        cout << "Please, enter a number: ";
        cin >> maths;
        cout << "Doubt: " << maths * 2 << endl;
        cout << "Square:" << maths * maths << endl;
        cout << "Half: " << maths / 2 << endl;
        cout << "Thank you for using our program. Goodbye!" << endl;
        } else if (answer == "no") {
        cout << "Thank you for using our program. Goodbye!" << endl;
    }
    }
    cout << "Do you wanna play a game? (yes/no)" << endl;
    cout << "> ";
    getline(cin, answer);
    if (answer == "yes") {
        cout << "Your task is to guess a number between 1 and 10." << endl;
        int numberToGuess  = rand() % 10 + 1;
        int userGuess = 0;
    } else if (answer == "no") {
        cout << "Alright, maybe next time. Goodbye!" << endl;
        return 0;
    } else {
        inccorectanswer();
    }
    return 0;
}