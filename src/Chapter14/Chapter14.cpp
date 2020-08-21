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
};