// This file was automatically generated by the actionheadergen tool.
// Please do not manually edit this file.
#ifndef COPTER_ACTIONS_H
#define COPTER_ACTIONS_H

namespace CopterScript
{
#ifdef COMPAT_MODE
enum Script : int {
#else
enum Script {
#endif
	c_noneCopter = -1,

	c__StartUp = 0,
	c_Helicopter_Actor = 1,

	c_Info_Ctl = 5,
	c_Exit_Ctl = 6,
	c_ShelfUp_Ctl = 7,
	c_Platform_Ctl = 8,

	c_Background = 64,
	c_ColorBook_Bitmap = 65,
	c_ShelfUp_Up = 66,
	c_ShelfUp_Up_Bitmap = 67,
	c_ShelfUp_Down = 68,
	c_ShelfUp_Down_Bitmap = 69,
	c_PlatformUp_Bitmap = 70,
	c_PlatformLeft = 71,
	c_PlatformLeft_Bitmap = 72,
	c_Rotate_Sound = 73,
	c_Yellow_Ctl = 74,
	c_Yellow_Up_Bitmap = 75,
	c_Yellow_Down_Bitmap = 76,
	c_Red_Ctl = 77,
	c_Red_Up_Bitmap = 78,
	c_Red_Down_Bitmap = 79,
	c_Blue_Ctl = 80,
	c_Blue_Up_Bitmap = 81,
	c_Blue_Down_Bitmap = 82,
	c_Green_Ctl = 83,
	c_Green_Up_Bitmap = 84,
	c_Green_Down_Bitmap = 85,
	c_Gray_Ctl = 86,
	c_Gray_Up_Bitmap = 87,
	c_Gray_Down_Bitmap = 88,
	c_Black_Ctl = 89,
	c_Black_Up_Bitmap = 90,
	c_Black_Down_Bitmap = 91,
	c_Decals_Ctl = 92,
	c_CHWIND_State_0 = 93,
	c_CHWIND_State_0_Bitmap = 94,
	c_CHWIND_State_1 = 95,
	c_CHWIND_State_1_Bitmap = 96,
	c_CHWIND_Texture_1 = 97,
	c_CHWIND_State_3 = 98,
	c_CHWIND_State_3_Bitmap = 99,
	c_CHWIND_Texture_3 = 100,
	c_CHWIND_State_2 = 101,
	c_CHWIND_State_2_Bitmap = 102,
	c_CHWIND_Texture_2 = 103,
	c_CHWIND_State_4 = 104,
	c_CHWIND_State_4_Bitmap = 105,
	c_CHWIND_Texture_4 = 106,
	c_Decals_Ctl1 = 107,
	c_CHJETL_State_0 = 108,
	c_CHJETL_State_0_Bitmap = 109,
	c_CHJETL_State_1 = 110,
	c_CHJETL_State_1_Bitmap = 111,
	c_CHJETL_Texture_1 = 112,
	c_CHJETL_State_3 = 113,
	c_CHJETL_State_3_Bitmap = 114,
	c_CHJETL_Texture_3 = 115,
	c_CHJETL_State_2 = 116,
	c_CHJETL_State_2_Bitmap = 117,
	c_CHJETL_Texture_2 = 118,
	c_CHJETL_State_4 = 119,
	c_CHJETL_State_4_Bitmap = 120,
	c_CHJETL_Texture_4 = 121,
	c_Decals_Ctl2 = 122,
	c_CHJETR_State_0 = 123,
	c_CHJETR_State_0_Bitmap = 124,
	c_CHJETR_State_1 = 125,
	c_CHJETR_State_1_Bitmap = 126,
	c_CHJETR_Texture_1 = 127,
	c_CHJETR_State_3 = 128,
	c_CHJETR_State_3_Bitmap = 129,
	c_CHJETR_Texture_3 = 130,
	c_CHJETR_State_2 = 131,
	c_CHJETR_State_2_Bitmap = 132,
	c_CHJETR_Texture_2 = 133,
	c_CHJETR_State_4 = 134,
	c_CHJETR_State_4_Bitmap = 135,
	c_CHJETR_Texture_4 = 136,
	c_Info_Up_Bitmap = 137,
	c_Info_Down_Bitmap = 138,
	c_Exit_Up_Bitmap = 139,
	c_Exit_Down_Bitmap = 140,
	c_Shelf_Sound = 141,
	c_PlaceBrick_Sound = 142,
	c_GetBrick_Sound = 143,
	c_Paint_Sound = 144,
	c_Decal_Sound = 145,
	c_Build_Animation = 146,
	c_Build_Anim0 = 147,
	c_Build_Anim1 = 148,
	c_Build_Anim2 = 149,
	c_Chptr_Model = 150,
	c_IPS001D2_Wav_500 = 151,
	c_IPS001D2_Pho_500 = 152,
	c_ips001d2_0_sfx = 153,
	c_ips001d2_1_sfx = 154,
	c_ips001d2_2_sfx = 155,
	c_ips001d2_3_sfx = 156,
	c_ips001d2_4_sfx = 157,
	c_ips001d2_5_sfx = 158,
	c_ips001d2_6_sfx = 159,
	c_ips001d2_7_sfx = 160,
	c_ips001d2_8_sfx = 161,
	c_ips001d2_9_sfx = 162,
	c_ips001d2_10_sfx = 163,
	c_ips001d2_11_sfx = 164,
	c_ips001d2_12_sfx = 165,
	c_ips001d2_13_sfx = 166,
	c_ips001d2_14_sfx = 167,
	c_ips001d2_15_sfx = 168,
	c_ips001d2_16_sfx = 169,
	c_ips001d2_17_sfx = 170,
	c_ips001d2_18_sfx = 171,
	c_ips001d2_Anim = 172,
	c_IPSxx1D2_Wav_501 = 173,
	c_IPSxx1D2_Pho_501 = 174,
	c_ipsxx1d2_0_sfx = 175,
	c_ipsxx1d2_1_sfx = 176,
	c_ipsxx1d2_2_sfx = 177,
	c_ipsxx1d2_3_sfx = 178,
	c_ipsxx1d2_Anim = 179,
	c_IPS002D2_Wav_502 = 180,
	c_IPS002D2_Pho_502 = 181,
	c_ips002d2_0_sfx = 182,
	c_ips002d2_1_sfx = 183,
	c_ips002d2_2_sfx = 184,
	c_ips002d2_3_sfx = 185,
	c_ips002d2_Anim = 186,
	c_IPS003D2_Wav_503 = 187,
	c_IPS003D2_Pho_503 = 188,
	c_ips003d2_0_sfx = 189,
	c_ips003d2_1_sfx = 190,
	c_ips003d2_2_sfx = 191,
	c_ips003d2_3_sfx = 192,
	c_ips003d2_4_sfx = 193,
	c_ips003d2_5_sfx = 194,
	c_ips003d2_Anim = 195,
	c_IPS004D2_Wav_504 = 196,
	c_IPS004D2_Pho_504 = 197,
	c_ips004d2_0_sfx = 198,
	c_ips004d2_1_sfx = 199,
	c_ips004d2_2_sfx = 200,
	c_ips004d2_3_sfx = 201,
	c_ips004d2_4_sfx = 202,
	c_ips004d2_Anim = 203,
	c_IPS005D2_Wav_505 = 204,
	c_IPS005D2_Pho_505 = 205,
	c_ips005d2_0_sfx = 206,
	c_ips005d2_1_sfx = 207,
	c_ips005d2_2_sfx = 208,
	c_ips005d2_3_sfx = 209,
	c_ips005d2_4_sfx = 210,
	c_ips005d2_5_sfx = 211,
	c_ips005d2_6_sfx = 212,
	c_ips005d2_7_sfx = 213,
	c_ips005d2_Anim = 214,
	c_IPS006D2_Wav_506 = 215,
	c_IPS006D2_Pho_506 = 216,
	c_ips006d2_0_sfx = 217,
	c_ips006d2_1_sfx = 218,
	c_ips006d2_2_sfx = 219,
	c_ips006d2_3_sfx = 220,
	c_ips006d2_4_sfx = 221,
	c_ips006d2_5_sfx = 222,
	c_ips006d2_Anim = 223,
	c_SLP01XD2_Wav_507 = 224,
	c_SLP01XD2_Pho_507 = 225,
	c_slp01xd2_0_sfx = 226,
	c_slp01xd2_1_sfx = 227,
	c_slp01xd2_2_sfx = 228,
	c_slp01xd2_3_sfx = 229,
	c_slp01xd2_Anim = 230,

	c_ips001d2_RunAnim = 500,
	c_ipsxx1d2_RunAnim = 501,
	c_ips002d2_RunAnim = 502,
	c_ips003d2_RunAnim = 503,
	c_ips004d2_RunAnim = 504,
	c_ips005d2_RunAnim = 505,
	c_ips006d2_RunAnim = 506,
	c_slp01xd2_RunAnim = 507
};
} // namespace CopterScript

#endif // COPTER_ACTIONS_H