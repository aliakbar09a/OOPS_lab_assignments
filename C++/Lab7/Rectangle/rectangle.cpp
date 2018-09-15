#include<iostream>
class Rectangle
{
private:
    int x1, x2, x3, x4, y1, y2, y3, y4;
public:
    Rectangle()
    {
        setCordi();
    }
    int checkCondition(int x, int y)
    {
        if((x >= 0 && x <= 20) && (y >= 0 && y <= 20))
            return 1;
        else
            return 0;
    }
    void setCordi()
    {
        cout<<"\nEnter coordinates in adjacent order";
        cout<<"\nEnter first coordinate : ";
        cin>>x1>>y1;
        cout<<"\nEnter second coordinate : ";
        cin>>x2>>y2;
        cout<<"\nEnter third coordinate : ";
        cin>>x3>>y3;
        cout<<"\nEnter fourth coordinate : ";
        cin>>x4>>y4;
        // checking if points lie in the specified region
        if(!(checkCondition(x1, y1) && checkCondition(x2, y2) &&
            checkCondition(x3, y3) && checkCondition(x4, y4)))
        {
            cout<<"\nThe entered coordinates do not lie in 20x20 box on first quadrant";
            exit(0);
        }
        // checking if it is a rectangle of not
    }
};
