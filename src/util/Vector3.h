#ifndef VECTOR3_H
#define VECTOR3_H

class Vector3
{
	protected:
		double _x, _y, _z;
	
	public:
		Vector3();
		Vector3(double x, double y, double z);
		~Vector3();
	
	double getX() const;
	double getY() const;
	double getZ() const;
	
	void set(double x, double y, double z);
	
	Vector3 operator=(const Vector3 & vec);
	Vector3 operator*(double num);
	Vector3 operator+(const Vector3 & vec);
	Vector3 operator-(const Vector3 & vec);
};

#endif
