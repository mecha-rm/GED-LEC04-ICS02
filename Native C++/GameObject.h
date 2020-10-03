#pragma once
#ifndef  __GAME_OBJECT__
#define __GAME_OBJECT__

#include "PluginSettings.h"
// #include "Vector2D.h"
#include "Vector3D.h"

// Game Object Class
class PLUGIN_API GameObject
{
public:
	// Constructor
	GameObject();

	// Getters and Setters
	// get the ID
	int GetID() const;
	
	// set the ID
	void SetID(int id = 0);

	// get the position
	Vector3D GetPosition() const;

	// set the position
	// void SetPosition(float x = 0.0F, float y = 0.0F);
	void SetPosition(float x = 0.0F, float y = 0.0F, float z = 0.0F);

private:
	int m_id; // id value
	Vector3D m_position; // position value
};

#endif // ! __GAME_OBJECT__
