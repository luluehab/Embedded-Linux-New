#include <iostream>
#include <cstdlib>
#include <string>

class Vertex
{

private:
    int x;
    int y;

public:
    void setVertices()
    {
        x = std::rand() % 201 - 100;
        y = std::rand() % 201 - 100;
    }
    int getX() const
    {
        return x;
    }
    int getY() const
    {
        return y;
    }
    std::string getVertex()
    {
        std::string ver;
        std::string X = std::to_string(x);
        std::string Y = std::to_string(y);
        ver = "(" + X + "," + Y + ")";
        return ver;
    }
};

int main()
{
   Vertex v1;
   v1.setVertices();
   std::cout<<"point 1 is (" <<v1.getX() <<"," << v1.getY() << ")" <<"\n" ;

   Vertex v2;
   v2.setVertices();
   std::cout<<"point 2 is " << v2.getVertex() <<"\n";

    return 0;
}