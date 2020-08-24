// Task1
#include <iostream>
#include <valarray>
#include <string>
using namespace std;

template<typename T1, typename T2>
class Paris
{
private:
	T1 a;
	T2 b;
public:
	Paris(const T1& aval, const T2& bval) :a(aval),b(bval){}
	Paris(){}
	void Set(T1& yr, T2& bot);
	int Sum();
	void Show()const;
};

typedef std::valarray<int> ArrayInt;
typedef Paris<ArrayInt, ArrayInt> pariArray;

class Wine
{
private:
	string name;
	pariArray vintageAndCounts;
	int kindYear;

public:
	Wine(const char* l, int y, const int yr[], const int bot[]);
	Wine(const char* l, int y);
	void GetBottles();
	string& Label();
	void Show()const;
	int sum();
	
};
template<typename T1, typename T2>
void Paris<T1,T2>::Set(T1& yr, T2& bot)
{
	a = yr;
	b = bot;
}

template<typename T1, typename T2>
int Paris<T1, T2>::Sum()
{
	return b.sum();
}

template<typename T1, typename T2>
void Paris<T1, T2>::Show()const
{
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << ": " << b[i] << endl;
	}
}

Wine::Wine(const char* l, int y, const int yr[], const int bot[]) :name(l),kindYear(y)
{
	vintageAndCounts.Set(ArrayInt(yr, y), ArrayInt(bot, y));
}

Wine::Wine(const char* l, int y) : name(l), kindYear(y)
{

}

void Wine::GetBottles()
{
	ArrayInt yr(kindYear), bot(kindYear);
	cout << "Enter " << name << "data for " << kindYear << "year(s): " << endl;
	for (int i = 0; i < kindYear; i++)
	{
		cout << "Enter year: ";
		cin >> yr[i];
		cout << "Enter bottles for that year: ";
		cin >> bot[i];
	}
	vintageAndCounts.Set(yr, bot);
}

string& Wine::Label()
{
	return name;
}

void Wine::Show()const
{
	cout << "Wine: " << name << endl;
	cout << "\t\t year \t\t Bottles " << endl;
	vintageAndCounts.Show();
}

int Wine::sum()
{
	return vintageAndCounts.Sum();
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