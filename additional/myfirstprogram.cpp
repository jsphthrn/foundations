#include <iostream> // header library, to use cout object (line 5)
using namespace std; // to use standard names for object and variables from library

/* To omitt the using namespace std; line 2
std::cout << "Hello world"

*/

int variables () {

    /* Variable types:
    - Int -> Integers (whole numbers) without decimals. Either positive or negative values.
    - double -> floating point numbers, with decimals. Either positive or negative values.
    - char -> single charactgers, surrounded by single quotes.
    - string -> to store text. String values to be surrounded by double quotes.
    - bool -> boolean states: true or false.
    */
    cout << "This is variable section." << endl;
    int myNum;
    myNum = 15; // This can be also condensed as int myNum = 15;
    cout << myNum << endl;
    myNum = 10;
    cout << myNum << endl;

    int myAge = 25;

    cout << "I'm " << myAge << " years old." << endl; // Display variables in console along with strings.

    double newRadius; // demonstration of double type

    cin >> newRadius; // data input demonstration

    cout << "The perimeter of a circle of " << newRadius << " units is " << 2 * 3.1416 * newRadius << " units." << endl;    // algebraic operations.
    cout << "The area of a circle of " << newRadius << " units is " << 3.1416 * newRadius * newRadius << " sq. units." << endl; // more algebra!

    double newPerimeter = 2 * 3.1416 * newRadius, newSurface = 3.1416 * newRadius * newRadius; // multiple declaration of variales

    cout << "The perimeter of a circle of " << newRadius << " units is " << newPerimeter << " units." << endl;    // repeating line 32 but a variable and not operation
    cout << "The area of a circle of " << newRadius << " units is " << newSurface << " sq. units." << endl; // repeating line 33 but a variable and not operation

    int a, b, c;
    a = b = c = 2; // same value to multiple variables
    cout << a + b + c << endl; 

    const float PI = 3.1416; // declaring PI as constant, PI value won't change. Read-only variable. It should have always a value assigned at the moment of declaration.

    simpleCalculator(); 


    return 0;
}

int simpleCalculator () {   // additional demonstration of user input data

    int x, y, sum;
    cout << "Type a number: ";
    cin >> x;
    cout << "Type another number: ";
    cin >> y;
    sum = x + y;
    cout << "Sum is: " << sum << endl;

    return 0;

}

int main () {   // declaration of a function
    cout << "Hello World"; // cout is an object to print text (as output in terminal). << is insertion operator.
    cout << endl;   // Blank line, also can use "\n\n" but endl seems cooler.
    cout << "I'm learning C++ langauge, yay!" << endl << endl;

    variables();    // Invoke variables section

    return 0; // By now this is just for ending main function but can be used for other real cool stuff.
} 
