#include<iostream>
using namespace std;

int main()
{
    cout << "hello world" << endl;
    //this is a comment 
    double a; double b;
    cout << "enter two numbers : " << endl;
    cin >> a >> b ;
    double sum;
    sum = a + b;
    cout << "the sum is " << sum << endl;
    double avg;
    cout << "***************************" << endl;
    avg = sum / 2;
    cout << "average is " << avg << endl;

    return 0;
}


