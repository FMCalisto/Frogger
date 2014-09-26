#include<vector>

using namespace std;
 
class Camera: public Entity{
   protected:
      vector<Vector3> _up;
      vector<Vector3> _at;
      vector<double> _near;
      vector<double> _far;
 
   public:
 
      void Camera( double near, double far){
         
      }
 
      ~void Camera(){
         //DESTROY
      }
      
      void update(){
      
      }
      
      void computeProjectionMatrix(){
      
      }
      
      void computeVisualizationMatrix(){
      
      }
}; 
