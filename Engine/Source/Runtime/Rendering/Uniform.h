#pragma once

#include "Graphics/graphics.h"

struct Uniform
{
	//-----------------------------------------------------------------------------
	//  Name : ~Uniform ()
	/// <summary>
	/// 
	/// 
	/// 
	/// </summary>
	//-----------------------------------------------------------------------------
	~Uniform();

	//-----------------------------------------------------------------------------
	//  Name : dispose ()
	/// <summary>
	/// 
	/// 
	/// 
	/// </summary>
	//-----------------------------------------------------------------------------
	void dispose();

	//-----------------------------------------------------------------------------
	//  Name : isValid ()
	/// <summary>
	/// 
	/// 
	/// 
	/// </summary>
	//-----------------------------------------------------------------------------
	bool isValid() const;

	//-----------------------------------------------------------------------------
	//  Name : populate ()
	/// <summary>
	/// 
	/// 
	/// 
	/// </summary>
	//-----------------------------------------------------------------------------
	void populate(const std::string& _name, gfx::UniformType::Enum _type, std::uint16_t _num = 1);

	//-----------------------------------------------------------------------------
	//  Name : populate ()
	/// <summary>
	/// 
	/// 
	/// 
	/// </summary>
	//-----------------------------------------------------------------------------
	void populate(gfx::UniformHandle _handle);

	/// Uniform type
	gfx::UniformType::Enum type;
	/// Number of elements in array.
	uint16_t num;
	/// Uniform id
	std::string id;
	/// Internal handle
	gfx::UniformHandle handle = { gfx::invalidHandle };
};