#include <iostream>
#include <cstdlib>

struct Vertex
{
    int x;
    int y;
};

int main()
{

    int verticesNum = 5;          // number of vertices
    Vertex vertices[verticesNum]; // array to hold the vertices

    // Generate random vertices in range [-100, 100]
    for (int i = 0; i < verticesNum; ++i)
    {
        vertices[i].x = std::rand() % 201 - 100;
        vertices[i].y = std::rand() % 201 - 100;
    }

    // Print the vertices
    for (int i = 0; i < verticesNum; ++i)
    {
        std::cout << "Vertex " << i + 1 << ": (" << vertices[i].x << ", " << vertices[i].y << ")\n";
    }

    return 0;
}