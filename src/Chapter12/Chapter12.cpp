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




/*
//Task2
#include <cstring>
#include<string>
#include <iostream>
using namespace std;

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

	Str& operator=(const char* ch);
	Str& operator=(const Str& st);

	void StringUp();
	void StringLow();
	int has(char ch);
	bool operator==(Str& str);

	friend ostream& operator<<(ostream& os, const Str& st);
	friend istream& operator>>(istream& is, Str& st);
	friend Str operator+(Str& ch, Str& st);
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
	strcpy_s(str, len +1,s);
}

Str::~Str()
{
	delete[] str;
}

Str::Str(const Str& st)
{
	len = st.len;
	str = new char[len + 1];	
	strcpy_s(str,len+1, st.str);
}

Str& Str::operator=(const char* ch)
{
	delete[] str;
	len = strlen(ch);
	str = new char[len + 1];
	strcpy_s(str, len + 1, ch);
	return *this;
}

Str& Str::operator=(const Str& st)
{
	if (this == &st )
	{
		*this;
	}
	delete[] str;
	len = st.len;
	str = new char[len + 1];
	strcpy_s(str, len + 1, st.str);
	return *this;
}

void Str::StringUp()
{
	const int delta = 'A' - 'a';
	for (int i = 0; i < len; i++)
	{
		if (str[i] >= 'a'&&str[i] <= 'z')
		{
			str[i] = str[i] + delta;
		}
	}
}

void Str::StringLow()
{
	const int delta = 'a' - 'A';
	for (int i = 0; i < len; i++)
	{
		if (str[i] >= 'A'&& str[i] <= 'Z')
		{
			str[i] = str[i] + delta;
		}
	}
}

int Str::has(char ch)
{
	int count = 0;
	for (int i = 0; i < len; i++)
	{
		if (str[i] == ch)
			count++;
	}
	return count;
}

bool Str::operator==(Str& st)
{
	return strcmp(str, st.str) == 0;
}


ostream& operator<<(ostream& os, const Str& st)
{
	os << st.str << endl;
	return os;
}


istream& operator>>(istream& is, Str& st)
{
	char temp[Str::CINLIM];
	is.get(temp, Str::CINLIM);
	if (is)
	{
		st = temp;
	}
	while (is && is.get() != '\n')
	{
		continue;
	}
	return is;
}

Str operator+(Str& ch, Str& st)
{
	Str temp;
	temp.len = ch.len + st.len;
	temp.str = new char[temp.len + 1];
	strcpy_s(temp.str,temp.len+1, ch.str);
	strcat(temp.str, st.str);
	return temp;
}

Str operator+(char* ch, Str& st)
{
	Str temp;
	temp.len = strlen(ch) + st.len;
	temp.str = new char[temp.len + 1];
	strcpy_s(temp.str,temp.len+1, ch);
	strcat(temp.str, st.str);
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
	cout << s2 << endl;
	s2 = s2 + s1;
	s2.StringUp();
	cout << "The string\n" << s2 << "\ncontains " << s2.has('A') << "'A' characters in it" << endl;

	Str rgb[3] = { Str(s1), Str(" green"),Str("blue") };
	cout << "Enter the name of a primary color for mixing light: ";
	Str ans;
	bool success = false;
	while (cin >> ans)
	{
		ans.StringLow();
		for (int i = 0; i < 3; i++)
		{
			if (ans == rgb[i])
			{
				cout << "That's right!" << endl;
				success = true;
				break;
			}
		}
		if (success)
			break;
		else
		{
			cout << "Try again!" << endl;

		}
	}
	cout << "Bye" << endl;
	return 0;
 }

 */