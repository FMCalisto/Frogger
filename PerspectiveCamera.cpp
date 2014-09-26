#include<vector>

using namespace std;
 
class PerspectiveCamera: public Camera{
   private:
        double _fovy;
        double _aspect;
 
   public:
 
      void update(){
      
      }
 
      void computeProjectionMatrix(){
      
      }
      
      void computeVisualizationMatrix(){
      
      }
      
      void PerspectiveCamera( double in_fovy, double in_aspect, double inzNear, double in_zFar){
      
      }
      
      ~void PerspectiveCamera(){
            //DESTROY
      }
}; 
