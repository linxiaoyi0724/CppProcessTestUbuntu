/*
// task 1
#include <iostream>
#include <cctype>
using namespace std;
int main()
{
	char* ch = new char[30];
	int count = -1;
	cout << "Please input: ";
	do {
		++count;
		cin >> ch[count];
	} while (ch[count] != '@');

	for (int i = 0; i < count; i++)
	{
		if (ch[i] >= 48 && ch[i] <= 57)
		{
			continue;
		}
		else if (isupper(ch[i]))
		{
			cout << char(tolower(ch[i]));
		}
		else if(islower(ch[i]))
		{
			cout << char(toupper(ch[i]));
		}
		else
		{
			cout << char(ch[i]);
		}
	}
	cout << endl;
	return 0;
}
*/










/*
//task 2
#include <iostream>
#include <cctype>
using namespace std;
const int nSize = 10;
int main()
{
	double donation[nSize];
	int count = 0;
	double total = 0;
	int largeCount = 0;
	cout << "Please input first donation: ";
	cin >> donation[count];
	while (cin.good() && count < 9)
	{
		count++;
		cout << "Please input " << count << " donation: ";
		cin >> donation[count];
	}

	if (count != 9 && count != 0)
	{
		count--;
	}

	for (int i = 0; i < count + 1; i++)
	{
		total += donation[i];
	}
	double average = total / (count + 1);

	for(int j = 0; j < count + 1; j++)
	{
		if (donation[j] > average)
		{
			largeCount++;
		}
	}
	cout << "The average donation is " << average << endl;
	cout << "There have " << largeCount << " larger donation." << endl;
	return 0;
}
*/




/* 
// task3
#include <iostream>
using namespace std;
int main()
{
	char ch;
	cout << "Please enter one of the following choices: "<<endl;
	cout << "c) carnivore         p) pianist" << endl;
	cout << "t) tree              g) game" << endl;

	cin >> ch;
	while (!(ch=='c' || ch =='p' || ch== 't' || ch=='g'))
	{
		cout << "Please enter a c, p, t, or g: ";
		cin >> ch;
	}

	switch (ch)
	{
	case 'c':
		cout << "A maple is a carnivore." << endl;
		break;
	case 'p':
		cout << "A maple is a pianist." << endl;
		break;
	case 't':
		cout << "A maple is a tree." << endl;
		break;
	default:
		cout << "A maple is a game." << endl;
		break;
	}
	return 0;
}
*/






/* 
// task 4
#include <iostream>
using namespace std;
const int strSize = 80;
const int nSize = 5;

struct bop
{
	char fullName[strSize];
	char title[strSize];
	char bopName[strSize];
	int preference;
};

void FfullName(bop* p);
void Ftitle(bop* p);
void FbopName(bop* p);
void Fpreference(bop* p);

int main()
{
	bop p[nSize] = {
        "Wimp macho"," "," ",0,
        "Raki Rhodes","Junior Programmer"," ",1,
        "Celia Laiter"," ", "MIPS",2,
        "Hoppy Hipman","Analyst Teainee"," ",1,
        "Pat Hand"," ", "LOOPY",2
	};
	cout << "Benevolent Order of Programmers Report"<<endl;
	cout << "a. display by name    b.display by title"<<endl;
	cout << "c. dispaly by bopname  d.display by preference"<<endl;
	cout << "q. quit"<<endl;
	cout << "Enter your choice:";
	char ch;
	cin >> ch;
	while (true)
	{
		switch (ch)
		{
		case 'a':
			FfullName(p);
			break;
		case 'b':
			Ftitle(p);
			break;
		case 'c':
			FbopName(p);
			break;
		case 'd':
			Fpreference(p);
			break;
		case 'q':
			cout << "Bye!"<<endl;
			break;
		}
		if (ch == 'q')
		{
			break;
		}
		cout << "Next choice:";
		cin >> ch;
	}
	return 0;
}

void FfullName(bop* p)
{
	for(int i = 0; i<nSize; i++)
	{
		cout << p[i].fullName<<endl;
	}
}

void Ftitle(bop* p)
{
	for(int i = 0; i < nSize; i++)
	{
		cout << p[i].title<<endl;
	}
}

void FbopName(bop* p)
{
	for(int i = 0; i < nSize; i++)
	{
		cout<<p[i].bopName<<endl;
	}
}

void Fpreference(bop* p)
{
	
	for(int i = 0; i < nSize; i++)
	{
		switch (p[i].preference)
		{
		case 0:
			cout << p[i].fullName <<endl;
			break;
		case 1:
			cout << p[i].title << endl;
			break;
		case 2:
			cout << p[i].bopName << endl;
		}
	}
}
*/




/* 
// task 5
#include <iostream>
using namespace std;

float tollage(float n);

int main()
{
	float earning;
	cout << "Please input your earning:";
	cin >> earning;
	while(cin.good() && earning >=0)
	{
		float tollageNumber = tollage(earning);
		cout << earning << "should pay " << tollageNumber << "tollage"<<endl;
		cout << "Please input next earning:";
		cin >> earning;
	}
	cout << "Process is over."<<endl;
	return 0;
}

float tollage(float n)
{
	float tollage;
	if(n<=5000)
	{
		tollage = 0 ;
	}
	else if(n>5000 && n<= 15000)
	{
		tollage = (n-5000) * 0.1;
	}
	else if(n > 15000 && n <= 35000)
	{
		tollage = 10000*0.1 + (n-15000)*0.15; 
	}
	else if(n > 35000)
	{
		tollage = 10000*0.1 + 20000*0.15 + (n-35000) * 0.2;
	}
	return tollage;
}
*/

