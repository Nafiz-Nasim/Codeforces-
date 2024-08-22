#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
int main()
{
  int count=0,test_case;
  string input;
  cin>>test_case;
  getchar();
  for(int i=0;i<test_case;i++)
  {
    getline(cin,input);
    if(input=="Tetrahedron") 
    {
      count=count+4;
    }
    else if(input== "Cube") 
    {
      count=count+6;
    }
    else if(input=="Octahedron") 
    {
      count=count+8;
    }
    else if(input=="Dodecahedron") 
    {
      count=count+12;
    }
    else if(input=="Icosahedron") 
    {
      count=count+20;
    }

  }
  cout<<count<<endl;
}
