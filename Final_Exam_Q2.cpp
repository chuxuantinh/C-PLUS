#include<iostream>
#include<string>
using namespace std;

struct professor
{
    string firstname;
    string lastname;
    float height;
    int age;
};

void display ( struct professor *person)
{
   int max = (person[0].age + person[0].height);
   int max_index = 0;
    
    for (int i=1; i<10; i++)
    {
        int sum = person[i].age + person[i].height;
        if(sum > max)
        {
            max = sum;
            max_index = i;
        }
    }
    
    cout << "First Name: " << person[max_index].firstname <<endl;
    cout << "Last Name: " << person[max_index].lastname << endl;
}
 
 


int main()
{
    professor person[10];    
    person[0].firstname = "Teo";
    person[0].lastname = "Munjishvili";
    person[0].height = 160;
    person[0].age = 20;
    person[1].firstname = "Nana";
    person[1].lastname = "Kajaia";
    person[1].height = 171;
    person[1].age = 19;
    person[2].firstname = "Natia";
    person[2].lastname = "Metonidze";
    person[2].height = 175;
    person[2].age = 20;
    person[3].firstname = "Natia";
    person[3].lastname = "Datunashvili";
    person[3].height = 153;
    person[3].age = 20;
    person[4].firstname = "Ani";
    person[4].lastname = "Abzianidze";
    person[4].height = 160;
    person[4].age = 20;
    person[5].firstname = "Luka";
    person[5].lastname = "Jariashvili";
    person[5].height = 175;
    person[5].age = 19;
    person[6].firstname = "Oto";
    person[6].lastname = "Pataraia";
    person[6].height = 187;
    person[6].age = 20;
    person[7].firstname = "Nika";
    person[7].lastname = "Jangisherashvili";
    person[7].height = 179;
    person[7].age = 19;
    person[8].firstname = "Vazha";
    person[8].lastname = "Kalandia";
    person[8].height = 186;
    person[8].age = 20;
    person[9].firstname = "Vaxo";
    person[9].lastname = "Chumburidze";
    person[9].height = 183;
    person[9].age = 54;
    display (person);

    return 0;
    
}


