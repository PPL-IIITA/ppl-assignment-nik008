//! Essential gift class
/*!
Contains get and set functions for various attributes of the Essential class
*/
#include <string>
using namespace std;
class essential_gift{
private:
    int value;
    float price;

    essential_gift(int value,float price)
    {
    //! Constructor
    this->value = value;
    this->price = price;
    }

    int getvalue(void)
    {
        return value;
    }
    float getprice(void)
    {
        return price;
    }
};
