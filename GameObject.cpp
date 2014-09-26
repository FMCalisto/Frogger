using namespace std;

#include <bits/stdc++>

class GameObject: public Entity{
	public:		
		void GameObject();
		void ~GameObject();

		void draw();

		void update(double delta_t);
};
