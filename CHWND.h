#pragma once
#include <Windows.h>
#include <iostream>
#include <random>
#include <thread>
#include <chrono>

class CHWND
{
public:

	CHWND(HWND _hwnd)
	{
		this->hwnd = _hwnd;
	}

	HWND GetHWND();
	DWORD GetRandomBiggerDelay(int delay_min, int delay_max);
	void RandomBiggerDelay();
	DWORD GetRandomDelay(int delay_min, int delay_max);
	void RandomDelay();
	void SendString(std::string msg);

private:
	HWND hwnd = nullptr;
};

