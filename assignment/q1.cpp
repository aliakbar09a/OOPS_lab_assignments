#include<iostream>
using namespace std;
int main()
{
  char input[1024];
  int table[26] = {0}, i = 0, index;
  // getting the input
  cout<<"Enter the text (in lowercase)\n";
  cin.getline(input, 1024);
  // traversing the input
  while(input[i] != '\0')
  {
    index = input[i] - 97;
    // checking if input[i] is a lowercase alphabet
    if(index >= 0 || index<=25)
    {
        // increasing the counter of found letter
        table[index]++;
    }
    i++;
  }
  //displaying the counts of each alphabet
  for(i = 0; i<=24; i++)
  {
    cout<<table[i]<<"->\""<<char(i+97)<<"\", ";
  }
  cout<<table[25]<<"->\""<<char(25+97)<<"\"";
  cout<<endl;
}
