//! Girl class
/*!
Contains get and set functions for various attributes of the girl class
*/
#include <string>
using namespace std;
class girl{
    private:
        string name;
        int attractiveness;//!< values 1 to 10
        int intelligence;//!< values 1 to 10
        bool single;//!<  value set to true if boy is single
        int type;//!< 1-Choosy, 2-Normal, 3-Desperate
        int happiness;//!< values 1 to 10
        int boytype;//!< 1-attractiveness, 2-Rich, 3-Intelligence
        float cost;//!<maintenance cost of girl.. Rs.1000 - Rs.5000
    public:

        girl(void ){
            //! Constructor to set default values
            this->attractiveness = 0;
            this->intelligence = 0;
            this->single = true;
            this->type = 0;
            this->cost = 0.0;
            this->boytype = 0;
            this->happiness = 0;
        }
        girl(string name,int attractiveness,int intelligence,int type, float cost,int boytype, int happiness)
        {
            //! Overloaded constructor
            /*! Sets values for all the attributes passed to the constructor*/
            this->name = name;
            this->attractiveness = attractiveness;
            this->intelligence = intelligence;
            this->type = type;
            this->cost = cost;
            this->boytype = boytype;
            this->happiness = happiness;
        }

        void setattractiveness( int a ) {
           attractiveness = a;
        }
        void setintelligence( int a ) {
           intelligence = a;
        }
        void setsingle( bool a ) {
           single = a;
        }
        void sethappiness(int a){
            happiness = a;
        }

        int gethappiness(void ){
            return happiness ;
        }

        int getintelligence( void ) {
           return intelligence;
        }
        int getattractiveness( void ) {
           return attractiveness;
        }
        bool getsingle( void ) {
           return single;
        }
        string getname( void ) {
           return name;
        }
        float getcost( void ) {
           return cost;
        }
        int gettype( void ) {
           return type;
        }
        int getboytype( void ) {
           return boytype;
        }
};

