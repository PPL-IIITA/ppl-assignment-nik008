//! Boy class
/*!
Contains get and set functions for various attributes of the boy class
*/
#include <string>
using namespace std;
class boy{
    private:
        string name;
        int attractiveness;//!< 1 to 10
        int intelligence;//!< 1 to 10
        int att_req;//!< 1 to 10
        bool single;//!< true if boy is single
        int type;//!< 1-Miser, 2-Generous, 3-Geek
        int happiness;//!< 1 to 10
        float budget;//!< budget of boy.. Rs.1000 - Rs.5000
    public:

        boy(void){
            //! Constructor to set default values
            this->attractiveness = 0;
            this->intelligence = 0;
            this->single = true;
            this->type = 0;
            this->budget = 0.0;
            this->happiness = 0;
            this->att_req = 0;
        }

        boy(string name,int attractiveness,int intelligence,int type, float budget,int happiness,int att_req)
        {
            //! Overloaded constructor
            /*! Sets values for all the attributes passed to the constructor*/
            this->name = name;
            this->attractiveness = attractiveness;
            this->intelligence = intelligence;
            this->type = type;
            this->budget = budget;
            this->happiness = happiness;
            this->att_req = att_req;
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
        float getbudget( void ) {
           return budget ;
        }
        int gettype( void ) {
           return type;
        }
        int getatt_req( void ) {
           return att_req;
        }
};
