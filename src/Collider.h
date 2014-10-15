#pragma once

#include "Vector3.h"

class GameObject;

class Collider 
{
	public:
		Collider();
		Collider(const Vector2 &p_position, const Vector2 &p_exstension);
		~Collider();

		bool Overlap(const Collider &p_other, Vector2 &p_offset);
		void NotifyParent(GameObject* go1);

		GameObject *m_xobject;
		Vector3 m_position;
		Vector3 m_extension;

	private:

		
};