#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Image
struct Image_t2042527209;
// TimerScript/GameOverDelegate
struct GameOverDelegate_t3967709652;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TimerScript
struct  TimerScript_t1270803794  : public MonoBehaviour_t1158329972
{
public:
	// System.Single TimerScript::timer
	float ___timer_2;
	// System.Boolean TimerScript::startTime
	bool ___startTime_3;
	// System.Byte TimerScript::redValue
	uint8_t ___redValue_4;
	// UnityEngine.UI.Image TimerScript::timeClock
	Image_t2042527209 * ___timeClock_5;
	// System.Boolean TimerScript::gameOver
	bool ___gameOver_6;

public:
	inline static int32_t get_offset_of_timer_2() { return static_cast<int32_t>(offsetof(TimerScript_t1270803794, ___timer_2)); }
	inline float get_timer_2() const { return ___timer_2; }
	inline float* get_address_of_timer_2() { return &___timer_2; }
	inline void set_timer_2(float value)
	{
		___timer_2 = value;
	}

	inline static int32_t get_offset_of_startTime_3() { return static_cast<int32_t>(offsetof(TimerScript_t1270803794, ___startTime_3)); }
	inline bool get_startTime_3() const { return ___startTime_3; }
	inline bool* get_address_of_startTime_3() { return &___startTime_3; }
	inline void set_startTime_3(bool value)
	{
		___startTime_3 = value;
	}

	inline static int32_t get_offset_of_redValue_4() { return static_cast<int32_t>(offsetof(TimerScript_t1270803794, ___redValue_4)); }
	inline uint8_t get_redValue_4() const { return ___redValue_4; }
	inline uint8_t* get_address_of_redValue_4() { return &___redValue_4; }
	inline void set_redValue_4(uint8_t value)
	{
		___redValue_4 = value;
	}

	inline static int32_t get_offset_of_timeClock_5() { return static_cast<int32_t>(offsetof(TimerScript_t1270803794, ___timeClock_5)); }
	inline Image_t2042527209 * get_timeClock_5() const { return ___timeClock_5; }
	inline Image_t2042527209 ** get_address_of_timeClock_5() { return &___timeClock_5; }
	inline void set_timeClock_5(Image_t2042527209 * value)
	{
		___timeClock_5 = value;
		Il2CppCodeGenWriteBarrier(&___timeClock_5, value);
	}

	inline static int32_t get_offset_of_gameOver_6() { return static_cast<int32_t>(offsetof(TimerScript_t1270803794, ___gameOver_6)); }
	inline bool get_gameOver_6() const { return ___gameOver_6; }
	inline bool* get_address_of_gameOver_6() { return &___gameOver_6; }
	inline void set_gameOver_6(bool value)
	{
		___gameOver_6 = value;
	}
};

struct TimerScript_t1270803794_StaticFields
{
public:
	// TimerScript/GameOverDelegate TimerScript::gameOverDelegate
	GameOverDelegate_t3967709652 * ___gameOverDelegate_7;

public:
	inline static int32_t get_offset_of_gameOverDelegate_7() { return static_cast<int32_t>(offsetof(TimerScript_t1270803794_StaticFields, ___gameOverDelegate_7)); }
	inline GameOverDelegate_t3967709652 * get_gameOverDelegate_7() const { return ___gameOverDelegate_7; }
	inline GameOverDelegate_t3967709652 ** get_address_of_gameOverDelegate_7() { return &___gameOverDelegate_7; }
	inline void set_gameOverDelegate_7(GameOverDelegate_t3967709652 * value)
	{
		___gameOverDelegate_7 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverDelegate_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
