#include <QCoreApplication>
#include <iostream>
#include "one.h"
using namespace std;
int main()
{
    cout << "in main "<<endl;
    one first_obj;
    one second_obj;
    first_obj.introduce();
    second_obj.introduce();

    cout << "------------"<<endl;

    first_obj.introduce_str = "my name changed to : changed first obj";

    first_obj.introduce();
    second_obj.introduce();

    //cout << first_obj.my_num << endl;


    return 0;
}
