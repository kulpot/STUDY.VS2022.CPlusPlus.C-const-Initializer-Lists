#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

// ---------------------------------------- C++ const Initializer Lists ----------------------------------------
//ref link:https://www.youtube.com/watch?v=sruGkv3dQZQ&list=PLRwVmtr-pp05LyV3bYHwrFacNSNjbUqS6&index=7

struct Cat
{
	int numLives;
	Cat(int lives)
	{
		numLives = lives;
	}
};

int main()
{

}































// --------------------------------- C++ Static Class Data Members ----------------------------------
//ref link:https://www.youtube.com/watch?v=k2LeEbcVazE&list=PLRwVmtr-pp05LyV3bYHwrFacNSNjbUqS6&index=6

//static->one variable shared among all instance of a class.
//private->only the class can access that variable.
//You can have static variables that are public or private.The two terms are different concepts.


//#include "MyClass.h"		// .h files

//class MyClass		// declaration -> give me ram
//{
////private:
//public:
//	static int myStaticInt;	// static declaration
//public:
//	void someFunction()
//	{
//		myStaticInt++;
//	}
//};

//int MyClass::myStaticInt = 5;	//static definition	// scopes in MyClass

//int anotherInt = 50;
//void foo(){}
//void goo(){}

//int myStaticInt = 5;
////int SomeOtherClass::anotherStaticInt = 10;		// restrict visibility
//
//void main()
//{
//	MyClass::myStaticInt = 10;
//}

































// ------------------------------ C++ Compiler-Generated Default Constructors -----------------------------------------
//ref link:https://www.youtube.com/watch?v=NxPPSegdilc&list=PLRwVmtr-pp05LyV3bYHwrFacNSNjbUqS6&index=5

// parameter list constructor - takes no argument, a default constructor, constructor that takes no constructor

//class Cow {
//public:
//	int mooCount;
//	//Cow(){}			// initialize none parameter constructor:output:-858993460
//	Cow(int value) {}		// initialize parameterConstructor with argument:
//};
//
//void main()
//{
//	//Cow cow;
//	Cow cow(5);
//	cout << cow.mooCount << endl; //error: cebug check, not error: in release
//}

































// ------------------------------- C++ Structs vs Classes -------------------------------
//ref link:https://www.youtube.com/watch?v=3LHmBMdKkyI&list=PLRwVmtr-pp05LyV3bYHwrFacNSNjbUqS6&index=4

// C++ default accessability 

//struct Mytype		// defaults to public
//class Mytype
////class Person	// defaults to private
//{
//public:		// required for class Mytype which is private
//	void foo() {}
//	//Person()		// Constructor 
//	//{
//	//	cout << "Person()" << endl;
//	//}
//	//~Person()				// Destructor
//	//{
//	//	cout << "~Person()" << endl;
//	//}
//};
//
//void main()
//{
//	Mytype instance;
//	instance.foo();		// error in class Mytype which is a private
//	//cout << "Before the scoped block" << endl;
//	//Person person;
//	//cout << "After the scoped block" << endl;
//}



























// ------------------------------------ C++ Why The Semicolon After a Class Declaration ----------------------------------
//ref linK:https://www.youtube.com/watch?v=E-309a2ngsY&list=PLRwVmtr-pp05LyV3bYHwrFacNSNjbUqS6&index=3

// for C++	just use a semicolon at the end of a class because its required
// At the end of a declaration of a data type you put a semicolon.
// A class is a data type.

//struct MyType
//{
//	void foo() {}
//};		// semicolon here -> means its required
//
//int myInt;				// int 4 bytes
//float anotherDataElement;
//
//class MyClass		// Declaring a class called MyClass
//{
//};
////} instance;		// for C++	just use a semicolon at the end of a class
//
//MyClass anotherClass;		// anotehrClass is an instance of MyClass
//
////int main()
////{
////	return 0;
////}
//
//void main()
//{
//	myInt = 5;
//	//MyType instance;
//	//instance.foo();
//}































// --------------------------------------- C++ Constructors and Destructors ------------------------------------
//ref link:https://www.youtube.com/watch?v=eeooGDIyQpM&list=PLRwVmtr-pp05LyV3bYHwrFacNSNjbUqS6&index=4

// Destructor - is for cleaning up classes

//class Person
//{
//public:
//	Person()		// Constructor 
//	{
//		cout << "Person()" << endl;
//	}
//	~Person()				// Destructor
//	{
//		cout << "~Person()" << endl;
//	}
//};
//
//void main()
//{
//	cout << "Before the scoped block" << endl;
//	//{
//	//	Person person;	// person stack scope
//	//}				// C++ cleanup for Destructor ~Person()
//	Person person;
//	cout << "After the scoped block" << endl;
//	//Person person;
//}// C++ cleanup for Destructor ~Person()	-- Person person not inside a {}































// -------------------------------- C++ Classes --------------------------------
// ref link:https://www.youtube.com/watch?v=a9R9mP3oJBY&list=PLRwVmtr-pp05LyV3bYHwrFacNSNjbUqS6

// C++ Classes - 

//class Person
//{
//public:
//	string firstName;
//	string lastName;
////private:
//};
//
//void main()
//{	
//	//Person person = new Person();		// C# or Java
//	Person person;		// "person" object is in stack instead on the heap
//	person.firstName = "Kulpot";
//	person.lastName = "King";
//	cout << person.firstName << " " << person.lastName;
//}