// C++ for using typedef with predefined data types 
#include <iostream> 
#include <cmath>


using namespace std; 

int main()  
{ 
	double a, b, c;
	cout << "Input a: ";
	cin >> a; 

	cout << "Input b: ";
	cin >> b;
	
	c = sqrt(pow(a,2) + pow(b,2));
	cout << "Right angle of triangle = " << c;

	// cin >> y;
	// cout << y;
// std::string name;
// int age;
// cout << "How old are you? ";
// cin >> age;

// std::cout<< "What's your name? ";
// getline (cin >> ws, name);


// std::cout << "Hello " << name << ", your are " << age << " years old" << endl;
// std::cout << "Hello ";

	// ulli can now be used for making more 
	// unsigned long long int type variables 
	// typedef unsigned long long int ulli; 
	// ulli used to make variables 
	// ulli a{ 1232133 }; 
	// cout << a; 

	return 0; 
}
