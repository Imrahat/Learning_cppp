#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!";             // prints text
    cout << "\n";                        // prints newline
    cout << "Sum of 2 + 3 = " << 2 + 3<<endl;  // print text + value

    int age;
    cout << "Enter your age: ";
    cin >> age;                           // takes input from user
    cout << "Your age is: " << age<<endl;

    cin.ignore(); // this clears the leftover newline 

    string name;
    cout << "Enter your full name: ";
    getline(cin, name); // takes full line input
    cout << "Hello, " << name << "!";

    return 0;
}

// -----NOTES-----

// cout -> stands for “character output”, used to display output on the screen.

// cin -> stands for “character input”, used to take input from the keyboard.

// << -> Insertion operator (used with cout)

// >> -> Extraction operator (used with cin

// cin stops taking input at space/newline/tab

// getline(cin, str) -> Used for taking full line input (including spaces)

// cin.ignore(); // this clears the leftover newline (The cin >> age reads only the number, but leaves a newline ('\n') in the input buffer when you press Enter. So, when getline() runs next, it immediately reads that leftover newline — thinking it’s the end of the line — resulting in an empty string. )