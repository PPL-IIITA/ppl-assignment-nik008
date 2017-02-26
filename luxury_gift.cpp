//! Luxury gift class
/*!
Contains get and set functions for various attributes of the Luxury class
*/
#include <string>
using namespace std;
class luxury_gift{
private:
    int value;
    float price;
    int luxury_rating, difficulty;

    luxury_gift(int value,float price,int luxury_rating, int difficulty)
    {
    //! Constructor
    this->value = value;
    this->price = price;
    this->luxury_rating = luxury_rating;
    this->difficulty = difficulty;

    }

    int getvalue(void)
    {
        return value;
    }
    float getprice(void)
    {
        return price;
    }
    int getluxury_rating(void)
    {
        return luxury_rating;
    }
    int getdifficulty(void)
    {
        return difficulty;
    }
};

