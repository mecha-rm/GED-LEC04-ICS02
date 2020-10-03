// the wrapper for the project
#pragma once
#ifndef __WRAPPER__
#define __WRAPPER__

#include "PluginSettings.h"
// #include "Vector2D.h"
#include "Vector3D.h"

#ifdef __cplusplus
extern "C"
{
#endif

	// gets the ID
	PLUGIN_API int GetID();

	// sets the ID
	PLUGIN_API void SetID(int id);

	// gets the position
	PLUGIN_API Vector3D GetPosition();

	// sets the position
	PLUGIN_API void SetPosition(const float x, const float y, const float z);

#ifdef __cplusplus
}
#endif

#endif /* defined (__WRAPPER__) */