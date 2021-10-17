#include <iostream>
#include <string>
using namespace std;


//###### Concepts learnt today ######
//Pointers - point to the memory address of the structure. This allows us to point the computer to a memory address (say 07xCD0) instead of calling all the values within the structure
//Pointers - This makes pointers more efficient for the program to run when functions or structures contain large amounts of data
//Constructors - If a structure is created, the best practice is to initialise a contructor that allows the memory to know how much space to allocate. Be kind to memory. Make constructors.
//Revised structures


//## Part 1 - Learning
//function prototype
//void line(int howLong);
//
//struct Person {
//	string name;
//	int age;
//
//	//constructor - this lets the memory know how much space to allocate, and can also be called as a function
//	Person(string n = "", int a = 1)
//	{
//		name = n;
//		age = a;
//	}
//};
//
////sizeof is a built in function that calculates the space in array/struct/vect
//
//int main() {
//	Person initialValue("",1);
//	cout << "\nThe initial array values are\Name: " << initialValue.name << "\nAge: " << initialValue.age;
//	Person me, myFriend, hoomans[2];
//	me.name = "Chris";
//	me.age = 1000;
//	cout << sizeof(hoomans) << "  is the size of the Person Array\n";
//	cout << sizeof(Person) << "  is the size of the Person Array\n";
//	int arraySize = sizeof(hoomans)/sizeof(Person);
//
//	//This code is for hardcoding. Let's not hardcode because we are smarter now
//	//cout << "\nEnter your friend\'s name\n";
//	//cin >> myFriend.name;
//	//cout << "\nEnter your friend\'s age\n";
//	//cin >> myFriend.age;
//
//	for (int i = 0; i < arraySize; i++)
//	{
//		cout << "\nEnter person " << i+1 << "'s name: \n";
//		getline(cin, hoomans[i].name);  //imbar function that allows you to input a whole string, instead of just one word. Need to #include string
//		/*cin >> hoomans[i].name;*/
//		cout << "\nEnter person " << i+1 << "'s age: \n";
//		cin >> hoomans[i].age;
//		cin.ignore(); //clears the buffer - Otherwise it won't run for the subsequent rounds
//		line(20);
//	}
//
//	line(30);
//	for (int i = 0; i < arraySize; i++)
//	{
//		cout << endl << i + 1 << ") Name: " << hoomans[i].name << endl;
//		cout << endl << ") Age: " << hoomans[i].age << endl;
//		
//
//	}
//
//}

//void line(int howLong)
//{
//	for (int i = 0; i < howLong; i++)
//	{
//		cout << "*";
//	}
//}

//## Part 2 - Executing based on lessons learnt
#include <iostream>
#include <string>
using namespace std;

//function prototype
//struct SPCA inputValue(struct SPCA ani);
struct SPCA* inputValue(struct SPCA* p);
struct SPCA* outputValue(struct SPCA* aniP);

struct SPCA {
	string AnimalType, Name, Breed;
	int Age, Height;

	//Constructor
	SPCA(string aT = "Dog", string n = "Bob", string b = "hunting", int a = 0, int h = 10)
	{
		AnimalType = aT;
		Name = n;
		Breed = b;
		Age = a;
		Height = h;
	}
};

int main() 
{
	//defining variable within SPCA
	SPCA animal;
	SPCA* spcaPtr;	//The * indicates that I'm going to allow SPCA variables to hve pointers
	spcaPtr = &animal; //spcaPtr refers to obj animal within SPCA dataype

	cout << "\nThe value of SPCA name is " << animal.AnimalType;
	cout << "\nThe memory address of animal is " << &animal.AnimalType;

	inputValue(spcaPtr);
	outputValue(spcaPtr);

}

struct SPCA* inputValue(struct SPCA* p)
{
	cout << "\nInput animal type: ";
	getline(cin, p->AnimalType);
	cout << "\nInput animal name: ";
	getline(cin, p->Name);
	cout << "\nInput animal breed: ";
	getline(cin, p->Breed);
	cout << "\nInput animal age: ";
	cin >> p->Age;
	cout << "\nInput animal height: ";
	cin >> p->Height;
	return(p);

}

//Method without pointer -- Using struct as the datatype in order to pass the cout values. Otherwise the default values are taken.
//struct SPCA inputValue(struct SPCA ani)
//{
//	cout << "\nInput animal type: ";
//	getline(cin, ani.AnimalType);
//	cout << "\nInput animal name: ";
//	getline(cin, ani.Name);
//	cout << "\nInput animal breed: ";
//	getline(cin, ani.Breed);
//	cout << "\nInput animal age: ";
//	cin >> ani.Age;
//	cout << "\nInput animal height: ";
//	cin >> ani.Height;
//	return(ani);
//
//}

struct SPCA* outputValue(struct SPCA* aniP)
{
	cout << "\n\nAnimal\nType: " << aniP->AnimalType;
	cout << "\nName: " << aniP->Name;
	cout << "\nAge: " << aniP->Age;
	return(aniP);

}