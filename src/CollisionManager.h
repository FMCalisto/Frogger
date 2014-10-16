#pragma once

#include <vector>

class GameObject;
class Collider;
class Vector3;
class GameObjectManager;

class CollisionManager
{
	public:
		CollisionManager(GameObjectManager *gom);
		~CollisionManager();

		void CheckCollision();
		Collider *CreateCollider(Vector3 &position, Vector3 &extension);
		void DestroyCollider(Collider *collider);

	protected:

		int score; //the lower the better
		bool once;
		GameObjectManager *m_gom;
	//	int amount_of_objects;
		std::vector<Collider*> m_object;

};
