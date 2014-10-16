#ifndef GameObject_H
#define GameObject_H

#include"Entity.h"
#include "Vector3.h"

static double lastUpdate=0.4;


//using namespace std;


class GameObject : public Entity
{
	protected:
	//double speedX,speedY;
	Vector3* vel;
	public:		
		GameObject();
		~GameObject();

	    virtual void draw() = 0;

		void updateX(double delta_t);
		void updateY(double delta_t);
		
		void SetStartPosition(const Vector2 &m_position);
		Vector3 GetStartPosition();
		bool HasCollider() const;
		Collider* GetCollider();
};
#endif 
