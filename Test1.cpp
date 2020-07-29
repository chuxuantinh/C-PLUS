/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>


using namespace std;
class mother {
    public:
    mother()
    {cout<<"mother: no param\n";}
    mother(int a)
    {cout<<"mother: int param\n";}
};

class congai: public mother {
    public: congai(int a)
    {cout<<"congai:int param\n\n";}
};

class contrai: public mother{
    public: contrai(int a)
    {cout<<"contrai: int param\n\n";}
};

int main()
{
    //cout<<"Hello World";
    congai tv(0);
    contrai qh(0);

    return 0;
}
