#include<iostream>
using namespace std;
int main()
{
  char input[1024];
  int table[30] = {0}, i = 0, word_counter=0, maxlength=0;
  cin.getline(input, 1024);
  while(input[i] != '\0')
  {
    if(input[i]==' ')
    {
      table[word_counter-1]++;
      if(word_counter > maxlength)
        maxlength = word_counter;
      word_counter = 0;
    }
    else
    {
      word_counter++;
    }
    i++;
  }
  table[word_counter - 1]++;
  cout<<"Word length\t\t\tOccurences"<<endl;
  for(i = 0;i <= maxlength; i++)
  {
    cout<<i+1<<"\t\t\t\t"<<table[i]<<endl;
  }
}
