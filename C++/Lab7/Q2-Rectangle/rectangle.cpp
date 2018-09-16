#include<iostream>
#include<math.h>
using namespace std;
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
    int dist(int x1, int y1, int x2, int y2)
    {
        int d;
        d = int(sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1)));
        return d;
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
            cout<<"\nThe entered coordinates do not lie in 20x20 box on first quadrant\n";
            exit(0);
        }
        checkRec();
    }
    // function to check if it is a rectangle of not
    void checkRec()
    {
        if(dist(x1, y1, x3, y3) == dist(x2, y2, x4, y4))
            cout<<"\nThe entered points form a rectangle\n";
        else
        {
            cout<<"\nThe entered points do not form a rectangle\n";
            exit(0);
        }
    }
    float getLength()
    {
        if(dist(x1, y1, x2, y2) > dist(x1, y1, x4, y4))
            return dist(x1, y1, x2, y2);
        else
            return dist(x1, y1, x4, y4);
    }
    float getWidth()
    {
        if(dist(x1, y1, x2, y2) < dist(x1, y1, x4, y4))
            return dist(x1, y1, x2, y2);
        else
            return dist(x1, y1, x4, y4);
    }
    float getPerimeter()
    {
        return (2*(getLength() + getWidth()));
    }
    float getArea()
    {
        return (getLength() * getWidth());
    }
    void checkSquare()
    {
        if(getLength() == getWidth())
            cout<<"\nThe rectangle is a square\n";
        else
            cout<<"\nThe rectangle is not a square\n";
    }
};
