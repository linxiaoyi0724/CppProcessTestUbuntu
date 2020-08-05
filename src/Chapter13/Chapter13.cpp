/*
//Task 1
#include <cstring>
#include <iostream>
using namespace std;
class Cd
{
private:
    char performers[50];
    char label[20];
    int selections;
    double playtime;

public:
    Cd(char* s1,char* s2,int n,double x);
    Cd(const Cd& d);
    Cd();
    virtual ~Cd();
    virtual void Report()const;
    virtual Cd& operator=(const Cd& d);
};

class Classic : public Cd
{
private:
    char* mStr;
public:
    Classic(char* ms, char* s1, char* s2, int n, double x);
    Classic();
    ~Classic();

	virtual void Report()const;
	virtual Classic& operator=(const Classic& d);
};

Cd::Cd(char* s1, char* s2, int n, double x):selections(n),playtime(x)
{
    std::strcpy(performers, s1);
    std::strcpy(label, s2);
}
Cd::Cd(const Cd& d)
{
    std::strcpy(performers,d.performers);
    std::strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd(){}

Cd::~Cd(){}

void Cd::Report()const
{
    cout << "perfermers: " << performers <<endl;
    cout << "label: " << label <<endl;
    cout << "selections: " << selections <<endl;
    cout << "playtime: " << playtime <<endl;
}

Cd& Cd::operator=(const Cd& d)
{
	if (this == &d)
	{
		return *this;
	}
	
	std::strcpy(performers,d.performers);
	std::strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}

Classic::Classic(char* ms, char* s1, char* s2, int n, double x) :Cd(s1, s2, n, x)
{
	mStr = new char[strlen(ms) + 1];
	std::strcpy(mStr, ms);
}

Classic::Classic()
{

}

Classic::~Classic()
{
	delete[] mStr;
}

void Classic::Report()const
{
	cout << "Main production: " << mStr << endl;
	Cd::Report();

}

Classic& Classic::operator=(const Classic& d)
{
	if (this == &d)
	{
		return *this;
	}

	Cd::operator=(d);
	mStr = new char[strlen(d.mStr) + 1];
	std::strcpy(mStr, d.mStr);
}

void Bravo(const Cd& disk);
int main()
{
    Cd c1("Beatles","Capitol",14, 35.5);
    Classic c2 = Classic("Piano Sonata in B flat, Fantasia in C","Alfred Brendel", "Philips", 2,57.17);
    Cd* pcd = &c1;
    cout << "Using object directly: "<<endl;
    c1.Report();
    c2.Report();

    cout << "Using type cd* pointer to objects: "<<endl;
    pcd->Report();
    pcd = &c2;
    pcd->Report();

    cout <<"Calling a function with a Cd reference argument: "<<endl;
    Bravo(c1);
    Bravo(c2);
    
    cout <<"Testing assignment: ";
    Classic copy;
    copy = c2;
    copy.Report();

    return 0; 
}

void Bravo(const Cd& disk)
{
    disk.Report();
}
*/










/*
//Task 2
#include <cstring>
#include <iostream>
using namespace std;
class Cd
{
private:
	char* performers;
	char* label;
	int selections;
	double playtime;

public:
	Cd(char* s1,char* s2,int n,double x);
	Cd(const Cd& d);
	Cd();
	virtual ~Cd();
	virtual void Report()const;
	virtual Cd& operator=(const Cd& d);
};

class Classic : public Cd
{
private:
	char* mStr;
public:
	Classic(char* ms, char* s1, char* s2, int n, double x);
	Classic();
	~Classic();

	virtual void Report()const;
	virtual Classic& operator=(const Classic& d);
};

Cd::Cd(char* s1, char* s2, int n, double x):selections(n),playtime(x)
{
	performers = new char[strlen(s1) + 1];
	label = new char[strlen(s2) + 1];
	std::strcpy(performers, s1);
	std::strcpy(label, s2);
}
Cd::Cd(const Cd& d)
{
	performers = new char[strlen(d.performers) + 1];
	label = new char[strlen(d.label) + 1];
	std::strcpy(performers,d.performers);
	std::strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}

Cd::Cd(){}

Cd::~Cd()
{
	delete[] performers;
	delete[] label;
}

void Cd::Report()const
{
	cout << "perfermers: " << performers <<endl;
	cout << "label: " << label <<endl;
	cout << "selections: " << selections <<endl;
	cout << "playtime: " << playtime <<endl;
}

Cd& Cd::operator=(const Cd& d)
{
	if (this == &d)
	{
		return *this;
	}
	//delete[] performers;
	//delete[] label;

	performers = new char[strlen(d.performers) + 1];
	label = new char[strlen(d.label) + 1];

	std::strcpy(performers,d.performers);
	std::strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}

Classic::Classic(char* ms, char* s1, char* s2, int n, double x) :Cd(s1, s2, n, x)
{
	mStr = new char[strlen(ms) + 1];
	std::strcpy(mStr, ms);
}

Classic::Classic()
{

}

Classic::~Classic()
{
	delete[] mStr;
}

void Classic::Report()const
{
	cout << "Main production: " << mStr << endl;
	Cd::Report();

}

Classic& Classic::operator=(const Classic& d)
{
	if (this == &d)
	{
		return *this;
	}

	Cd::operator=(d);
	mStr = new char[strlen(d.mStr) + 1];
	std::strcpy(mStr, d.mStr);
}

void Bravo(const Cd& disk);
int main()
{
	Cd c1("Beatles","Capitol",14, 35.5);
	Classic c2 = Classic("Piano Sonata in B flat, Fantasia in C","Alfred Brendel", "Philips", 2,57.17);
	Cd* pcd = &c1;
	cout << "Using object directly: "<<endl;
	c1.Report();
	c2.Report();

	cout << "Using type cd* pointer to objects: "<<endl;
	pcd->Report();
	pcd = &c2;
	pcd->Report();

	cout <<"Calling a function with a Cd reference argument: "<<endl;
	Bravo(c1);
	Bravo(c2);

	cout <<"Testing assignment: " <<endl;
	Classic copy;
	copy = c2;
	copy.Report();
	cin.get();
	return 0;
}

void Bravo(const Cd& disk)
{
	disk.Report();
}
*/



/*
Task 4
#include <iostream>
#include <cstring>
using namespace std;
class ABC
{
private:
	char* label;
	int rating;

public:
	ABC(const char* l = "null", int r = 0);
	ABC(const ABC& ac);
	virtual ~ABC();
	virtual ABC& operator=(const ABC& ac) = 0;
	friend std::ostream& operator<<(std::ostream& os, const ABC& ac);
	virtual void View();
};

class baseABC : public ABC
{
public:
	baseABC(const char* l = "null", int r = 0);
	baseABC(const baseABC& bc);
	virtual ~baseABC() {};
	friend std::ostream& operator<<(std::ostream& os, const baseABC& bc);
	virtual void View();
};

class lacksDMA : public ABC
{
private:
	enum { COL_LEN = 40 };
	char color[COL_LEN];

public:
	lacksDMA(const char* c = "blank", const char* l = "null", int r = 0);
	lacksDMA(const char* c, const ABC& ac);
	friend std::ostream& operator<<(std::ostream& os, const lacksDMA& ls);
	virtual void View();
};

class hasDMA : public ABC
{
private:
	char* style;
public:
	hasDMA(const char* s = "none", const char* l = "null", int r = 0);
	hasDMA(const char* s, const ABC& ac);
	hasDMA(const hasDMA& hs);
	~hasDMA();
	virtual hasDMA& operator=(const hasDMA& hs);
	friend std::ostream& operator<<(std::ostream& os, const hasDMA& hs);
	virtual void View();
};

ABC::ABC(const char* l, int r) :rating(r)
{
	label = new char[strlen(l) + 1];
	std::strcpy(label, l);
}

ABC::ABC(const ABC& ac)
{
	label = new char[strlen(ac.label) + 1];
	std::strcpy(label, ac.label);
	rating = ac.rating;
}

ABC::~ABC()
{
	delete[] label;
}

ABC& ABC::operator=(const ABC& ac)
{
	if (this == &ac)
	{
		return *this;
	}
	delete[] label;
	label = new char[strlen(ac.label) + 1];
	std::strcpy(label, ac.label);
	rating = ac.rating;
}

std::ostream&  operator<<(std::ostream& os, const ABC& ac)
{
	os << "lable: " << ac.label << endl;
	os << "rating: " << ac.rating << endl;
}

void ABC::View()
{
	cout << *this <<endl;
}

baseABC::baseABC(const char* l, int r) : ABC(l,r)
{

}

baseABC::baseABC(const baseABC& bc) : ABC(bc)
{

}

std::ostream& operator<<(std::ostream& os, const baseABC& bc)
{
	os << (const ABC&)bc;
	return os;
}

void baseABC::View()
{
	cout << *this <<endl;
}

lacksDMA::lacksDMA(const char* c, const char* l, int r) :ABC(l,r)
{
	std::strcpy(color, c);
}

lacksDMA::lacksDMA(const char* c, const ABC& ac) :ABC(ac)
{
	std::strcpy(color, c);
}

std::ostream& operator<<(std::ostream& os, const lacksDMA& ls)
{
	os << (const ABC&)ls;
	os << "color: " << ls.color << endl;
}


void lacksDMA::View()
{
	cout << *this <<endl;
}

hasDMA::hasDMA(const char* s, const char* l, int r):ABC(l,r)
{
	style = new char[std::strlen(s) +1];
	std::strcpy(style,s);
}

hasDMA::hasDMA(const char* s, const ABC& ac):ABC(ac)
{
	style = new char[std::strlen(s) +1];
	std::strcpy(style,s);
}

hasDMA::hasDMA(const hasDMA& hs):ABC(hs)
{
	style = new char[std::strlen(hs.style) +1];
	std::strcpy(style,hs.style);
}
hasDMA::~hasDMA()
{
	delete[] style;
}

hasDMA& hasDMA::operator=(const hasDMA& hs)
{
	if(this == &hs)
	{
		return *this;
	}

	delete[] style;
	ABC::operator=(hs);
	style = new char[std::strlen(hs.style) +1];
	std::strcpy(style, hs.style);
}

std::ostream& operator<<(std::ostream& os, const hasDMA& hs)
{
	os<<(const ABC& )hs;
	os<<"Style: " << hs.style <<endl;
}

void hasDMA::View()
{
	cout << *this <<endl;
}
*/



/*
//Task 5
#include <iostream>
#include <cstring>
using namespace std;
class Port
{
private:
	char* brand;
	char style[20];
	int bottles;

public:
	Port(const char* br = "none",const char* st = "none", int b = 0);
	Port(const Port& p);
	virtual ~Port(){delete[] brand;}
	Port& operator=(const Port& p);
	Port& operator+=(int b);
	Port& operator-=(int b);
	int BottleCount()const{return bottles;}
	virtual void Show()const;
	friend ostream& operator<<(ostream& os, const Port& p);
};

class VintagePort : public Port
{
private:
	char * nickname;
	int year;

public:
	VintagePort();
	VintagePort(const char* br, int b, const char* nn, int y);
	VintagePort(const VintagePort& vp);
	~VintagePort(){delete[] nickname;}
	VintagePort& operator=(const VintagePort& vp);
	void Show()const;
	friend ostream& operator<<(ostream & os, const VintagePort& vp);
};

Port::Port(const char* br, const char* st, int b)
{
	brand = new char[std::strlen(br) +1];
	std::strcpy(brand, br);
	std::strcpy(style, st);
	bottles = b;
}

Port::Port(const Port& p)
{
	brand = new char[std::strlen(p.brand) +1];
	std::strcpy(brand, p.brand);
	std::strcpy(style,p.style);
	bottles = p.bottles;
}

Port& Port::operator=(const Port& p)
{
	if(this == &p)
	{
		return *this;
	}
	brand = new char[std::strlen(p.brand) +1];
	std::strcpy(brand, p.brand);
	std::strcpy(style,p.style);
	bottles = p.bottles;
	return *this;
}

Port& Port::operator+=(int b)
{
	bottles += b;
	return *this;
}

Port& Port::operator-=(int b)
{
	if(b <= bottles)
	{
		bottles -= b;
	}
	else
	{
		cout << "Eorr" <<endl;
	}
	return *this;
}

void Port::Show()const
{
	cout << "Brand: " <<brand<<endl;
	cout << "Kind: " << style <<endl;
	cout << "Bottles: "<<bottles <<endl; 
}

ostream& operator<<(ostream& os, const Port& p)
{
	os<<p.brand <<", " << p.style << ", " << p.bottles;
}

VintagePort::VintagePort():Port(){}

VintagePort::VintagePort(const char* br, int b, const char* nn, int y):Port(br,"none",b)
{	
	nickname = new char[std::strlen(nn)+1];
	std::strcpy(nickname,nn);
	year = b;
}

VintagePort::VintagePort(const VintagePort& vp) : Port(vp)
{
	nickname = new char[std::strlen(vp.nickname)+1];
	std::strcpy(nickname,vp.nickname);
	year = vp.year;
}

VintagePort& VintagePort::operator=(const VintagePort& vp)
{
	if(this == &vp)
	{
		return *this;
	}

	Port::operator=(vp);
	nickname = new char[std::strlen(vp.nickname)+1];
	std::strcpy(nickname,vp.nickname);
	year = vp.year;
	return *this;
}

void VintagePort::Show()const
{
	Port::Show();
	cout << "nickname: " <<nickname<<endl;
	cout << "year: " << year <<endl;
}

ostream& operator<<(ostream& os, const VintagePort& vp)
{
	os << (const Port&) vp;
	os << ",nickname: " << vp.nickname << " ,year: "<<vp.year;
}


int main()
{
	Port p1;
	Port p2("Gallo","tawny",20);
	p1.Show();
	p2.Show();	
	p1=p2;
	p1.Show();
	p1+=12;
	p2-=8;
	cout<<p1<<endl<<p2<<endl;	
	VintagePort p3("Gallo", 24, "Old Velvet", 16);
	p3.Show();
	p3+=5;
	cout<<p3<<endl;
	p3-=30;
	cout<<p3<<endl;	
	return 0;
}
*/


