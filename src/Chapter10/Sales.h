#ifndef SALES_H_
#define SALES_H_


namespace SL
{
    const int QUARTERS = 4;
    class Sales
    {
    private:
        double sales[QUARTERS];
        double averge;
        double max;
        double min;
    public:
        Sales();
        Sales(const double ar[], int n);
        void setSales(Sales& s);
        void showSales(const Sales& s)const;
        ~Sales();
    };
}

#endif