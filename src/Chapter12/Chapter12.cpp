/*
// Task1
#include <iostream>
#include <string>

using namespace std;

class Cow
{
	char name[20];
	char *hobby;
	double weight;

public:
	Cow();
	Cow(const char* nm, const char* ho, double wt);
	Cow(const Cow& c);
	~Cow();
	Cow &operator=(const Cow& c);
	void ShowCow()const;
};



Cow::Cow()
{
	strcpy(name, "none");
	hobby = new char[1];
	hobby[0] = NULL;
	weight = 0;
}

Cow::Cow(const char* nm, const char* ho, double wt)
{
	strcpy(name, nm);
	hobby = new char[strlen(ho) + 1];
	strcpy(hobby, ho);
	weight = wt;
}

Cow::Cow(const Cow& c)
{
	hobby = new char[strlen(c.hobby) + 1];
	strcpy(name, c.name);
	strcpy(hobby, c.hobby);
	weight = c.weight;
}

Cow::~Cow()
{
	delete[] hobby;
}

Cow& Cow::operator=(const Cow& c)
{
	if (this == &c)
	{
		return *this;
	}

	delete[] hobby;
	hobby = new char[strlen(c.hobby) + 1];
	strcpy(hobby, c.hobby);
	strcpy(name, c.name);
	weight = c.weight;
	return *this;
}

void Cow::ShowCow()const
{
	cout << "name: " << name << endl;
	cout << "hobby: " << hobby << endl;
	cout << "weight: " << weight << endl;
}


int main()
{
	Cow a;
	Cow b = Cow("b", "b", 50);
	Cow c = Cow(b);
	a = c;

	a.ShowCow();
	b.ShowCow();
	c.ShowCow();

	return 0;
}
*/



#include <cstring>
#include <iostream>
using namespace std;
//Task2
class Str
{
private:
	char* str;
	int len;
	static const int CINLIM = 80;
public:
	Str(const char* s);
	Str();
	Str(const Str& st);
	~Str();

	friend ostream& operator<<(ostream& os, const Str& st);
	friend istream& operator>>(istream& is, Str& st);
	friend Str operator+(char* ch, Str& st);
};

Str::Str()
{
	str = new char[1];
	str = NULL;
	len = 0;
}

Str::Str(const char* s)
{
	len = strlen(s);
	str = new char[len + 1];
	strcpy(str, s);
}

Str::~Str()
{
	delete[] str;
}

Str::Str(const Str& st)
{
	len = st.len;
	str = new char[len + 1];	
	strcpy(str, st.str);
}


ostream& operator<<(ostream& os, const Str& st)
{
	os << "Len: " << st.len << endl;
	os << "Str: " << st.str << endl;
	return os;
}


istream& operator>>(istream& is, Str& st)
{
	char temp[Str::CINLIM];
	is.get(temp, Str::CINLIM);
	if (is)
	{
		st.str = temp;
	}
	while (is && is.get() != '\n')
	{
		continue;
	}
	return is;
}

Str operator+(char* ch, Str& st)
{
	Str temp;
	temp.len = strlen(ch) + st.len;
	temp.str = new char[temp.len + 1];
	strcpy(temp.str, ch);
	strcpy(temp.str, st.str);
	return temp;
}

int main()
{
	Str s1("and I am a C++ student.");
	Str s2 = "Please enter your name: ";
	Str s3;
	
	cout << s2;
	cin >> s3;
	s2 = "My names is " + s3;
}