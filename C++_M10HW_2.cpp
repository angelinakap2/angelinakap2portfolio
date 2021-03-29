//
//  main.cpp
//  M10_HW2
//
//  Created by Angelina Kapiniaris on 11/7/20.
//
/* This program takes in the set values and creates a default matrix (I), along with a Matrix A and Matrix B. Through operator functions, multiple operations are displayed involving the multiple matrices. */

/*
 Pseudocode:
 1. Create a class Matrix2by2 with private member variables representing each array element
 2. Declare the default and custom constructor under public
 3. Declare each operator function: +, *, and the friend operator <<
 4. Define a variable with the new object and original member variable performing the certain arithmetic for each operator function
 5. Initialize each constructor defining the member variables as 0 or 1 (default) or as itself (custom)
 6. In the main function, define each array element as the test case value based on the Matrix
 7. Set the arithmetic of the matrices to a variable, then output it
 */

#include <iostream>
using namespace std;

// class
class Matrix2by2
{
    // private member variables
private:
    double firstFirst;
    double firstSecond;
    double secondFirst;
    double secondSecond;
    
    // constructors
public:
    Matrix2by2();
    Matrix2by2(double firstFirst, double firstSecond, double secondFirst, double secondSecond);
    
// operator + function
Matrix2by2 operator + (Matrix2by2 &object)
    {
        Matrix2by2 result;
        
        //set addition of object and member variables to result
        result.firstFirst = firstFirst + object.firstFirst;
        result.firstSecond = firstSecond + object.firstSecond;
        result.secondFirst = secondFirst + object.secondFirst;
        result.secondSecond = secondSecond + object.secondSecond;
        
        return result; // return result
    }
    
Matrix2by2 operator * (Matrix2by2 &object)
    {
        Matrix2by2 result;
        
        //set multiplication of object and member variables to result
        result.firstFirst = (firstFirst * object.firstFirst) + (firstSecond * object.secondFirst);
        result.firstSecond = (firstFirst * object.firstSecond) + (firstSecond * object.secondSecond);
        result.secondFirst = (secondFirst * object.firstFirst) + (secondSecond * object.secondFirst);
        result.secondSecond = (secondFirst * object.firstSecond) + (secondSecond * object.secondSecond);
        
        return result;
    }
    
    friend ostream& operator <<(ostream &out, Matrix2by2 &value) // friend operator function
    {
        // output array elements in brackets
        out << "[" << value.firstFirst << ", " << value.firstSecond << "; " << value.secondFirst << ", " << value.secondSecond << "]";
        
        return out; // return out
    }
};

int main()
{
    Matrix2by2 I; // default Matrix
    
    cout << "Default matrix, I: \n";
    cout << I << endl;
    
    Matrix2by2 A(2.5, 3, 0, -1); // define Matrix A values
    
    cout << "Matrix A: " << endl;
    cout << A << endl;
    
    Matrix2by2 B(0, 3, 3, 0); // define Matrix B values
    
    cout << "Matrix B: " << endl;
    cout << B << endl;
    
    Matrix2by2 C = A + B; // add Matrix A and B
    
    cout << "A + B = " << C << endl;
    
    C = A * I; // multiply Matrix A and I
    cout << "A * I = " << C << endl;
    
    C = B * A; // multiply Matrix B and A
    cout << "B * A = " << C << endl;
    
    C = A * A; // Multiply Matrix A by itself
    
    Matrix2by2 D = B * B; // multiply Matrix B by itself
    
    C = C + D; // add Matrix C and D
    
    cout << "A * A + B * B = " << C << endl;
    
    return 0;
}

Matrix2by2::Matrix2by2() // initialize default constructor
        :firstFirst(1), firstSecond(0), secondFirst(0), secondSecond(1)
{
    
}

Matrix2by2::Matrix2by2(double firstFirst, double firstSecond, double secondFirst, double secondSecond)
        :firstFirst(firstFirst), firstSecond(firstSecond), secondFirst(secondFirst), secondSecond(secondSecond) // set values in constructor to itself
{
    
}
