#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RestartController
struct  RestartController_t4132649077  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean RestartController::gameOver
	bool ___gameOver_2;
	// System.Single RestartController::restartTimer
	float ___restartTimer_3;
	// UnityEngine.GameObject RestartController::restartButton
	GameObject_t1756533147 * ___restartButton_4;

public:
	inline static int32_t get_offset_of_gameOver_2() { return static_cast<int32_t>(offsetof(RestartController_t4132649077, ___gameOver_2)); }
	inline bool get_gameOver_2() const { return ___gameOver_2; }
	inline bool* get_address_of_gameOver_2() { return &___gameOver_2; }
	inline void set_gameOver_2(bool value)
	{
		___gameOver_2 = value;
	}

	inline static int32_t get_offset_of_restartTimer_3() { return static_cast<int32_t>(offsetof(RestartController_t4132649077, ___restartTimer_3)); }
	inline float get_restartTimer_3() const { return ___restartTimer_3; }
	inline float* get_address_of_restartTimer_3() { return &___restartTimer_3; }
	inline void set_restartTimer_3(float value)
	{
		___restartTimer_3 = value;
	}

	inline static int32_t get_offset_of_restartButton_4() { return static_cast<int32_t>(offsetof(RestartController_t4132649077, ___restartButton_4)); }
	inline GameObject_t1756533147 * get_restartButton_4() const { return ___restartButton_4; }
	inline GameObject_t1756533147 ** get_address_of_restartButton_4() { return &___restartButton_4; }
	inline void set_restartButton_4(GameObject_t1756533147 * value)
	{
		___restartButton_4 = value;
		Il2CppCodeGenWriteBarrier(&___restartButton_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
