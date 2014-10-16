#include <cmath>
#include <iostream>

#include "Collider.h"
#include "GameObject.h"
#include "GameManager.h"

Collider::Collider()
	: m_position(0.0f, 0.0f, 0.0f)
	, m_extension(0.0f, 0.0f, 0.0f)
{

}


Collider::~Collider()
{

}


void Collider::NotifyParent(GameObject* go1)
{

	go1->SetPosition(go1->GetStartPosition());
}


Collider::Collider(const Vector3 &p_position, const Vector3 &p_extension)
	: m_position(p_position)
	, m_extension(p_extension)
{

}


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

		if(fabs(Z) <= Q+P)
		{
			float dx = ceilf(fabs(C) - (A+B));
			float dy = ceilf(fabs(Z) - (Q+P));
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
				{
					dy = - dy;

				}
				p_offset._y = dy;
			}

			return true;
		}


	}
	return false;
}
