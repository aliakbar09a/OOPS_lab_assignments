#include<iostream>
using namespace std;
int main()
{
    char input[11]= {"11/08/1996"};
    char* months_list[12] = {"January", "February", "March", "April", "May", "June",
                        "July", "August", "September", "October", "November", "December"};
    int month;
    cout<<"\nEnter the data in dd/mm/yyyy format\n";
    // cin.getline(input, 11);
    cout<<input<<endl;
    month = 10*(int(input[3]) - int('0')) + (int(input[4]) - int('0'));
    cout<<months_list[month - 1]<<endl;
}
