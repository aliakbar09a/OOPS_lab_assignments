#include<iostream>
#include"rectangle.cpp"
int main()
{
    Rectangle R;
    cout<<"\nThe length of the rectangle is : "<< R.getLength();
    cout<<"\nThe width of the rectangle is : "<< R.getWidth();
    cout<<"\nThe perimeter of the rectangle is : "<< R.getPerimeter();
    cout<<"\nThe area of the rectangle is : "<< R.getArea();
    R.checkSquare();
}
