#include "SwapChain.h"
#include "GraphicsEngine.h"

SwapChain::SwapChain()
{
}

bool SwapChain::init(HWND hwnd, UINT width, UINT height)
{
	ID3D11Device* device = GraphicsEngine::get()->m_d3d_device;
	DXGI_SWAP_CHAIN_DESC desc;
	ZeroMemory(&desc, sizeof(desc));
	desc.BufferCount = 1;
	desc.BufferDesc.Width = ;
	desc.BufferDesc.Height = ;

	GraphicsEngine::get()->m_dxgi_factory->CreateSwapChain(device, );
	return true;
}

bool SwapChain::release()
{
	return true;
}

SwapChain::~SwapChain()
{
}
