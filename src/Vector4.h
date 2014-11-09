#ifndef Vector4_H
#define Vector4_H

class Vector4{
	protected:
		double _x;
		double _y;
		double _z;
		double _k;
	public:
		Vector4();
		Vector4(double x, double y, double z, double k);
		~Vector4();
		double getX();
		double getY();
		double getZ();
		double getK();
		void set(double x, double y, double z, double k);
		Vector4 operator=(const Vector4 & vec);
		Vector4 operator*(double num);
		Vector4 operator+(const Vector4 & vec);
		Vector4 operator-(const Vector4 & vec);
		

};
#endif 

