#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"
#include "UnityEngine_UnityEngine_RaycastHit87180320.h"

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchInput
struct  TouchInput_t3565744501  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.LayerMask TouchInput::touchInputMask
	LayerMask_t3188175821  ___touchInputMask_2;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> TouchInput::touchList
	List_1_t1125654279 * ___touchList_3;
	// UnityEngine.GameObject[] TouchInput::touchesOld
	GameObjectU5BU5D_t3057952154* ___touchesOld_4;
	// UnityEngine.RaycastHit TouchInput::hit
	RaycastHit_t87180320  ___hit_5;

public:
	inline static int32_t get_offset_of_touchInputMask_2() { return static_cast<int32_t>(offsetof(TouchInput_t3565744501, ___touchInputMask_2)); }
	inline LayerMask_t3188175821  get_touchInputMask_2() const { return ___touchInputMask_2; }
	inline LayerMask_t3188175821 * get_address_of_touchInputMask_2() { return &___touchInputMask_2; }
	inline void set_touchInputMask_2(LayerMask_t3188175821  value)
	{
		___touchInputMask_2 = value;
	}

	inline static int32_t get_offset_of_touchList_3() { return static_cast<int32_t>(offsetof(TouchInput_t3565744501, ___touchList_3)); }
	inline List_1_t1125654279 * get_touchList_3() const { return ___touchList_3; }
	inline List_1_t1125654279 ** get_address_of_touchList_3() { return &___touchList_3; }
	inline void set_touchList_3(List_1_t1125654279 * value)
	{
		___touchList_3 = value;
		Il2CppCodeGenWriteBarrier(&___touchList_3, value);
	}

	inline static int32_t get_offset_of_touchesOld_4() { return static_cast<int32_t>(offsetof(TouchInput_t3565744501, ___touchesOld_4)); }
	inline GameObjectU5BU5D_t3057952154* get_touchesOld_4() const { return ___touchesOld_4; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_touchesOld_4() { return &___touchesOld_4; }
	inline void set_touchesOld_4(GameObjectU5BU5D_t3057952154* value)
	{
		___touchesOld_4 = value;
		Il2CppCodeGenWriteBarrier(&___touchesOld_4, value);
	}

	inline static int32_t get_offset_of_hit_5() { return static_cast<int32_t>(offsetof(TouchInput_t3565744501, ___hit_5)); }
	inline RaycastHit_t87180320  get_hit_5() const { return ___hit_5; }
	inline RaycastHit_t87180320 * get_address_of_hit_5() { return &___hit_5; }
	inline void set_hit_5(RaycastHit_t87180320  value)
	{
		___hit_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
