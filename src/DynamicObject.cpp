using namespace std;

#include <bits/stdc++>

class DynamicObject: public GameObject{
	protected:
		vector<Vector3> _speed;

	public:
		DynamicObject();
		~DynamicObject();

		void update(double delta_t);

		void setspeed(const Vector3 &speed);
		void setSpeed(double x, double y, double z);

		Vector3 getSpeed(){};

};
