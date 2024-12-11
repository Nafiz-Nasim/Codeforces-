#include <bits/stdc++.h>
using namespace std;
int main()
{
 string input;
 getline(cin,input);
int length_of_the_element_before= input.find('\\');
cout<<input.substr(0,length_of_the_element_before);
return 0;
}