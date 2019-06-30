/*  // task 1
#include <iostream>
using namespace std;
int main()
{
int num[2];
for (int i = 0; i < 2; i++)
{
cin >> num[i];
}

int numMax = 0;
int numMin = 0;
int numTotal = 0;
if (num[0] > num[1])
{
numMax = num[0];
numMin = num[1];
}
else
{
numMax = num[1];
numMin = num[0];
}

for (int j = numMin; j <= numMax; j++)
{
numTotal += j;
}

cout << numMin << "~" << numMax << " total interger is " << numTotal << endl;
return 0;
}
*/






/*  //task 2
#include <iostream>
using namespace std;
int main()
{
int n = 0;
int total = 0;
do {
cout << "please input one interger: ";
cin >> n;
total += n;
cout << "total: " << total << endl;

} while (n != 0);
return 0;
}
*/







/*  //task 3
#include <iostream>
using namespace std;
int main()
{
double DaphneTotal = 100;
double CleoTotal = 100;
int year = 1;
while (CleoTotal <= DaphneTotal)
{
DaphneTotal += 100 * 0.1;
CleoTotal += CleoTotal * 0.05;
year++;
}
cout << year << "years, CleoTotal larger DaphneTatal." << endl;
cout << "Daphne's investment value is: " << DaphneTotal << endl;
cout << "Cleo's investment value is: " << CleoTotal << endl;
return 0;
}
*/





/* // task 4
#include <iostream>
using namespace std;
const int Month = 12;
int main()
{
char* MonthNum[Month] = { "January", "February", "March", "April", "May", "June", "July","August", "September","October","November", "December" };
int Number[12];
int NumTotal = 0;
for (int i = 0; i < 12; ++i)
{
cout << "please input " << MonthNum[i] << "sale : " << endl;
cin >> Number[i];
NumTotal += Number[i];
}
cout << "one year's sale is: " << NumTotal << endl;
return 0;
}
*/








/*   //Task 5
#include <iostream>
using namespace std;
int main()
{
	char* MonthNum[12] = { "January", "February", "March", "April", "May", "June", "July","August", "September","October","November", "December" };
	int MonthSale[3][12];
	int TotalSale = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			cout << "Please input " << i << " year" << MonthNum[j] << "slae: ";
			cin >> MonthSale[i][j];
		}
	}

	for (int m = 0; m < 3; m++)
	{
		for (int n = 0; n < 12; n++)
		{
			cout << MonthSale[m][n] << "	";
			TotalSale += MonthSale[m][n];
		}
		cout << endl;
	}
	cout << "Three years sale value is " << TotalSale << endl;
	return 0;
}
*/








/*   task 6
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
struct Car
{
	string manufacture;
	int years;
};

int main()
{
	int number;
	cout << "How many cars do you wish to catalog? ";
	cin >> number;
	cin.ignore();
	Car* cars = new Car[number];

	for (int i = 0; i < number; i++)
	{
		cout << "Car #: " << i << endl;
		cout << "Please enter the made: ";
		getline(cin,cars[i].manufacture);
		cout << "Plearse enter the year made: ";
		cin >> cars[i].years;
		getchar();
	}

	cout << "Here is your collection: " << endl;
	for (int j = 0; j < number; ++j)
	{
		cout << cars[j].years << " " << cars[j].manufacture << endl;
	}
	return 0;
}
*/





/*   //task 7
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char words[30];
	int count = 0;
	cout << "Enter words (to stop, type the word done): " << endl;
	cin >> words;
	while (strcmp(words,"done"))
	{
		cin >> words;
		++count;
	}
	cout << "You entered a total of " << count << " words"<<endl;
	return 0;
}
*/





/*  //task 8
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string words;
	int count = 0;
	cout << "Enter words (to stop, type the word done): " << endl;
	cin >> words;
	while (words != "done")
	{
		cin >> words;
		++count;
	}
	cout << "You entered a total of " << count << " words." << endl;
	return 0;
}
*/







/*  task 9
#include <iostream>
using namespace std;
int main()
{
	int num = 0;
	cout << "please input one number: " << endl;
	cin >> num;
	for (int i = 1; i <= num; i++)
	{
		for (int j = num; j > i; j--)
		{
			cout << ".";
		}
		for (int m = 1; m <= i; m++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
*/