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


/*
//Task 3
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
*/



/*
// Task 4
#include <string.h>
#include <iostream>
using namespace std;
typedef unsigned long Item;
class Stack
{
private:
	enum
	{
		MAX = 10
	};

	Item *pitems;
	int size;
	int top;

public:
	Stack(int n = 10);
	Stack(const Stack& st);
	~Stack();
	bool IsEmpty()const;
	bool IsFull()const;
	bool Push(const Item& item);
	bool Pop(Item& item);
	Stack& operator=(const Stack& st);

};

Stack::Stack(int n)
{
	pitems = new Item[n + 1];
	size = 0;
	top = 0;
}

Stack::Stack(const Stack& st)
{
	size = st.size;
	pitems = new Item[size + 1];
	pitems = st.pitems;
	top = st.top;
}

Stack::~Stack()
{
	delete[] pitems;
}

bool Stack::IsEmpty()const
{
	if (top == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Stack::IsFull()const
{
	if (size == MAX)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Stack::Push(const Item& item)
{
	if (top < MAX)
	{
		pitems[top++] = item;
		return true;
	}
	else
	{
		return false;
	}
}

bool Stack::Pop(Item& item)
{
	if (top > 0)
	{
		item = pitems[--top];
		return true;
	}
	else
	{
		return false;
	}
}

Stack& Stack::operator=(const Stack& st)
{
	if (this == &st)
	{
		return *this;
	}

	delete[] pitems;
	pitems = new Item[st.size + 1];
	size = st.size;
	pitems = st.pitems;
	top = st.top;
}


int main()
{
	Stack  st;
	char ch;
	unsigned long po;

	cout << "Please enter A to add a purchase order" << endl << "P to processs a PO, or Q to quit." << endl;
	while (cin>>ch && toupper(ch) != 'Q')
	{
		while (cin.get()!='\n')
		{
			continue;
		}
		if (!isalpha(ch))
		{
			cout << '\a';
			continue;
		}
		switch (ch)
		{
		case 'A':
		case 'a':
			cout << "Enter a PO number to add: ";
			cin >> po;
			if (st.IsFull())
			{
				cout << "Stack is full" << endl;
			}
			else
			{
				st.Push(po);
			}
			break;

		case 'p':
		case 'P':
			if (st.IsEmpty())
			{
				cout << "Stack is already empty." << endl;
			}
			else
			{
				st.Pop(po);
				cout << "PO# " << po << " popped" << endl;
			}
			break;
		}

		cout << "Please enter A to add a purchase order" << endl << "P to processs a PO, or Q to quit." << endl;

	}
	cout << "Bye" << endl;
	return 0;
}
*/




// //Task 5
// #include <cstdlib>
// #include <ctime>
// #include <iostream>
// #include <cmath>
// class Customer
// {
// private:
// 	long arrive;
// 	int processtime;

// public:
// 	Customer() :arrive(0), processtime(0) {}
// 	void Set(long when);
// 	long When()const { return arrive; }
// 	long Ptime()const { return processtime; }
// };

// typedef Customer Item;

// class Queue
// {
// private:
// 	struct Node
// 	{
// 		Item item;
// 		struct  Node* next;
// 	};

// 	enum{Q_Size = 10};

// 	Node* front;
// 	Node* rear;

// 	int items;
// 	const int qSize;
// 	Queue(const Queue& q):qSize(0){}
// 	Queue& operator=(const Queue& q) { return *this; }

// public:
// 	Queue(int qs = Q_Size);
// 	~Queue();
// 	bool IsEmpty()const;
// 	bool IsFull()const;
// 	int QueueCount()const;
// 	bool EnQueue(const Item& item);
// 	bool DeQueue(Item& item);
// };

// Queue::Queue(int qs) : qSize(qs)
// {
// 	front = rear = NULL;
// 	items = 0;
// }

// Queue::~Queue()
// {
// 	Node* temp;
// 	while (front != NULL)
// 	{
// 		temp = front;
// 		front = front->next;
// 		delete temp;
// 	}	
// }

// bool Queue::IsEmpty()const
// {
// 	return items == 0;
// }

// bool Queue::IsFull()const
// {
// 	return items == qSize;
// }

// int Queue::QueueCount()const
// {
// 	return items;
// }

// bool Queue::EnQueue(const Item& item)
// {
// 	if(IsFull())
// 	{
// 		return false;
// 	}

// 	Node* add = new Node;
// 	if(add == NULL)
// 	{
// 		return false;
// 	}

// 	add->item = item;
// 	add->next = NULL;

// 	items++;
// 	if(front == NULL)
// 	{
// 		front = add;
// 	}
// 	else
// 	{
// 		rear->next = add;
// 	}
// 	rear = add;
// 	return true;
// }


// bool Queue::DeQueue(Item& item)
// {
// 	if(front == NULL)
// 	{
// 		return false;
// 	}

// 	item = front->item;
// 	items--;

// 	Node* temp = front;
// 	front = front->next;
// 	delete temp;

// 	if(items == 0)
// 	{
// 		rear = NULL;
// 	}
// 	return true;
// }

// void Customer::Set(long when)
// {
// 	processtime = std::rand() % 3 +1;
// 	arrive = when;
// }


// const int MIN_PER_HR = 60;
// bool NewCustomer(double x);

// int main()
// {
// 	using namespace std;
// 	srand(time(0));
// 	cout << "Case Study: Bank of Heather Automatic Teller: "<<endl;
// 	cout << "Enter maximum size of queue:";
// 	int qs;
// 	cin >>qs;
// 	Queue line(qs);

// 	cout << "Enter the number of simulation hours:";
// 	int hours;
// 	cin >> hours;

// 	long cyclelLimit = MIN_PER_HR * hours;

// 	double perhour = 1;

// 	double min_per_cust;

// 	long turnAways = 0;
// 	long customers = 0;
// 	long severd = 0;
// 	long sum_line = 0;
// 	int wait_time = 0;
// 	long line_wait = 0;

// 	while (1)
// 	{
// 		min_per_cust = MIN_PER_HR / perhour;
// 		Item temp;
// 		turnAways = 0;
// 		customers = 0;
// 		severd = 0;
// 		sum_line = 0;
// 		wait_time = 0;
// 		line_wait = 0;

// 		for(int cycle = 0; cycle < cyclelLimit; cycle++)
// 		{
// 			if(NewCustomer(min_per_cust))
// 			{
// 				if(line.IsFull())
// 				{
// 					turnAways++;
// 				}
// 				else
// 				{
// 					customers++;
// 					temp.Set(cycle);
// 					line.EnQueue(temp);
// 				}
// 			}

// 			if(wait_time <= 0 && !line.IsEmpty())
// 			{
// 				line.DeQueue(temp);
// 				wait_time = temp.Ptime();
// 				line_wait += cycle-temp.When();
// 				severd++;
// 			}
// 			if(wait_time>0)
// 			{
// 				wait_time--;
// 			}
// 			sum_line += line.QueueCount();
// 		}
// 		if (fabs(double(line_wait) / severd - 1.0) < 0.1)
// 		{
// 			cout << "customers accepted: " << customers << endl;
// 			cout << "customers served: " << severd << endl;
// 			cout << "trunaways: " << turnAways << endl;
// 			cout << "average queue size: ";
// 			cout.precision(2);
// 			cout.setf(ios_base::fixed, ios_base::floatfield);
// 			cout.setf(ios_base::showpoint);
// 			cout << (double)sum_line / cyclelLimit << endl;
// 			cout << "average wait time: " << (double)line_wait / severd << " minutes" << endl;

//              cout<<"fabs((double)line_wait / served-1.0):"<<fabs((double)line_wait / severd-1.0)<<endl;
// 			cout<<"average number of customer per hour: "<<perhour<<endl;
// 			break;
// 		}
// 		perhour++;
// 	}
// 	return 0;
// }

// bool NewCustomer(double x)
// {
// 	return (std::rand() *x /RAND_MAX <1);
// }




/*
//Task 6

const int MIN_PER_HOUR = 60;
bool NewCustomer(double x);
int main()
{
	using namespace std;
	srand(time(0));

    cout << "Case Study: Bank of Heather Automatic Teller\n";
    cout << "Enter maximum size of queue: ";
    int qs;
    cin >> qs;
 
    cout << "Enter the number of simulation hours: ";
    int hours;
    cin >> hours;
    long cyclelimit = MIN_PER_HOUR*hours;
 
    Item temp;
    double perhour=1;
    long lastturnaways=0;
    long lastcustomers=0;
    long lastserved=0;
    long lastsum_line1=0;
    long lastsum_line2=0;
    long lastline_wait=0;


	while (true)
	{
		Queue line1(qs);
		Queue line2(qs);

        double min_per_cust;
        min_per_cust=MIN_PER_HOUR/perhour;
 
        long turnaways=0;
        long customers=0;
        long served=0;
        long line_wait=0;
 
        int wait_time1=0;
        long sum_line1=0;
        int wait_time2=0;
        long sum_line2=0;

		for(int cycle = 0; cycle < cyclelimit; cycle++)
		{
			if(line1.IsFull() && line2.IsFull())
			{
				turnaways++;
			}
			if(line1.QueueCount() < line2.QueueCount())
			{
				customers++;
				temp.Set(cycle);
				line1.EnQueue(temp);
			}
			else
			{
				customers++;
				temp.Set(cycle);
				line2.EnQueue(temp);
			}

			if(wait_time1 <=0 && !line1.IsEmpty())
			{
				line1.DeQueue(temp);
				wait_time1 = temp.Ptime();
				line_wait += cycle-temp.When();
				served++;

			}

			if(wait_time2 <=0 && !line2.IsEmpty())
			{
				line2.DeQueue(temp);
				wait_time2 = temp.Ptime();
				line_wait+=cycle - temp.When();
				served++;
			}
			
			if(wait_time1 > 0)
			{
				wait_time1--;
			}
			if(wait_time2 > 0)
			{
				wait_time2--;
			}

			sum_line1 += line1.QueueCount();
			sum_line2 += line2.QueueCount();
		}

		if (fabs((double)line_wait / served-1.0)<0.1)
		{

			cout << "average wait time lower than 1 minutes needs " << perhour << " customers per hour.\n";

			cout << "customers accepted: " << customers << endl;
			cout << "  customers served: " << served << endl;
			cout << "         turnaways: " << turnaways << endl;
			cout << "average queue1 size: ";
			cout.precision(2);
			cout.setf(ios_base::fixed, ios_base::floatfield);

			cout << (double)lastsum_line1 / cyclelimit << endl;
			cout << "average queue2 size: ";
			cout << (double)lastsum_line2 / cyclelimit << endl;
			cout << " average wait time: " << (double)line_wait / served << " minutes\n";
			break;
		}
		perhour++;
	}
	return 0;
}

bool NewCustomer(double x)
{
	return(std::rand()*x /RAND_MAX <1);
}
*/

