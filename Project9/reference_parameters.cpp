#include <iostream>

using namespace std;

int main() {
	int x; //x is declared. An address in memory is allocated for an integer.
	x = 5; //x is initialized. The value in the address in memory is made to become 5.
	int *p = &x; //&x returns an address, therefore you are allowed to store &x into a pointer

	cout << p << endl; // ADDRESS OF X
	cout << *p << endl; // 5
	cout << &x << endl; // ADDRESS OF X
	cout << x << endl; // 5

	// &x = 10 is an invalid statment as &x cannot be changed


	//To properly illustrate what was previously mentioned of declaration, we will grab the address of a variable that is uninitialized.
	//The compiler should return no errors and will return the address of z when &z is used, and when p is used after p is assigned &z.
	int z; //This is only a declaration
	p = &z;
	
	cout << &z << endl; //ADDRESS OF Z
	cout << p << endl; //ADDRESS OF Z

	system("pause");
	
	return 0;
}