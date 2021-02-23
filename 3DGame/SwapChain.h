#pragma once
#include <d3d11.h>

class DeviceContext;
class SwapChain
{
public:
	SwapChain();
	//init swapchain for window
	bool init(HWND hwnd, UINT width, UINT height);
	bool present(bool vsync);
	bool release();
	~SwapChain();
private:
	IDXGISwapChain* m_swap_chain;
	ID3D11RenderTargetView* m_target_view;
	friend class DeviceContext;
};

