#pragma once
#include <d3d11.h>

class SwapChain
{
	SwapChain();
	bool init(HWND hwnd, UINT width, UINT height);
	bool release();
	~SwapChain();
};

