#ifndef OBJECT2D_H
#define OBJECT2D_H

#include "Vertex.h"

type std::vector<float>(3) Vertex;
class Object2D{
    public: 
        std::tuple<int, int> FrontEdgeList;
        std::vector<int> FrontHiddenVertex;
        std::tuple<int, int> TopEdgeList;
        std::vector<int> TopHiddenVertex;
        std::tuple<int, int> SideEdgeList;
        std::vector<int> SideHiddenVertex;
        std::vector<Vertex> Vertices;
};

#endif
