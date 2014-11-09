#include "material.h"

material::material( Vector3 ambient,  Vector3 diffuse,
                    Vector3 specular,  double shininess)
        : ambient_(ambient),
          diffuse_(diffuse),
          specular_(specular),
          shininess_(shininess * 128.0) {}

 Vector3 &material::ambient()  { return ambient_; }
 Vector3 &material::diffuse()  { return diffuse_; }
 Vector3 &material::specular()  { return specular_; }
 
double material::shininess()  { return shininess_; }

void material::use()  {

    GLfloat ambienta[3]={ambient().getX(),ambient().getY(),ambient().getZ()};
    GLfloat diffusea[3]={diffuse().getX(), diffuse().getY(), diffuse().getZ()};
    GLfloat speculara[3]={specular().getX(), specular().getY(), specular().getZ()};

    glMaterialfv(GL_FRONT, GL_AMBIENT, ambienta);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, diffusea);
    glMaterialfv(GL_FRONT, GL_SPECULAR, speculara);
    glMaterialf(GL_FRONT, GL_SHININESS, shininess());
}
