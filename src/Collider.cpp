#include <cmath>
#include <iostream>

#include "Collider.h"
#include "GameObject.h"
#include "GameManager.h"

Collider::Collider()
<<<<<<< HEAD
	: m_position(0.0f, 0.0f)
	, m_extension(0.0f, 0.0f)
=======
	: m_position(0.0f, 0.0f, 0.0f)
	, m_extension(0.0f, 0.0f, 0.0f)
>>>>>>> origin/master
{

}

<<<<<<< HEAD
=======

>>>>>>> origin/master
Collider::~Collider()
{

}

<<<<<<< HEAD
=======

>>>>>>> origin/master
void Collider::NotifyParent(GameObject* go1)
{

	go1->SetPosition(go1->GetStartPosition());
}

<<<<<<< HEAD
Collider::Collider(const Vector2 &p_position, const Vector2 &p_extension)
=======

Collider::Collider(const Vector3 &p_position, const Vector3 &p_extension)
>>>>>>> origin/master
	: m_position(p_position)
	, m_extension(p_extension)
{

}

<<<<<<< HEAD
bool Collider::Overlap(const Collider &p_other, Vector2 &p_offset)
{
	float A = m_extension.m_x * 0.5f;
	float B = p_other.m_extension.m_x *0.5f;
	float C = (m_position.m_x + A) - (p_other.m_position.m_x + B);

	if(fabs(C) < A+B)
	{
		float Q = m_extension.m_y *0.5f;
		float P = p_other.m_extension.m_y *0.5f;
		float Z = (m_position.m_y + Q ) - ( p_other.m_position.m_y + P);
=======

bool Collider::Overlap(const Collider &p_other, Vector3 &p_offset)
{
	float A = m_extension._x * 0.5f;
	float B = p_other.m_extension._x *0.5f;
	float C = (m_position._x + A) - (p_other.m_position._x + B);

	if(fabs(C) < A+B)
	{
		float Q = m_extension._y *0.5f;
		float P = p_other.m_extension._y *0.5f;
		float Z = (m_position._y + Q ) - ( p_other.m_position._y + P);
>>>>>>> origin/master

		if(fabs(Z) <= Q+P)
		{
			float dx = ceilf(fabs(C) - (A+B));
			float dy = ceilf(fabs(Z) - (Q+P));
<<<<<<< HEAD
			
			if (dx >= dy)
			{
				if (m_position.m_x < p_other.m_position.m_x)
				{
					dx = -dx;
				}
				p_offset.m_x = dx;

			}else
			{
				if(m_position.m_y > p_other.m_position.m_y)
=======
			if (dx >= dy)
			{
				if (m_position._x < p_other.m_position._x)
				{
					dx = -dx;
				}
				p_offset._x = dx;

			}else
			{
				if(m_position._y > p_other.m_position._y)
>>>>>>> origin/master
				{
					dy = - dy;

				}
<<<<<<< HEAD

				p_offset.m_y = dy;
=======
				p_offset._y = dy;
>>>>>>> origin/master
			}

			return true;
		}


	}
<<<<<<< HEAD
	
	return false;
}
=======
	return false;
}
>>>>>>> origin/master
