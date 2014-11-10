#include "materials.h"


//http://devernay.free.fr/cours/opengl/materials.html


 material materials::rubber_black(Vector3(0.02, 0.02, 0.02),
                                       Vector3(0.01, 0.01, 0.01),
                                       Vector3(0.4, 0.4, 0.4), 0.078125),
                                       
    materials::rubber_red(Vector3(0.05, 0, 0), Vector3(0.5, 0.4, 0.4),
                          Vector3(0.7, 0.04, 0.04), 0.078125),
                          
    materials::metal_gold(Vector3(0.24725, 0.1995, 0.0745),
                          Vector3(0.75164, 0.60648, 0.22648),
                          Vector3(0.628281, 0.555802, 0.366065), 0.4),
                          
    materials::perfect_reflector(Vector3(1.0, 1.0, 1.0), 
                                 Vector3(1.0, 1.0, 1.0),
                                 Vector3(1.0, 1.0, 1.0), 0.2),
                                 
    materials::skin_green(Vector3(0.0, 0.05, 0.0), 
                          Vector3(0.4, 0.5, 0.4), 
                          Vector3(0.04, 0.7, 0.04), 0.078125),

    materials::cyan_plastic(Vector3(0.0, 0.1, 0.06), 
                          Vector3(0.0, 0.50980392, 0.50980392), 
                          Vector3(0.50196078, 0.50196078, 0.50196078), 0.25*128),
                          
    materials::road_black(Vector3(0.0, 0.0, 0.0), 
                             Vector3(0.01, 0.01, 0.01), 
                             Vector3(0.50, 0.50, 0.50), 0.25);
                             
                             
