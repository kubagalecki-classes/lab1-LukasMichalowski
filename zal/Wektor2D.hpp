class Wektor2D
{
private:
double x,y;
public:


    Wektor2D() { x = 0; y =0;} // konstruktor domyslny
    void setX(double a) { x=a; } //setter X
    double getX() {return x;} // getter X
    void setY(double a) { y=a; } // setter Y
    double getY() {return y;} // getter Y
    Wektor2D(double x1 ,double y1)
    {
        x = x1;
        y = y1;
    } // konsturktor parametryczny

};

Wektor2D operator+(Wektor2D a, Wektor2D b) // dodoawnie wektorow
{
    return Wektor2D{a.getX()+b.getX(),a.getY()+b.getY()};
}
double operator*(Wektor2D a, Wektor2D b) // iloczyn skalarny
{
    return a.getX()*b.getX()+a.getY()*b.getY();
}