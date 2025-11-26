#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "=== C++ CONTROL FLOW DEMONSTRATION ===" << endl
         << endl;

    // Sample data for demonstration
    int number = 15;
    string day = "Wednesday";
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // 1. DEMONSTRATING if-else if-else
    cout << "1. IF-ELSE IF-ELSE DEMONSTRATION:" << endl;
    cout << "Number: " << number << endl;

    // Important Points for if-else if-else:
    // - Conditions are evaluated from top to bottom
    // - Only one block executes (first true condition)
    // - else is optional and handles all other cases
    // - Can nest if statements within each other

    if (number > 0 && number <= 10)
    {
        cout << "Number is between 1 and 10" << endl;
    }
    else if (number > 10 && number <= 20)
    {
        cout << "Number is between 11 and 20" << endl;
    }
    else if (number > 20 && number <= 30)
    {
        cout << "Number is between 21 and 30" << endl;
    }
    else
    {
        cout << "Number is either negative or greater than 30" << endl;
    }

    // Nested if example
    if (number > 0)
    {
        cout << "Number is positive" << endl;
        if (number % 2 == 0)
        {
            cout << "Number is even" << endl;
        }
        else
        {
            cout << "Number is odd" << endl;
        }
    }

    // 2. DEMONSTRATING switch statement
    cout << "\n2. SWITCH STATEMENT DEMONSTRATION:" << endl;

    // Important Points for switch:
    // - Works with integral types (int, char, enum) and strings (C++11+)
    // - break prevents fall-through to next cases
    // - default case handles all other values
    // - More efficient than multiple if-else for equality checks

    char grade = 'B';
    cout << "Grade: " << grade << " - ";

    switch (grade)
    {
    case 'A':
        cout << "Excellent!" << endl;
        break;
    case 'B':
        cout << "Good job!" << endl;
        break;
    case 'C':
        cout << "Satisfactory" << endl;
        break;
    case 'D':
        cout << "Needs improvement" << endl;
        break;
    case 'F':
        cout << "Failed" << endl;
        break;
    default:
        cout << "Invalid grade" << endl;
        break;
    }

    // Switch with integer
    int choice = 2;
    cout << "Choice: " << choice << " - ";
    switch (choice)
    {
    case 1:
        cout << "Option 1 selected" << endl;
        break;
    case 2:
        cout << "Option 2 selected" << endl;
        break;
    case 3:
        cout << "Option 3 selected" << endl;
        break;
    default:
        cout << "Invalid choice" << endl;
        break;
    }

    // 3. DEMONSTRATING for loop
    cout << "\n3. FOR LOOP DEMONSTRATION:" << endl;

    // Important Points for for loop:
    // - Used when number of iterations is known
    // - Structure: initialization; condition; increment
    // - Loop variable scope is within the loop
    // - Range-based for loops available in C++11+

    cout << "Traditional for loop:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    cout << "Reverse for loop:" << endl;
    for (int i = size - 1; i >= 0; i--)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Multiple variables in for loop
    cout << "Multiple variables in for loop:" << endl;
    for (int i = 0, j = size - 1; i < j; i++, j--)
    {
        cout << "i=" << numbers[i] << ", j=" << numbers[j] << " | ";
    }
    cout << endl;

    // 4. DEMONSTRATING while loop
    cout << "\n4. WHILE LOOP DEMONSTRATION:" << endl;

    // Important Points for while loop:
    // - Condition checked before each iteration
    // - May execute zero times if condition is false initially
    // - Useful when iterations depend on changing conditions

    cout << "While loop - printing until number 5:" << endl;
    int index = 0;
    while (index < size)
    {
        cout << numbers[index] << " ";
        if (numbers[index] == 5)
        {
            cout << "(found 5!)" << endl;
            break;
        }
        index++;
    }

    // Counter-controlled while loop
    cout << "Counter-controlled while loop:" << endl;
    int counter = 0;
    while (counter < 5)
    {
        cout << counter << " ";
        counter++;
    }
    cout << endl;

    // 5. DEMONSTRATING do-while loop
    cout << "\n5. DO-WHILE LOOP DEMONSTRATION:" << endl;

    // Important Points for do-while:
    // - Executes at least once (condition checked after iteration)
    // - Useful for menus and input validation
    // - Semicolon required after while condition

    cout << "Do-while loop (executes at least once):" << endl;
    int doCounter = 0;
    do
    {
        cout << doCounter << " ";
        doCounter++;
    } while (doCounter < 3);
    cout << endl;

    // Demonstrating it executes at least once
    cout << "Do-while with false condition:" << endl;
    int falseCondition = 10;
    do
    {
        cout << "This will print once even though condition is false" << endl;
    } while (falseCondition < 5);

    // 6. DEMONSTRATING nested loops
    cout << "\n6. NESTED LOOPS DEMONSTRATION:" << endl;

    // Important Points for nested loops:
    // - Inner loop completes all iterations for each outer loop iteration
    // - Useful for multi-dimensional data processing
    // - Break/continue affect only the innermost loop

    cout << "Nested for loops (multiplication table):" << endl;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cout << i << "x" << j << "=" << i * j << "\t";
        }
        cout << endl;
    }

    cout << "Nested while and for loops:" << endl;
    int outer = 0;
    while (outer < 3)
    {
        cout << "Outer: " << outer << " -> ";
        for (int inner = 0; inner < 2; inner++)
        {
            cout << "Inner:" << inner << " ";
        }
        cout << endl;
        outer++;
    }

    // 7. DEMONSTRATING break and continue
    cout << "\n7. BREAK AND CONTINUE DEMONSTRATION:" << endl;

    // Important Points for break and continue:
    // - break: exits the current loop immediately
    // - continue: skips current iteration and continues with next
    // - In nested loops, affects only the innermost loop

    cout << "Break example (stops at first even number):" << endl;
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            cout << "First even number found: " << numbers[i] << " at index " << i << endl;
            break; // Exit loop immediately
        }
        cout << numbers[i] << " ";
    }

    cout << "\nContinue example (skip even numbers):" << endl;
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            continue; // Skip even numbers
        }
        cout << numbers[i] << " "; // Only odd numbers printed
    }
    cout << endl;

    // Break in nested loops
    cout << "Break in nested loops (only breaks inner loop):" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Outer loop i=" << i << ": ";
        for (int j = 0; j < 5; j++)
        {
            if (j == 2)
            {
                break; // Only breaks inner loop
            }
            cout << j << " ";
        }
        cout << endl;
    }

    // Continue in nested loops
    cout << "Continue in nested loops:" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "i=" << i << ": ";
        for (int j = 0; j < 3; j++)
        {
            if (j == 1)
            {
                continue; // Skip when j == 1
            }
            cout << j << " ";
        }
        cout << endl;
    }

    // Comprehensive example combining multiple control flows
    cout << "\n8. COMPREHENSIVE EXAMPLE:" << endl;
    cout << "Finding prime numbers using nested loops with break:" << endl;

    for (int num = 2; num <= 20; num++)
    {
        bool isPrime = true;

        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                isPrime = false;
                break; // No need to check further
            }
        }

        if (isPrime)
        {
            cout << num << " is prime" << endl;
        }
    }

    cout << "\n=== PROGRAM COMPLETED ===" << endl;
    return 0;
}