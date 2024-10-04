/**
 * Title: Lab 14: Color Class
 * Description: Create a Color class that manages RGB values using private member variables, with setter, getter, and print methods. In the main function, several Color objects are created, populated, and their values are displayed using the print method.
 * Author: Talha Ahmed
 * Lab: 16
 * Class: COMSC-210
 */


#include <iostream>
using namespace std;

//Define color class
class Color {
private:
    int red, green, blue;

public:
    //default Constructor
    Color() : red(0), green(0), blue(0) {}
    //parameterized constructor
    Color (int r, int g, int b) : red (r), green (g), blue(b) {}
    //partial constructor
    Color (int r) : red (r), green(0), blue (0) {}

    //Setter methods for colors
    void setRed(int r) { red = r;}
    void setGreen(int g) { green = g;}
    void setBlue (int b) { blue =b;}
    
    //Getter methods for the colors
    int getRed () const {return red;}
    int getGreen () const {return green;}
    int getBlue () const {return blue;}

    //Print method to display color values
    void print() const {
        cout << "Color(RGB)" << red << ", "<< blue << endl;
    }
};

int main() {
    //Create multiple color objects
    Color color1(255,0,0); //red
    Color color2(0,255,0); //green
    Color color3(0,0,255); //blue
    Color color4; // default bllack
    Color color5 (128);

    //populate color
    color4.setRed(128);
    color4.setGreen(128);
    color4.setBlue(128); //gray

    //print color value
    color1.print();
    color2.print();
    color3.print();
    color4.print();
    color5.print();

    return 0;
}
