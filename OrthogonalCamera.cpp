#include<vector>

using namespace std;
 
class OrthogonalCamera : public Camera{
   private:
        double _left;
        double _right;
        double _bottom;
        double _top;
 
   public:
 
      void update(){
      
      }
 
      void computeProjectionMatrix(){
      
      }
      
      void computeVisualizationMatrix(){
      
      }
      
      void OrthogonalCamera( double in_left, double in_right, double in_bottom, double in_top, double in_near, double in_far){
      
      }
      
      ~void OrthogonalCamera(){
            //DESTROY
      }
}; 
