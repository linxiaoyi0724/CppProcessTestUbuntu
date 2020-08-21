// Task1
#include <iostream>
#include <valarray>
#include <string>
using namespace std;
typedef std::valarray<int> ArrayInt;
typedef Paris<ArrayInt, ArrayInt> pariArray;

template<typename T1, typename T2>
class Paris
{
private:
	T1 a;
	T2 b;
public:
	Paris(const T1& aval, const T2& bval) :a(aval),b(bval){}
	Paris(){}
};

class Wine
{
private:
	string name;
	pariArray vintageAndCounts;
	int storageYear;

public:
	Wine(const char* l, int y, const int yr[], const int bot[]);
	Wine(const char* l, int y);
	void GetBottles();
	string& Label();
	int Sum();
};


Wine::Wine(const char* l, int y, const int yr[], const int bot[])
{

}

int main()
{
	cout << "Enter name of wine: ";
	char lab[50];
	cin.getline(lab, 50);
	cout << "Enter number of year: ";
	int yrs;
	cin >> yrs;

	Wine holding(lab, yrs);
	holding.GetBottles();
	holding.Show();

	const int YRS = 3;
	int y[YRS] = { 1993, 1995, 1998 };
	int b[YRS] = { 48, 60, 72 };

	Wine more("Gushing Grape Red", YRS, y, b);
	more.Show();
	cout << "Total bottles for " << more.Label() << ": " << more.sum() << endl;
	cout << "Bye" << endl;
	return 0;
}