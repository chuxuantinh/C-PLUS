/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int fibonaci(int n)
{
    if (n<=1) {return 1;}
    else 
    {
        return n*fibonaci(n-1);
    }
}

int main()
{
    //cout<<"Hello World";
    int n;
    int giaithua = 1;
    cout<<"nhap vao so n:";
    cin>>n;
    printf("số n= %d\n", n);
    if (n == 0) 
    {giaithua = 1; 
    cout<<"giai thua la:"<<giaithua;}
    
    else if (n >= 1)
    {
        for(int i = 1; i<=n; ++i)
        {
            giaithua *=i;
            
        }
        cout<<"giai thua la:\n"<<giaithua;
    }
    //cach 2 -de quy;
    
    cout<<"Tinh theo fibonaci:" <<fibonaci(n);
    
    return 0;
}


