#include <iostream>
#include <string>
#include <cmath> //includes CPP math libraries
#include <cstdlib> //random dice guessing game
#include <ctime> //contains function prototypes related to date and time manipulations in C++
using namespace std;
//creating a class for OOP
class Integer {
public:
//Create variables
    int User, n, i; // to store user input in menu page and for average number loop
    double x, y; //to save user input (of numbers)
    bool loop = true; //program loop
    //function to give user a choice
    void Choice() {
        string myLetter;
        cout << "\nDo you wish to continue? Y/N" << endl;
        cin >> myLetter;
        if (myLetter == "N") {
            cout << "\nHave a great day!" << endl; //end message
            loop = false; //stop loop, end program
//konami code
        } else if (myLetter == "^^⌄⌄<><>ba") {
            cout << "^^^^^Welcome to a Number Guessing Game!^^^^^\n I'm Joy! 〷◠‿◠〷\n An A.I!\n" << endl; //introduction to secret minigame
            int game, randomNumber, tries = 0; //declaring variables
            //to create random number generator
            srand(time(0)); //seed random number generator
            randomNumber = rand() % 10 + 1; //random number between 1 and 10
            cout << "Guess the number I chose from 1-10" << endl; //prompt user input
            bool loop_2 = true; //loop for minigame
            //while loop for mingame
            while (loop_2) {
                cout << "Enter a guess between 1 and 10: ";
                cin >> game; //store user input
                tries++; //number increases for each guess
                //if...else statement to user input answer
                if (game == randomNumber) {
                    cout << "You got it!" << endl; //if random number is the same with user input
                    cout << "You guessed correctly in " << tries << " tries!\n" << endl; //output how many tries it took for user to guess correctly
                    cout << "See You next time!\n" << endl; //ending message
                    loop_2 = false; //end loop 2
                } else {
                    cout << "Try again!" << endl; //prompt user to retry; continue minigame loop
                }
            }
        }
    }
    string Cout[3] = {"Type a number: ", "Type two separate numbers with spaces inbetween: ", "Enter the number of data:  "}; //To prompt user input
    double num[100], sum = 0.0, average, min, max; //for calculations for average number in data
};
int main() {
    Integer myChicken; //create an object for class
    cout << " *******\n|CPP Calculator Initiated|\n *******\n" << endl; //simple title and graphics
    //while loop to keep the program active
    while (myChicken.loop) {
        cout << "1. Square Root Calculator\n2. Cube Root Calculator\n3. Sum of two numbers\n4. Subtraction of two numbers\n5. Multiplication of two numbers\n6. Division of two numbers\n7. Calculation of Sine with Radians\n8. Calculation of Cosine with Radians\n9. Calculation of Tangent with Radians\n10. Average number from Data\n11. Minimum Number from Data\n12. Maximum Number from Data\n" << endl; //menu page
        cout << "Please select from the Menu Options 1-12" << endl; //prompt user to choose from menu page
        cin >> myChicken.User; //save user input into class object
        //switch expression for different purposes (nested loops)
        switch (myChicken.User) {
        case 1:
            cout << myChicken.Cout[0]; //to call the first element in the array that prompts user input from class object
            cin >> myChicken.x; //to save user input into integer from class object
            cout << "√x = " << sqrt(myChicken.x); //Output square rooted answer from user input
            myChicken.Choice(); //Prompt user to continue or stop
            break; //to avoid leakage
        case 2:
            cout << myChicken.Cout[0]; //to call the first element in the array that prompts user input from class object
            cin >> myChicken.x; //to save user input into integer from class object
            cout << "³√x = " << cbrt(myChicken.x); //Output square rooted answer from user input
            myChicken.Choice(); //Prompt user to continue or stop
            break; //to avoid leakage
        case 3:
            cout << myChicken.Cout[1]; //to call the second element in the array that prompts user input from class object
            cin >> myChicken.x >> myChicken.y; //get user input (two numbers)
            cout << myChicken.x << "+" << myChicken.y << "=" << myChicken.x + myChicken.y << endl; //outputs sequence of equation with answer
            myChicken.Choice(); //Prompt user to continue or stop
            break; //to avoid leakage
        case 4:
            cout << myChicken.Cout[1]; //to call the second element in the array that prompts user input from class object
            cin >> myChicken.x >> myChicken.y; //get user input (two numbers)
            cout << myChicken.x << "-" << myChicken.y << "=" << myChicken.x - myChicken.y << endl; //outputs sequence of equation with answer
            myChicken.Choice(); //Prompt user to continue or stop
            break; //to avoid leakage
        case 5:
            cout << myChicken.Cout[1]; //to call the second element in the array that prompts user input from class object
            cin >> myChicken.x >> myChicken.y; //get user input (two numbers)
            cout << myChicken.x << "×" << myChicken.y << "=" << myChicken.x * myChicken.y << endl; //outputs sequence of equation with answer
            myChicken.Choice(); //Prompt user to continue or stop
            break; //to avoid leakage
        case 6:
            cout << myChicken.Cout[1]; //to call the second element in the array that prompts user input from class object
            cin >> myChicken.x >> myChicken.y; //get user input (two numbers)
            cout << myChicken.x << "÷" << myChicken.y << "=" << myChicken.x / myChicken.y << endl; //outputs sequence of equation with answer
            myChicken.Choice(); //Prompt user to continue or stop
            break; //to avoid leakage
        case 7:
            cout << myChicken.Cout[0]; //to call the first element in the array that prompts user input from class object
            cin >> myChicken.x; //to save user input into integer from class object
            cout << "sin(x) = " << sin(myChicken.x) << endl; //outputs the radian of Sine with answer
            myChicken.Choice(); //Prompt user to continue or stop
            break; //to avoid leakage
        case 8:
            cout << myChicken.Cout[0]; //to call the first element in the array that prompts user input from class object
            cin >> myChicken.x; //to save user input into integer from class object
            cout << "cos(x) = " << cos(myChicken.x) << endl; //outputs the radian of Cosine with answer
            myChicken.Choice(); //Prompt user to continue or stop
            break; //to avoid leakage
        case 9:
            cout << myChicken.Cout[0]; //to call the first element in the array that prompts user input from class object
            cin >> myChicken.x; //to save user input into integer from class object
            cout << "tan(x) = " << tan(myChicken.x) << endl; //outputs the radian of Tangent with answer
            myChicken.Choice(); //Prompt user to continue or stop
            break; //to avoid leakage
        case 10:
            cout << myChicken.Cout[2]; //to call the third element in the array that prompts user input from class object
            cin >> myChicken.n; //for saving the amount of numbers are there in the data
            //while loop to ensure amount of numbers are there in user's data is between 1-100
            while (myChicken.n > 100 || myChicken.n <= 0) {
                cout << "Error. Number of Data can only be in-between 1-100. Please Retype: "; //to prompt user to retype amount of numbers are there in the data
                cin >> myChicken.n; //for saving the amount of numbers are there in the data
            }
            //classic for...of loop for writing each data number
            for (myChicken.i = 0; myChicken.i < myChicken.n; myChicken.i++) {
                cout << myChicken.i + 1 << ". Enter number: "; //to prompt users to input set data numbers
                cin >> myChicken.num[myChicken.i]; //to store in array
                myChicken.sum += myChicken.num[myChicken.i]; //to accumulate the sum of all the entered numbers as the loop iterates;
            }
            myChicken.average = myChicken.sum / myChicken.n; //the equation to find the average number in the array
            cout << "Average Number is: " << myChicken.average << endl;
            cout << myChicken.sum << "/" << myChicken.n << "=" << myChicken.average << endl; //output average number answer from user input
            myChicken.Choice(); //Prompt user to continue or stop
            break; //to avoid leakage
        case 11:
            cout << myChicken.Cout[1]; //to call the third element in the array that prompts user input from class object
            cin >> myChicken.x >> myChicken.y;//get user input (two numbers)
            cout << "Minimum Number is: " << min(myChicken.x, myChicken.y);
            myChicken.Choice(); //Prompt user to continue or stop
            break; //to avoid leakage
        case 12:
            cout << myChicken.Cout[1]; //to call the third element in the array that prompts user input from class object
            cin >> myChicken.x >> myChicken.y;//get user input (two numbers)
            cout << "Maximum Number is: " << max(myChicken.x, myChicken.y);
            myChicken.Choice(); //Prompt user to continue or stop
            break; //to avoid leakage
        default: //for any input not intended
            cout << "Error.\n"; //error message
            break; //to avoid leakage
        }
    }
    return 0;
}
