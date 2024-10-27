#include<iostream>
using namespace std;

int add(int a, int b);
void message();
int main()
{

    cout<<"hello"<<endl;
    cout<<"my name is tom"<<endl;
    cout<<"5+7= "<<add(5,7);
    message();
    return 0;
}
int add(int a, int b)
{
    return a+b;
}
void message()
{
    cout<<endl<<"I am inside the function message()"<<endl;
}
