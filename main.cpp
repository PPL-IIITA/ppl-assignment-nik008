/*!\mainpage IPPL Assignment
 * \subsection creator Created by:
* Nikunj Sharma (LIT2015003)

*/
#include <iostream>
#include <string>
#include "gift.cpp"
#include "girl.cpp"
#include "boy.cpp"
#include <algorithm>
#include <fstream>
#include <vector>
using namespace std;

bool comp1(boy b1, boy b2){
    //!compares on basis of attractiveness
    return b1.getattractiveness() > b2.getattractiveness();
}
bool comp2(boy b1, boy b2){
    //!compares on basis of budget
    return b1.getbudget() > b2.getbudget();
}
bool comp3(boy b1, boy b2){
    //!compares on basis of intelligence
    return b1.getintelligence() > b2.getintelligence();
}

void find_bf(vector<girl> arr_g, vector<boy> arr_b)
{
    //!Function allots boyfriend to every girl
    /*!
        uses nested for loops. Chooses the best boyfriend available for every girl on the basis of the type of boy she wants given that his budget matches her maintenance cost and her attractiveness meets the minimum attraction requirement the boy states he needs in his to-be girlfriend. Finally the output is printed and stored in a file named "q1.csv"
    */
    ofstream fout;
    fout.open("q1.csv");
    vector<girl>::iterator g;
    for (g=arr_g.begin(); g<arr_g.end();g++)
    {

        if(g->getboytype()==1)
        {
            std::sort(arr_b.begin(), arr_b.end(), comp1);
        }
        else if(g->getboytype()==2)
        {
            std::sort(arr_b.begin(), arr_b.end(),comp2);
        }
        else if(g->getboytype()==3)
        {
            std::sort(arr_b.begin(), arr_b.end(),comp3);

        }

        vector<boy>::iterator i;
        for(i = arr_b.begin(); i < arr_b.end(); i++)
        {
            if (i->getsingle() == true){
                if(g->getcost() <= i->getbudget())
                    if(i->getatt_req() <= g->getattractiveness())
                    {
                        cout << i->getname() << " - " << g->getname() << endl;
                        fout << i->getname() << " - " << g->getname() << endl;//output in file "q1.csv"
                        i->setsingle(false);
                        g->setsingle(false);
                        break;
                    }

            }
        }
    }
    fout.close();
}

int main()
{
    //! The famous main function!
    /*!
        Takes number of girls and number of boys as input (both less than 1000) and calls the "find_bf" function
    */
    ifstream fin;
    int n1, n2;
    cout << "No. of girls : ";
    cin >> n1;
    cout << "No. of boys : ";
    cin >> n2;
    vector<girl> arr_g;
    vector<boy> arr_b;
    fin.open("Girls.csv");
    for(int i=0;i<n1;i++)
    {
        string name;
        int attractiveness;
        int intelligence;
        int type;
        float cost;
        int boytype;
        int happiness = 0;
        fin >> name >> attractiveness >> intelligence >> type >> cost >> boytype >> happiness ;
        girl g(name, attractiveness, intelligence, type, cost, boytype, happiness);
        arr_g.push_back(g);
    }fin.close();

    fin.open("Boys.csv");
    for(int i=0;i<n2;i++)
    {
                string name;
        int attractiveness;
        int intelligence;
        int type;
        float budget;
        int happiness=0;
        int att_req;

        fin >> name >> attractiveness >> intelligence >> type >> budget >> happiness >> att_req;
        boy b(name, attractiveness, intelligence, type, budget, happiness, att_req);
        arr_b.push_back(b);
    }fin.close();
    find_bf(arr_g, arr_b);
}
