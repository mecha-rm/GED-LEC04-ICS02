#include "GameObject.h"

// constructor
GameObject::GameObject()
{
	SetID();
	SetPosition();
}

// gets the ID
int GameObject::GetID() const
{
	return m_id;
}

// sets the ID
void GameObject::SetID(const int id)
{
	m_id = id;
}

// gets the position
Vector3D GameObject::GetPosition() const
{
	return m_position;
}

// sets the position
void GameObject::SetPosition(const float x, const float y, const float z)
{
	m_position.x = x;
	m_position.y = y;
	m_position.z = z;
}