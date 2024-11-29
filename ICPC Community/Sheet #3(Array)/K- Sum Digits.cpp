#include <iostream>
using namespace std;

int main()
{
  int a;
  cin >> a;
  string input;
  cin >> input;
  int sum = 0;

for(char digit:input)
{
  sum=sum+ (digit-'0');
}
cout<<sum;
return 0;

}
