/*
A user-defined function has 3 core elements:
1. PROTOTYPE
2. CALL - Call the function. In other words, use the function in a function. E.g. "call" function x in function main
	Extra reading: Typically, function calls occur in functions other than the function that was called, but it is possible for a function to call itself in its own body (recursion).
3. DEFINITION - Define the function. In other words, write out what the function will do. The function definition contains the function head (similar to prototype) and the function body (code).

*/

#include <iostream>
#include <string>

using namespace std;

//USER-DEFINED FUNCTION PROTOTYPE - Appears BEFORE main AFTER preprocessor directives
int addTwo(int, int);
void printAll(string, string, string);
void printAStar();

/*
USER-DEFINED FUNCTION PROTOTYPE PARTS
<return data type> <function name>(<parameter1 data type>, <parameter2 data type>, <parameter3 data type>, <etc> ...);

Optionally, you are allowed to give identifiers after the parameter data type:
<return data type> <function name>(<parameter1 data type> <parameter1 identifier>, <parameter2 data type> <parameter2 identifier>, <parameter3 data type> <parameter3 identifier>, <etc> ...);

...but the compiler will completely ignore the identifier. Therefore, you can treat them like comments.
Example:
int addTwo(int LEFTVALUE, int RIGHTVALUE);
*/

int main() {

	int x = 1, y = 2;

	/*
	To call a function:
	<function name>(<argument1>, <argument2>, <argument3>, <etc> ...);

	What is an ARGUMENT?
	An ARGUMENT is a value that will be passed down to a function PARAMETER.
	An ARGUMENT can be a variable, or it can be hard-coded in.
	*/

	//Passing arguments through variable
	cout << addTwo(x, y) << endl;

	//Passing arguments through hard-coding
	printAll("I", "love", "programming!");

	//You will encounter many functions that do not take any parameters. This is perfectly normal, especially when you start learning about user-defined data structures.
	//Functions are distinguished by the fact that they are followed up with '(' and ')'. Therefore, even if the function takes NO parameters, you must use '(' and ')' to indicate to the compiler that you are using a function and not a variable.
	printAStar();


	/*
	WAIT! Why did you cout addTwo but not printAll or printAStar?
	*/
}

int addTwo(int num1, int num2) {
	return num1 + num2;
}

void printAll(string s1, string s2, string s3) {
	cout << s1 << ' ' << s2 << ' ' << s3 << endl;
}

void printAStar() {
	cout << '*' << endl;
}