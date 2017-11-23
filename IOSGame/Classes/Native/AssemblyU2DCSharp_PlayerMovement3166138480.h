#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerMovement
struct  PlayerMovement_t3166138480  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform PlayerMovement::player
	Transform_t3275118058 * ___player_2;
	// UnityEngine.Vector2 PlayerMovement::fp
	Vector2_t2243707579  ___fp_3;
	// UnityEngine.Vector2 PlayerMovement::lp
	Vector2_t2243707579  ___lp_4;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___player_2)); }
	inline Transform_t3275118058 * get_player_2() const { return ___player_2; }
	inline Transform_t3275118058 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(Transform_t3275118058 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_fp_3() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___fp_3)); }
	inline Vector2_t2243707579  get_fp_3() const { return ___fp_3; }
	inline Vector2_t2243707579 * get_address_of_fp_3() { return &___fp_3; }
	inline void set_fp_3(Vector2_t2243707579  value)
	{
		___fp_3 = value;
	}

	inline static int32_t get_offset_of_lp_4() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___lp_4)); }
	inline Vector2_t2243707579  get_lp_4() const { return ___lp_4; }
	inline Vector2_t2243707579 * get_address_of_lp_4() { return &___lp_4; }
	inline void set_lp_4(Vector2_t2243707579  value)
	{
		___lp_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
