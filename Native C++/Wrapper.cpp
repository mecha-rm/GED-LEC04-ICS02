#include "Wrapper.h"
#include "GameObject.h"

// game object
GameObject gameObject;

// gets the ID of the game object.
PLUGIN_API int GetID()
{
	return gameObject.GetID();
}

// sets the ID of the game object.
PLUGIN_API void SetID(const int id)
{
	gameObject.SetID(id);
}

// gets the position
PLUGIN_API Vector3D GetPosition()
{
	return gameObject.GetPosition();
}

// sets the position
PLUGIN_API void SetPosition(const float x, const float y, const float z)
{
	gameObject.SetPosition(x, y, z);
}

