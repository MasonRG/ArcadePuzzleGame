#pragma once

#include "BlockBase.h"

class I_Block : public BlockBase
{
public:
	void OrientFlatDown() override 
	{
		pieces[0] = Vector2Int(-1, 0);
		pieces[1] = Vector2Int(0, 0);
		pieces[2] = Vector2Int(1, 0);
		pieces[3] = Vector2Int(2, 0);
	}
	
	void OrientFlatLeft() override
	{
		pieces[0] = Vector2Int(1, -1);
		pieces[1] = Vector2Int(1, 0);
		pieces[2] = Vector2Int(1, 1);
		pieces[3] = Vector2Int(1, 2);
	}

	void OrientFlatUp() override
	{
		pieces[0] = Vector2Int(-1, 1);
		pieces[1] = Vector2Int(0, 1);
		pieces[2] = Vector2Int(1, 1);
		pieces[3] = Vector2Int(2, 1);
	}

	void OrientFlatRight() override
	{
		pieces[0] = Vector2Int(0, -1);
		pieces[1] = Vector2Int(0, 0);
		pieces[2] = Vector2Int(0, 1);
		pieces[3] = Vector2Int(0, 2);
	}
};