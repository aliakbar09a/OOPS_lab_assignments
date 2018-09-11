#include<iostream>
using namespace std;
int main()
{
  char input[1024];
  int table[26] = {0}, i = 0, index;
  // getting the input
  cin.getline(input, 1024);
  while(input[i] != '\0')
  {
    index = input[i] - 97;
    if(index >= 0 || index<=25)
    {
      table[index]++;
    }
    i++;
  }
  for(i = 0; i<=24; i++)
  {
    cout<<table[i]<<" \""<<char(i+97)<<"\", ";
  }
  cout<<table[25]<<" "<<char(25+97);
  cout<<endl;
}
