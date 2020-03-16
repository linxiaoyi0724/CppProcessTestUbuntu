#ifndef PLORG_H_
#define PLORG_H_
//#include <string>

namespace PG
{
    const int MAX =19;
    class Plorg
    {
    private:
        char mName[19];
        int mCI;
    public:
        Plorg(char* name ="Plorga");
        void ChangeCI(int CI);
        void ShowPlorg()const;
        ~Plorg();
    };
}

#endif