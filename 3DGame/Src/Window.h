#pragma once
#include <Windows.h>

class Window
{
public:
	Window();

	bool init();
	bool broadcast();
	bool release();
	bool isRunning();

	//event methods
	virtual void onCreate();
	virtual void onUpdate();
	virtual void onDestroy();

	~Window();

protected:
	HWND m_hwnd;
	bool m_isRunning;
};

