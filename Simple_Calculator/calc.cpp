#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two integers(give a single space between them) : ";
    cin>>a>>b;
    int x;
    cout<<"Enter 1 for Addition \nEnter 2 for Subtraction \nEnter 3 for Multiplication \nEnter 4 for Division"<<endl;
    cin>>x;
    switch(x)
    {
        case 1: cout<<"Addition is "<<a+b<<endl;
            break; 
        case 2: cout<<"Subtraction is "<<a-b<<endl;
            break; 
        case 3: cout<<"Multiplication is "<<a*b<<endl;
            break;
        case 4: cout<<"Division is "<<a/b<<endl;
            break;  
    }
    return 0;
}