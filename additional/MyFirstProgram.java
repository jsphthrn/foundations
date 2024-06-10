public class MyFirstProgram { // declaration of a class MyFirstProgram. In java, classes should start with the uppercase. Class name should match with file name.
    public static void main(String[] args) {    // The code to be executed when this class is called. This is called the main method.
        System.out.println("Hello World!"); // println method to print a line of text (string) to the screen or terminal. System is a built-in java class. out is a member.
        System.out.println("I'm learning Java language. Yay!");

        System.out.print("This is print method. Is more or less the same as println but this does not add line break at the end. ");
        System.out.print("See? lmao ");  // print method is not preferred. I'll stick with println.

        System.out.println("Let's change the line.");
        System.out.println("Look, I can print numbers and operations as well.");

        System.out.println(3);
        System.out.println(3 * 3);

        variables();
    }

    public static void variables() { // I will include generated code regarding variables in this method.

        /* Data types in Java

        - String -> Text, "double quoted."
        - int -> whole numbers without decimals.
        - float -> point numbers with decimals.
        - char -> single characters.
        - boolean -> true or false values.

        */

        String myName = "José";
        String mySurname = "Yáñez";
        int myAge = 25; // Declare variable with an initial value

        System.out.println(myName);
        System.out.println(mySurname);
        System.out.println(myAge);
        System.out.println("years old.");

        myAge = 26; // Changing the value.    

        System.out.println("Now I'm older.");
        System.out.print(myAge);

        System.out.println(" ");

        final float pinum = 3.1416f; // Similar as const in C++, this is for preventing an constant from changing its value. In this case, pi constant.

        // pinum = 3; Engineering! the output in terminal is error: cannot assign a value to final variable pinum

        String fullName = myName + " " + mySurname; // using + operator with strings would concatenate the strings. With numbers, it is the add operatoooorrrrrrrr.

        System.out.println(fullName); // My full name in one line, yay!

        // Declaring multiple variables and identifiers is the same as C++, skipping...


    

    }
}