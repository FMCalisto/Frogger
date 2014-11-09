#pragma once
#include <GL/glut.h>
#include "Vector3.h"
#include "Vector3.h"

class material {
     Vector3 ambient_;
     Vector3 diffuse_, specular_;
     double shininess_;

public:
    material( Vector3 ambient,  Vector3 diffuse,
              Vector3 specular,  double shininess);

     Vector3 &ambient() ;
     Vector3 &diffuse() ;
     Vector3 &specular() ;
    double shininess() ;

    void use() ;
};
