//! Utility gift class
/*!
Contains get and set functions for various attributes of the utility class
*/
#include <string>
using namespace std;

class utility_gift{
private:
    int value;
    float price;
    int utility_val;
    string utility_class;

    utility_gift(int value,float price,int utility_val, string utility_class)
    {
    //! Constructor
    this->value = value;
    this->price = price;
    this->utility_val = utility_val;
    this->utility_class = utility_class;
    }

    int getvalue(void)
    {
        return value;
    }
    float getprice(void)
    {
        return price;
    }
    int getutility_val(void)
    {
        return utility_val;
    }
    string getutility_class(void)
    {
        return utility_class;
    }
};
