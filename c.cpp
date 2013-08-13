#include <iostream>
using namespace std;
int main()
{
  int a;
  int b;
  int c;
  
  cout << "a: " << endl;
  cin >> a;
  cout << "b: " << endl;
  cin >> b;
  
  c = a + b;
  
  if (c > 9)
    cout << "c is bigger then 9" << endl;
  else if (c < 9)
    cout << "c is less then 9" << endl;
  else
    cout << "c is 9" << endl;
  
  return 0;

}
