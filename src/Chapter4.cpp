/*
// task 1
#include <iostream>
using namespace std;
int main()
{
	cout << "What is your first name? ";
	char FirstName[50];
	cin.getline(FirstName, 50);
	cout << endl;
	cout << "What is your last name? ";
	char LastName[10];
	cin.get(LastName,10);
	cout << "What letter grade do you deserve? ";
	char ch;
	cin >> ch;
	ch = ch + 1;
	cout << endl;
	cout << "What is your age? ";
	int age;
	cin >> age;
	cout << "Name: " << LastName << ", " << FirstName << endl;
	cout << "Grade: " << ch << endl;
	cout << "Age: " << age << endl;
	return 0;
}
*/


/* task 2
#include <iostream>
#include <string>
using namespace std;
int main()
{
string name;
string dessert;
cout << "Enter your name: \n";
getline(cin, name);
cout << "Enter your favorite dessert: \n";
getline(cin, dessert);
cout << "I have some delicious " << dessert << " for you " << name << ".\n";
return 0;
}
*/


/*
//task 3
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
char FirstName[30];
char LastName[30];

cout << "Enter your first name: ";
cin.getline(FirstName, 30);
cout << "Enter your last name: ";
cin.getline(LastName, 30);
strcat(LastName, ", ");
strcat(LastName, FirstName);
cout << "Here's the imformation in a single string: " << LastName << endl;
return 0;
}
*/


/*
// task 4
#include <iostream>
#include <string>
using namespace std;
int main()
{
string FirstName;
string LastName;
cout << "Enter your first name: ";
getline(cin, FirstName);
cout << "Enter your last name: ";
getline(cin, LastName);
cout << "Here's the imformation in a single string: " << LastName + ", " + FirstName << endl;
return 0;
}
*/





/*
//task 5
#include <iostream>
#include <string>
using namespace std;
struct  CandyBar
{
string Kind;
float Weight;
int CalorieContent;
};
int main()
{
CandyBar snack = { "Mocha Munch" , 2.3, 350 };
cout << "Candy Kind: " << snack.Kind << endl;
cout << "Candy Weight: " << snack.Weight << endl;
cout << "Candy CalorieContent: " << snack.CalorieContent << endl;
return 0;
}
*/







/*
//task 6
#include <iostream>
#include <string>
using namespace std;
struct  CandyBar
{
string Kind;
float Weight;
int CalorieCotent;
};
int main()
{
CandyBar snack[3];
snack[0].Kind = "Mocha Munch";
snack[0].Weight = 2.3;
snack[0].CalorieCotent = 50;

snack[1].Kind = "Mocha Munch";
snack[1].Weight = 2.3;
snack[1].CalorieCotent = 50;

snack[2].Kind = "Mocha Munch";
snack[2].Weight = 2.3;
snack[2].CalorieCotent = 50;

cout << "snack[0]'s kind: " << snack[0].Kind << " Weight: " << snack[0].Weight << " Calorie Content: " << snack[0].CalorieCotent << endl;
cout << "snack[1]'s kind: " << snack[1].Kind << " Weight: " << snack[1].Weight << " Calorie Content: " << snack[1].CalorieCotent << endl;
cout << "snack[2]'s kind: " << snack[2].Kind << " Weight: " << snack[2].Weight << " Calorie Content: " << snack[2].CalorieCotent << endl;
return 0;
}
*/






/*
//task 7
#include <iostream>
#include <string>
using namespace std;
struct Pizza
{
string name;
float diameter;
float weight;
};
int main()
{
Pizza p1;
cout << "Please input pizza company name ";
getline(cin, p1.name);
cout << "Please input pizza' diameter ";
cin >> p1.diameter;
cout << "Please input pizza' weight ";
cin >> p1.weight;
cout << "Pizza' company name: " << p1.name << endl;
cout << "Pizza' diameter: " << p1.diameter << endl;
cout << "Pizza' weight: " << p1.weight << endl;
return 0;
}
*/







/*
//task 8
#include <iostream>
#include <string>
using namespace std;
struct Pizza
{
string name;
float diameter;
float weight;
};
int main()
{
Pizza* p1 = new Pizza;
cout << "Please input pizza' diameter: " << endl;
cin >> p1->diameter;
cout << "Please input pizza' company: " << endl;
cin >> p1->name;
cout << "Please input pizza's weight: ";
cin >> p1->weight;
cout << "Pizza' company : " << p1->name << endl;
cout << "Pizza' diameter : " << p1->diameter << endl;
cout << "Pizza' weight: " << p1->weight << endl;
return 0 ;
}
*/










/*
//Task 9
#include <iostream>
#include <string>
using namespace std;
struct Candy
{
string kind;
float diameter;
float weight;
};
int main()
{
Candy* ps = new Candy[3];
for (int i = 0; i < 3; i++)
{
ps[i].kind = "Mocha Munch";
ps[i].diameter = 2.3;
ps[i].weight = 350;
}

for (int j = 0; j < 3; j++)
{
cout << "Candy' name: " << ps[j].kind << endl;
cout << "Candy' diameter: " << ps[j].diameter << endl;
cout << "Candy' weight: " << ps[j].weight << endl;
}
return 0;
}
*/