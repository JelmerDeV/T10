#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// CubeController/StartDelegate
struct StartDelegate_t3034858427;
// UnityEngine.TextMesh
struct TextMesh_t1641806576;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CubeController
struct  CubeController_t3289567351  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean CubeController::gameOver
	bool ___gameOver_2;
	// System.Int32 CubeController::score
	int32_t ___score_3;
	// System.Int32 CubeController::highScore
	int32_t ___highScore_4;
	// System.Single CubeController::restartTimer
	float ___restartTimer_5;
	// UnityEngine.TextMesh CubeController::highScoreText
	TextMesh_t1641806576 * ___highScoreText_7;

public:
	inline static int32_t get_offset_of_gameOver_2() { return static_cast<int32_t>(offsetof(CubeController_t3289567351, ___gameOver_2)); }
	inline bool get_gameOver_2() const { return ___gameOver_2; }
	inline bool* get_address_of_gameOver_2() { return &___gameOver_2; }
	inline void set_gameOver_2(bool value)
	{
		___gameOver_2 = value;
	}

	inline static int32_t get_offset_of_score_3() { return static_cast<int32_t>(offsetof(CubeController_t3289567351, ___score_3)); }
	inline int32_t get_score_3() const { return ___score_3; }
	inline int32_t* get_address_of_score_3() { return &___score_3; }
	inline void set_score_3(int32_t value)
	{
		___score_3 = value;
	}

	inline static int32_t get_offset_of_highScore_4() { return static_cast<int32_t>(offsetof(CubeController_t3289567351, ___highScore_4)); }
	inline int32_t get_highScore_4() const { return ___highScore_4; }
	inline int32_t* get_address_of_highScore_4() { return &___highScore_4; }
	inline void set_highScore_4(int32_t value)
	{
		___highScore_4 = value;
	}

	inline static int32_t get_offset_of_restartTimer_5() { return static_cast<int32_t>(offsetof(CubeController_t3289567351, ___restartTimer_5)); }
	inline float get_restartTimer_5() const { return ___restartTimer_5; }
	inline float* get_address_of_restartTimer_5() { return &___restartTimer_5; }
	inline void set_restartTimer_5(float value)
	{
		___restartTimer_5 = value;
	}

	inline static int32_t get_offset_of_highScoreText_7() { return static_cast<int32_t>(offsetof(CubeController_t3289567351, ___highScoreText_7)); }
	inline TextMesh_t1641806576 * get_highScoreText_7() const { return ___highScoreText_7; }
	inline TextMesh_t1641806576 ** get_address_of_highScoreText_7() { return &___highScoreText_7; }
	inline void set_highScoreText_7(TextMesh_t1641806576 * value)
	{
		___highScoreText_7 = value;
		Il2CppCodeGenWriteBarrier(&___highScoreText_7, value);
	}
};

struct CubeController_t3289567351_StaticFields
{
public:
	// CubeController/StartDelegate CubeController::startDelegate
	StartDelegate_t3034858427 * ___startDelegate_6;

public:
	inline static int32_t get_offset_of_startDelegate_6() { return static_cast<int32_t>(offsetof(CubeController_t3289567351_StaticFields, ___startDelegate_6)); }
	inline StartDelegate_t3034858427 * get_startDelegate_6() const { return ___startDelegate_6; }
	inline StartDelegate_t3034858427 ** get_address_of_startDelegate_6() { return &___startDelegate_6; }
	inline void set_startDelegate_6(StartDelegate_t3034858427 * value)
	{
		___startDelegate_6 = value;
		Il2CppCodeGenWriteBarrier(&___startDelegate_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
