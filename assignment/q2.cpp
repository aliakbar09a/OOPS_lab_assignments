#include<iostream>
using namespace std;
int main()
{
  char input[1024];
  int table[30] = {0}, i = 0, word_counter=0, maxlength=0;
  // getting the input 
  cout<<"Enter the text\n";
  cin.getline(input, 1024);
  // loop to traverse the complete input
  while(input[i] != '\0')
  {
    // checking for whitespaces
    if(input[i]==' ')
    {
      table[word_counter-1]++;
      // storing length of biggest word
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
  if(word_counter > maxlength)
      maxlength = word_counter;
  table[word_counter - 1]++;
  // printing the results
  cout<<"Word length\t\t\tOccurences"<<endl;
  for(i = 0;i < maxlength; i++)
  {
    cout<<i+1<<"\t\t\t\t"<<table[i]<<endl;
  }
}
