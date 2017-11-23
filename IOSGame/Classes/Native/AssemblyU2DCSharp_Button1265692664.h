#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// UnityEngine.Material
struct Material_t193706927;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Button
struct  Button_t1265692664  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Color Button::defaultColor
	Color_t2020392075  ___defaultColor_2;
	// UnityEngine.Color Button::selectedColor
	Color_t2020392075  ___selectedColor_3;
	// UnityEngine.Material Button::mat
	Material_t193706927 * ___mat_4;

public:
	inline static int32_t get_offset_of_defaultColor_2() { return static_cast<int32_t>(offsetof(Button_t1265692664, ___defaultColor_2)); }
	inline Color_t2020392075  get_defaultColor_2() const { return ___defaultColor_2; }
	inline Color_t2020392075 * get_address_of_defaultColor_2() { return &___defaultColor_2; }
	inline void set_defaultColor_2(Color_t2020392075  value)
	{
		___defaultColor_2 = value;
	}

	inline static int32_t get_offset_of_selectedColor_3() { return static_cast<int32_t>(offsetof(Button_t1265692664, ___selectedColor_3)); }
	inline Color_t2020392075  get_selectedColor_3() const { return ___selectedColor_3; }
	inline Color_t2020392075 * get_address_of_selectedColor_3() { return &___selectedColor_3; }
	inline void set_selectedColor_3(Color_t2020392075  value)
	{
		___selectedColor_3 = value;
	}

	inline static int32_t get_offset_of_mat_4() { return static_cast<int32_t>(offsetof(Button_t1265692664, ___mat_4)); }
	inline Material_t193706927 * get_mat_4() const { return ___mat_4; }
	inline Material_t193706927 ** get_address_of_mat_4() { return &___mat_4; }
	inline void set_mat_4(Material_t193706927 * value)
	{
		___mat_4 = value;
		Il2CppCodeGenWriteBarrier(&___mat_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
