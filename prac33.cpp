/*
This is a C++ Programme that works base on the principle of Euclidean.
It allows two value from the users. calculate the common dividers. It calculate the modulus 
and interate till the modulus is zero and give an output of the last modulus 
*/
#include <iostream>  //C++ library for input and output
using namespace std; //Used for C++ syntax cout and cin
int Euclidean(); //The algorith function declaration
int a, b, c; //Initializing the variables used
int main()//The main fuction for the whole code process
{
    cout << "Enter the value of first integer here"<<endl;
    cin >> a; //Accepting an input value for the first integer needed
    cout << "Enter the value of second interger here"<<endl;
    cin >> b; //Acception an input value for the second integer needed
    Euclidean(); //calling the fuction 
    return 0;
} 
int Euclidean()//declaring an configuring the fuction for the algorith
{   
    if(a == b)//Guiding the user from making two input of the same value
    {   
        system("clear");//clearing the system screen
        cout << "Please the two values must not be the same"<<endl;
        main();//returing it back to the main fuction
    }
    else
    {
    if(a == 0 || b == 0)//Guiding the user from putiing a value less than or equals to zero 
    {   
        system("clear");//clearing the system screen
        cout << "Please try again. The value you entered must be greater than 0"<<endl;
        main();//returing it back to the main fuction
    }
    else// an else code that perform operation if the value is greater than 0
    {
        c = a % b; //finding the modulus
        for(;;)//using a for loop to iterate the programme
        {
            a = b; //declaring the value of a to be b. 
            b = c; //assigning the value of b to c
            c = (a % b); //finding the modules of the programme in the for loop
            if(c == 0)//using an if statment to break the for loop once there is no more remainder
            break; // a  break statement
        }
    cout << "The Common divider is "<<b <<endl;//printing out the output
    
    }
    }
    return 0;
}