#include <bits/stdc++>

using namespace std;

class LightSource
{
	private:
		vector<Vector4> _ambient;
		vector<Vector4> _diffuse;
		vector<Vector4> _specular;
		Vector4 _position;
		vector<Vector3> _direction;
		double _cut_off;
		double _exponent;
		GLenum _num;
		bool _state;
	
	public:
		LightSource(GLenum number)
		{
			//TODO: Complete me
		}
		
		~LightSource(GLenum number)
		{
			//TODO: Complete me
		}
		
		bool getState()
		{
			//
		}
		
		bool setState(bool state)
		{
			//
		}
		
		GLenum getNum()
		{
			//
		}
		
		void setPosition(const Vector4 & position)
		{
			//
		}
		
		void setDirection(const Vector3 & direction)
		{
			//
		}
		
		void setCutOff(double cut_off)
		{
			//
		}
		
		void setExponent(double exponent)
		{
			//
		}
		
		void setAmbient(const Vector4 & ambient)
		{
			//
		}
		
		void setDiffuse(const Vector4 & diffuse)
		{
			//
		}
		
		void setSpecular(const Vector4 & specular)
		{
			//
		}
		
		void draw()
		{
			//
		}
};


		
		
		
		
