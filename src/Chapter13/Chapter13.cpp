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
