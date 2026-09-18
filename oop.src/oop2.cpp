#include<iostream>
using namespace std;

class temp 
{
  double far;
  double cel;
  public:
        void getData(void);
        void displayData(void);
};

void temp :: getData(void)
{
  cout << "Enter temperaure in farheneit : " << endl;
  cin >> far;
}

void temp :: displayData(void)
{
  cel = far + 12;
  cout << "temperaure in celsius is : " << cel ;
}

int main()
{
  temp f;
  f.getData();
  f.displayData();

  return 0;

}
