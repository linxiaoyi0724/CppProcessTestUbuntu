/*
// task 2
#include <iostream>
#include <string>
using std::string;
void strcount(string str);
int main()
{
    using namespace std;
    string input;
    cout << "Enter a line: " <<endl;
    getline(cin,input);
    while (input != "")
    {
        strcount(input);
        cout << "Enter next line (empty line to quit): " <<std::endl;
        getline(cin,input);
    }
    cout << "Bye" << endl;
    return 0;
}

void strcount(const string str)
{
    using namespace std;
    static int total = 0;
    int counts = 0;
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] != ' ')
        {
            counts++;
        }
    }
    cout << "\"" << str << "\" contains " << counts <<endl;
    total += counts;
    cout << total << " characters total" << std::endl;
}
*/




/*
//task 3
#include <iostream>
#include <new>
#include <string.h>
#include <stdio.h>
struct chaff
{
    char dross[20];
    int slap;
};

int main()
{
    using namespace std;
    chaff ch[2];
    chaff *ch1;
    ch1 = new (ch) chaff[2];
    strcpy(ch1[0].dross,"xiaoyi");
    ch1[0].slap = 99;
    strcpy(ch1[1].dross, "meizhen");
    ch1[1].slap = 100;
    for(int i = 0; i < 2; i++)
    {
        cout << i << ": dross: " << ch1[i].dross << std::endl;
        cout << i <<": slap: " << ch1[i].slap << std::endl;
    }

    chaff *ch2 = new chaff[2];
    chaff *ch3 = new (ch2) chaff[2];
    strcpy(ch3[0].dross,"xiaoyi");
    ch3[0].slap = 99;
    strcpy(ch3[1].dross, "meizhen");
    ch3[1].slap = 100;
    for(int i = 0; i < 2; i++)
    {
        cout << i << ": dross: " << ch3[i].dross << std::endl;
        cout << i <<": slap: " << ch3[i].slap << std::endl;
    }
    
    delete[] ch3;
    delete[] ch2; 
}
*/





