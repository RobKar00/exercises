#include <iostream>
#include <string>

using namespace std;

int main()
{
  int x=0,y=0;
  string s;
  cin >> s;
  for(int i=0;i<s.length();i++)
  {
      if(s[i]=='0')
      {
      ++x;
        if(x>y)
        {
            y=x;
        }
      }
      if(s[i]=='1')
      x=0;
  }
  cout << y;
}
