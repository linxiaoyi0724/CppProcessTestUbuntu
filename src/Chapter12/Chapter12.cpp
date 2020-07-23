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



#include <iostream>
#include <cstring>
using namespace std;
class Stock
{
	private:
		char* company;
		int len;
		int shares;
		double share_val;
		double totoal_val;
		void set_tot(){totoal_val = share_val * shares;}

	public:
		Stock();
		Stock(const char* co, int n = 0, double pr = 0.0);
		~Stock();
		void Buy(int num, double price);
		void Sell(int num, double price);
		void Update(double price);

		friend ostream& operator<<(ostream& os,const Stock& st);
		const Stock& TopVal(const Stock& s)const;
};


Stock::Stock()
{
	int len = 4;
	company = new char[8];
	std::strcpy(company,"no name");
	shares = 0;
	share_val = 0;
	totoal_val = 0;
}


Stock::Stock(const char* co, int n, double pr)
{
	len =  strlen(co);
	company = new char[len+1];
	std::strcpy(company, co);
	if(n < 0)
	{
		std::cerr<<"Number of shares can't be negative." << company << " shares set to 0" <<endl;
		shares = 0;
	}
	else
	{
		shares = n;
	}
	share_val = pr;
	set_tot();
	
}

Stock::~Stock()
{
	delete[] company;
}

void Stock::Buy(int num, double price)
{
	if(num < 0)
	{
		std::cerr<<"Number of shares purchased can't be negative." << "Transaction is aborted."<<endl; 
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}


void Stock::Sell(int num, double price)
{
	if(num < 0)
	{
		std::cerr<<"Number of shares sold can't be negative." << "Transaction is abort."<<endl;
	}
	else if(num > shares)
	{
		std::cerr<<"You can't sell more than you have!" << " Transaction is aborted."<<endl;
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
	
}

void Stock::Update(double price)
{
	share_val = price;
	set_tot();
}

ostream& operator << (ostream& os, const Stock& st)
{
	os<<"Company: "<<st.company << " Shares: " << st.shares << endl << " Share Price:$ "<<st.share_val << " Total Worth:$  " << st.totoal_val <<endl;
}

const Stock& Stock::TopVal(const Stock& s)const
{
	if(s.totoal_val > totoal_val)
	{
		return s;
	}
	else
	{
		return *this;
	}
	
}


int main()
{
	const int STKS = 4;
	Stock stocks[STKS] = {Stock("NanoSmart", 12, 20.0), 
						  Stock("Boffo Objects", 200, 2.0),
						  Stock("Monolithic Obelisks", 130, 3.25),
						  Stock("Fleep Enterprises", 60, 6.5)};

	cout.precision(2);
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.setf(ios_base::showpoint);
	cout << "Stock holdings: "<<endl;
	int st;
	for(st = 0; st < STKS; st++)
		cout << stocks[st];
	
	Stock top = stocks[0];
	for(st = 1; st < STKS; st++)
	{
		top = top.TopVal(stocks[st]);
	}
	cout << endl<<"Most valueable holding: "<<endl;
	cout << top;
	return 0;
}