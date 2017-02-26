#include <iostream>
#include <cstdlib>
#include <fstream>
#include <ctime>
using namespace std;
int main(){
    srand(time(NULL));
    ifstream fin;
    ofstream fout;
    int i,n=1000;
    {
        string name;
        int attractiveness;
        int intelligence;
        int type;
        float budget;
        int happiness=0;
        int att_req;
        fin.open("Boy.txt");
        fout.open("Boys.csv");
        for(i = 0;i < n; i++)
        {
            fin >> name;
            attractiveness = rand()% 10 + 1;
            intelligence = rand()% 10 + 1;
            type = rand()% 3 + 1;
            budget = rand()% 4000 + 1000;
            //happiness = rand()% 10 + 1;
            att_req = rand()% 10 + 1;
            fout << name << " " << attractiveness<< " " << intelligence << " " << type << " " << budget <<" " << happiness << " " << att_req << endl;
        }
        fin.close();
        fout.close();

    }

    {
        string name;
        int attractiveness;
        int intelligence;
        int type;
        float cost;
        int boytype;
        int happiness = 0;
        fin.open("Girl.txt");
        fout.open("Girls.csv");
        for(i = 0;i < n; i++)
        {
            fin >> name;
            attractiveness = rand()% 10 + 1;
            intelligence = rand()% 10 + 1;
            type = rand()% 3 + 1;
            cost = rand()% 4000 + 1000;
            //happiness = rand()% 10 + 1;
            boytype = rand()%3 + 1;
            fout << name << " " << attractiveness<< " " << intelligence << " " << type << " " << cost <<" " << boytype << " " << happiness << endl;
        }
        fin.close();
        fout.close();
    }
    return 0;
}

