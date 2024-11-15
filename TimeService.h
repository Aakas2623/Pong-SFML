#pragma once
#include <chrono>
using namespace std;

class TimeService
{
private:
	chrono::time_point<chrono::steady_clock> previous_time;
	float delta_time;

	void UpdateDeltaTime();
	float CalculateDeltaTime();
	void UpdatePreviousTime(); // Update previous_time to the current time

public:

	void Initialize();
	void Update();
	float GetDeltaTime();
};