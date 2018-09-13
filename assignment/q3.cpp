#include<iostream>
using namespace std;
int main()
{
    char input[11];
    // list of months
    const char* months_list[12] = {"January", "February", "March", "April", "May", "June",
                        "July", "August", "September", "October", "November", "December"};
    int month, date, year;
    //getting the input from the user
    cout<<"Enter the data in dd/mm/yyyy format(without whitespaces) :\t";
    cin.getline(input, 11);
    //Displaying the changed format
    cout<<"\nThe changed format is :\t";
    // calculating date from string
    date = 10*(int(input[0]) - int('0')) + (int(input[1]) - int('0'));
    // calculating month from string
    month = 10*(int(input[3]) - int('0')) + (int(input[4]) - int('0'));
    // calculating year from string
    year =1000*(int(input[6]) - int('0')) + 100*(int(input[7]) - int('0'))+
            10*(int(input[8]) - int('0')) + (int(input[9]) - int('0'));
    cout<<date<<" "<<months_list[month - 1]<<","<<year<<endl<<endl;
}
