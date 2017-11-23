#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.TextMesh
struct TextMesh_t1641806576;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FlashingText
struct  FlashingText_t892091787  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.TextMesh FlashingText::flashingText
	TextMesh_t1641806576 * ___flashingText_2;
	// System.Boolean FlashingText::flash
	bool ___flash_3;

public:
	inline static int32_t get_offset_of_flashingText_2() { return static_cast<int32_t>(offsetof(FlashingText_t892091787, ___flashingText_2)); }
	inline TextMesh_t1641806576 * get_flashingText_2() const { return ___flashingText_2; }
	inline TextMesh_t1641806576 ** get_address_of_flashingText_2() { return &___flashingText_2; }
	inline void set_flashingText_2(TextMesh_t1641806576 * value)
	{
		___flashingText_2 = value;
		Il2CppCodeGenWriteBarrier(&___flashingText_2, value);
	}

	inline static int32_t get_offset_of_flash_3() { return static_cast<int32_t>(offsetof(FlashingText_t892091787, ___flash_3)); }
	inline bool get_flash_3() const { return ___flash_3; }
	inline bool* get_address_of_flash_3() { return &___flash_3; }
	inline void set_flash_3(bool value)
	{
		___flash_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
