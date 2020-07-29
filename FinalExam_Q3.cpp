/*Create class, which should have three private variables, first name, last name and age.
Initialization of the class' private members should be possible using the constructor.
Class also should have set() and get() methods for setting and getting the values for the private variables.
Create 10 element array from the class objects.
Initialization of the objects, whos index is less or equal to 4 should be done using the constructor,
while the elements of an array whos index is greater than 4, should be initialized using the set() function.
After initialization of the array, the array should be passed to the function, which will sort the objects in ascending order of the age private variable.*/

#include <iostream>
#include<string>
#include<algorithm>

using namespace std;

class Person
{
    /*private variables: */
        string firstname;
        string lastname;
        int age;

    public:
        /*initializing private members using the constructir */
        Person ( string a, string b, int c)
        {
            firstname = a;
            lastname = b;
            age = c;
        }

        void set_firstname (string x)
        {
            firstname = x;
        }

        void set_lastname (string x)
        {
           lastname=x;
        }

        void set_age (int x)
        {
            age=x;
        }

        string get_firstname ()
        {
            return firstname;
        }

        string get_lastname ()
        {
            return lastname;
        }

        int get_age ()
        {
            return age;
        }
};

int main()
{
    Person students[10];
    
    students[0] = Person("Teo", "Munjishvili", 20);
    students[1] = Person("Natia", "Metonidze", 20);
    students[2] = Person("Nana", "Kajaia", 20);
    students[3] = Person("Natia", "Datunashvili", 20);
    students[4] = Person("Nick", "Akkerer", 19);

    
    cout << "First Name: " << endl;
    students[5].set_firstname("Ani");
    cout<< students[5].get_firstname() << endl;
    
    cout << "Last Name: " << endl;
    students[5].set_lastname("Abzianidze");
    cout<< students[5].get_lastname() << endl;
    
    cout << "Age: " << endl;
    students[5].set_age(19); 
    cout<<students[5].get_age() << endl;
    
    
    
    
    cout << "First Name: " << endl;
    students[6].set_firstname("Luka");
    cout<< students[6].get_firstname() << endl;
    
    cout << "Last Name: " << endl;
    students[6].set_lastname("Jariashvili");
    cout<< students[6].get_lastname() << endl;
    
    cout << "Age: " << endl;
    students[6].set_age(20);
    cout<<students[6].get_age() << endl;
    
    
    
    
    cout << "First Name: " << endl;
    students[7].set_firstname("Nika");
    cout<< students[7].get_firstname() << endl;
    
    cout << "Last Name: " << endl;
    students[7].set_lastname("Jangisherashvili");
    cout<< students[7].get_lastname() << endl;
    
    cout << "Age: " << endl;
    students[7].set_age(19);
    cout<<students[7].get_age() << endl;
    
    
    
    
    cout << "First Name: " << endl;
    students[8].set_firstname("Oto");
    cout<< students[8].get_firstname() << endl;
    
    cout << "Last Name: " << endl;
    students[8].set_lastname("Pataraia");
    cout<< students[8].get_lastname() << endl;
    
    cout << "Age: " << endl;
    students[8].set_age(20);
    cout<<students[8].get_age() << endl;
    
    
    
    
    cout << "First Name: " << endl;
    students[9].set_firstname("Nikusha");
    cout<< students[9].get_firstname() << endl;

    cout << "Last Name: " << endl;
    students[9].set_lastname("OKruashvili");
    cout<< students[9].get_lastname() << endl;

    cout << "Age: " << endl;
    students[9].set_age(20);
    cout<<students[9].get_age() << endl;
    
    
    /* Sorting objects into ascending order */
    int i;
    sort(begin(students[i].age), end(students[i].age));
    for( int i=0; i<10; i++)
        cout<< students[i].age << endl;

    return 0;
}


