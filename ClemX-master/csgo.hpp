#pragma once
#include <cstdint>

//Flags
#define FL_ON_GROUND                     257
#define FL_ON_GROUND_CROUCHED             263
#define FL_IN_AIR_STAND                    256
#define FL_IN_AIR_MOVING_TO_STAND         258
#define FL_ON_GROUND_MOVING_TO_STAND     259
#define FL_IN_AIR_MOVING_TO_CROUCH         260
#define FL_ON_GROUND_MOVING_TO_CROUCH     261
#define FL_IN_AIR_CROUCHED                 262
#define FL_IN_WATER                     1280
#define FL_IN_PUDDLE                     1281
#define FL_IN_WATER_CROUCHED             1286
#define FL_IN_PUDDLE_CROUCHED             1287
#define FL_PARTIALGROUND (1 << 18)

//Team IDs
#define TEAM_ID_GOTV 1
#define TEAM_ID_T 2
#define TEAM_ID_CT 3

enum WeaponIDI
{
	WEAPON_DEAGLE = 1,
	WEAPON_ELITE = 2,
	WEAPON_FIVESEVEN = 3,
	WEAPON_GLOCK = 4,
	WEAPON_AK47 = 7,
	WEAPON_AUG = 8,
	WEAPON_AWP = 9,
	WEAPON_FAMAS = 10,
	WEAPON_G3SG1 = 11,
	WEAPON_GALILAR = 13,
	WEAPON_M249 = 14,
	WEAPON_M4A4 = 16,
	WEAPON_MAC10 = 17,
	WEAPON_P90 = 19,
	WEAPON_UMP45 = 24,
	WEAPON_XM1014 = 25,
	WEAPON_BIZON = 26,
	WEAPON_MAG7 = 27,
	WEAPON_NEGEV = 28,
	WEAPON_SAWEDOFF = 29,
	WEAPON_TEC9 = 30,
	WEAPON_TASER = 31,
	WEAPON_HKP2000 = 32,
	WEAPON_MP7 = 33,
	WEAPON_MP9 = 34,
	WEAPON_NOVA = 35,
	WEAPON_P250 = 36,
	WEAPON_SCAR20 = 38,
	WEAPON_SG556 = 39,
	WEAPON_SSG08 = 40,
	WEAPON_KNIFE = 42,
	WEAPON_FLASHBANG = 43,
	WEAPON_HEGRENADE = 44,
	WEAPON_SMOKEGRENADE = 45,
	WEAPON_MOLOTOV = 46,
	WEAPON_DECOY = 47,
	WEAPON_INCGRENADE = 48,
	WEAPON_C4 = 49,
	WEAPON_KNIFE_T = 59,
	WEAPON_M4A1_SILENCER = 60,
	WEAPON_USP_SILENCER = 61,
	WEAPON_CZ75A = 63,
	WEAPON_REVOLVER = 64,
	WEAPON_KNIFE_BAYONET = 500,
	WEAPON_KNIFE_FLIP = 505,
	WEAPON_KNIFE_GUT = 506,
	WEAPON_KNIFE_KARAMBIT = 507,
	WEAPON_KNIFE_M9_BAYONET = 508,
	WEAPON_KNIFE_TACTICAL = 509,
	WEAPON_KNIFE_FALCHION = 512,
	WEAPON_KNIFE_BOWIE = 514,
	WEAPON_KNIFE_BUTTERFLY = 515,
	WEAPON_KNIFE_PUSH = 516
};



namespacenamespace hazedumper {
constexpr ::std::int64_t timestamp = 1620119455;
namespace netvars {
constexpr ::std::ptrdiff_t cs_gamerules_data = 0x0;
constexpr ::std::ptrdiff_t m_ArmorValue = 0xB37C;
constexpr ::std::ptrdiff_t m_Collision = 0x320;
constexpr ::std::ptrdiff_t m_CollisionGroup = 0x474;
constexpr ::std::ptrdiff_t m_Local = 0x2FBC;
constexpr ::std::ptrdiff_t m_MoveType = 0x25C;
constexpr ::std::ptrdiff_t m_OriginalOwnerXuidHigh = 0x31C4;
constexpr ::std::ptrdiff_t m_OriginalOwnerXuidLow = 0x31C0;
constexpr ::std::ptrdiff_t m_SurvivalGameRuleDecisionTypes = 0x1328;
constexpr ::std::ptrdiff_t m_SurvivalRules = 0xD00;
constexpr ::std::ptrdiff_t m_aimPunchAngle = 0x302C;
constexpr ::std::ptrdiff_t m_aimPunchAngleVel = 0x3038;
constexpr ::std::ptrdiff_t m_angEyeAnglesX = 0xB380;
constexpr ::std::ptrdiff_t m_angEyeAnglesY = 0xB384;
constexpr ::std::ptrdiff_t m_bBombDefused = 0x29B0;
constexpr ::std::ptrdiff_t m_bBombPlanted = 0x9A5;
constexpr ::std::ptrdiff_t m_bBombTicking = 0x2980;
constexpr ::std::ptrdiff_t m_bFreezePeriod = 0x20;
constexpr ::std::ptrdiff_t m_bGunGameImmunity = 0x3944;
constexpr ::std::ptrdiff_t m_bHasDefuser = 0xB38C;
constexpr ::std::ptrdiff_t m_bHasHelmet = 0xB370;
constexpr ::std::ptrdiff_t m_bInReload = 0x32A5;
constexpr ::std::ptrdiff_t m_bIsDefusing = 0x3930;
constexpr ::std::ptrdiff_t m_bIsQueuedMatchmaking = 0x74;
constexpr ::std::ptrdiff_t m_bIsScoped = 0x3928;
constexpr ::std::ptrdiff_t m_bIsValveDS = 0x7C;
constexpr ::std::ptrdiff_t m_bSpotted = 0x93D;
constexpr ::std::ptrdiff_t m_bSpottedByMask = 0x980;
constexpr ::std::ptrdiff_t m_bStartedArming = 0x33F0;
constexpr ::std::ptrdiff_t m_bUseCustomAutoExposureMax = 0x9D9;
constexpr ::std::ptrdiff_t m_bUseCustomAutoExposureMin = 0x9D8;
constexpr ::std::ptrdiff_t m_bUseCustomBloomScale = 0x9DA;
constexpr ::std::ptrdiff_t m_clrRender = 0x70;
constexpr ::std::ptrdiff_t m_dwBoneMatrix = 0x26A8;
constexpr ::std::ptrdiff_t m_fAccuracyPenalty = 0x3330;
constexpr ::std::ptrdiff_t m_fFlags = 0x104;
constexpr ::std::ptrdiff_t m_flC4Blow = 0x2990;
constexpr ::std::ptrdiff_t m_flCustomAutoExposureMax = 0x9E0;
constexpr ::std::ptrdiff_t m_flCustomAutoExposureMin = 0x9DC;
constexpr ::std::ptrdiff_t m_flCustomBloomScale = 0x9E4;
constexpr ::std::ptrdiff_t m_flDefuseCountDown = 0x29AC;
constexpr ::std::ptrdiff_t m_flDefuseLength = 0x29A8;
constexpr ::std::ptrdiff_t m_flFallbackWear = 0x31D0;
constexpr ::std::ptrdiff_t m_flFlashDuration = 0xA420;
constexpr ::std::ptrdiff_t m_flFlashMaxAlpha = 0xA41C;
constexpr ::std::ptrdiff_t m_flLastBoneSetupTime = 0x2924;
constexpr ::std::ptrdiff_t m_flLowerBodyYawTarget = 0x3A90;
constexpr ::std::ptrdiff_t m_flNextAttack = 0x2D70;
constexpr ::std::ptrdiff_t m_flNextPrimaryAttack = 0x3238;
constexpr ::std::ptrdiff_t m_flSimulationTime = 0x268;
constexpr ::std::ptrdiff_t m_flTimerLength = 0x2994;
constexpr ::std::ptrdiff_t m_hActiveWeapon = 0x2EF8;
constexpr ::std::ptrdiff_t m_hBombDefuser = 0x29B4;
constexpr ::std::ptrdiff_t m_hMyWeapons = 0x2DF8;
constexpr ::std::ptrdiff_t m_hObserverTarget = 0x338C;
constexpr ::std::ptrdiff_t m_hOwner = 0x29CC;
constexpr ::std::ptrdiff_t m_hOwnerEntity = 0x14C;
constexpr ::std::ptrdiff_t m_hViewModel = 0x32F8;
constexpr ::std::ptrdiff_t m_iAccountID = 0x2FC8;
constexpr ::std::ptrdiff_t m_iClip1 = 0x3264;
constexpr ::std::ptrdiff_t m_iCompetitiveRanking = 0x1A84;
constexpr ::std::ptrdiff_t m_iCompetitiveWins = 0x1B88;
constexpr ::std::ptrdiff_t m_iCrosshairId = 0xB3E8;
constexpr ::std::ptrdiff_t m_iDefaultFOV = 0x332C;
constexpr ::std::ptrdiff_t m_iEntityQuality = 0x2FAC;
constexpr ::std::ptrdiff_t m_iFOVStart = 0x31E8;
constexpr ::std::ptrdiff_t m_iGlowIndex = 0xA438;
constexpr ::std::ptrdiff_t m_iHealth = 0x100;
constexpr ::std::ptrdiff_t m_iItemDefinitionIndex = 0x2FAA;
constexpr ::std::ptrdiff_t m_iItemIDHigh = 0x2FC0;
constexpr ::std::ptrdiff_t m_iMostRecentModelBoneCounter = 0x2690;
constexpr ::std::ptrdiff_t m_iObserverMode = 0x3378;
constexpr ::std::ptrdiff_t m_iShotsFired = 0xA390;
constexpr ::std::ptrdiff_t m_iState = 0x3258;
constexpr ::std::ptrdiff_t m_iTeamNum = 0xF4;
constexpr ::std::ptrdiff_t m_lifeState = 0x25F;
constexpr ::std::ptrdiff_t m_nBombSite = 0x2984;
constexpr ::std::ptrdiff_t m_nFallbackPaintKit = 0x31C8;
constexpr ::std::ptrdiff_t m_nFallbackSeed = 0x31CC;
constexpr ::std::ptrdiff_t m_nFallbackStatTrak = 0x31D4;
constexpr ::std::ptrdiff_t m_nForceBone = 0x268C;
constexpr ::std::ptrdiff_t m_nTickBase = 0x3430;
constexpr ::std::ptrdiff_t m_nViewModelIndex = 0x29C0;
constexpr ::std::ptrdiff_t m_rgflCoordinateFrame = 0x444;
constexpr ::std::ptrdiff_t m_szCustomName = 0x303C;
constexpr ::std::ptrdiff_t m_szLastPlaceName = 0x35B4;
constexpr ::std::ptrdiff_t m_thirdPersonViewAngles = 0x31D8;
constexpr ::std::ptrdiff_t m_vecOrigin = 0x138;
constexpr ::std::ptrdiff_t m_vecVelocity = 0x114;
constexpr ::std::ptrdiff_t m_vecViewOffset = 0x108;
constexpr ::std::ptrdiff_t m_viewPunchAngle = 0x3020;
constexpr ::std::ptrdiff_t m_zoomLevel = 0x33D0;
} // namespace netvars
namespace signatures {
constexpr ::std::ptrdiff_t anim_overlays = 0x2980;
constexpr ::std::ptrdiff_t clientstate_choked_commands = 0x4D30;
constexpr ::std::ptrdiff_t clientstate_delta_ticks = 0x174;
constexpr ::std::ptrdiff_t clientstate_last_outgoing_command = 0x4D2C;
constexpr ::std::ptrdiff_t clientstate_net_channel = 0x9C;
constexpr ::std::ptrdiff_t convar_name_hash_table = 0x2F0F8;
constexpr ::std::ptrdiff_t dwClientState = 0x589FE4;
constexpr ::std::ptrdiff_t dwClientState_GetLocalPlayer = 0x180;
constexpr ::std::ptrdiff_t dwClientState_IsHLTV = 0x4D48;
constexpr ::std::ptrdiff_t dwClientState_Map = 0x28C;
constexpr ::std::ptrdiff_t dwClientState_MapDirectory = 0x188;
constexpr ::std::ptrdiff_t dwClientState_MaxPlayer = 0x388;
constexpr ::std::ptrdiff_t dwClientState_PlayerInfo = 0x52C0;
constexpr ::std::ptrdiff_t dwClientState_State = 0x108;
constexpr ::std::ptrdiff_t dwClientState_ViewAngles = 0x4D90;
constexpr ::std::ptrdiff_t dwEntityList = 0x4DA521C;
constexpr ::std::ptrdiff_t dwForceAttack = 0x31D6750;
constexpr ::std::ptrdiff_t dwForceAttack2 = 0x31D675C;
constexpr ::std::ptrdiff_t dwForceBackward = 0x31D678C;
constexpr ::std::ptrdiff_t dwForceForward = 0x31D6768;
constexpr ::std::ptrdiff_t dwForceJump = 0x524EFFC;
constexpr ::std::ptrdiff_t dwForceLeft = 0x31D6780;
constexpr ::std::ptrdiff_t dwForceRight = 0x31D67A4;
constexpr ::std::ptrdiff_t dwGameDir = 0x628800;
constexpr ::std::ptrdiff_t dwGameRulesProxy = 0x52C22EC;
constexpr ::std::ptrdiff_t dwGetAllClasses = 0xDB4FF4;
constexpr ::std::ptrdiff_t dwGlobalVars = 0x589CE8;
constexpr ::std::ptrdiff_t dwGlowObjectManager = 0x52ED6A8;
constexpr ::std::ptrdiff_t dwInput = 0x51F67E0;
constexpr ::std::ptrdiff_t dwInterfaceLinkList = 0x947774;
constexpr ::std::ptrdiff_t dwLocalPlayer = 0xD8D2CC;
constexpr ::std::ptrdiff_t dwMouseEnable = 0xD92E70;
constexpr ::std::ptrdiff_t dwMouseEnablePtr = 0xD92E40;
constexpr ::std::ptrdiff_t dwPlayerResource = 0x31D4AD0;
constexpr ::std::ptrdiff_t dwRadarBase = 0x51D9F94;
constexpr ::std::ptrdiff_t dwSensitivity = 0xD92D0C;
constexpr ::std::ptrdiff_t dwSensitivityPtr = 0xD92CE0;
constexpr ::std::ptrdiff_t dwSetClanTag = 0x8A1B0;
constexpr ::std::ptrdiff_t dwViewMatrix = 0x4D96B34;
constexpr ::std::ptrdiff_t dwWeaponTable = 0x51F72A0;
constexpr ::std::ptrdiff_t dwWeaponTableIndex = 0x325C;
constexpr ::std::ptrdiff_t dwYawPtr = 0xD92AD0;
constexpr ::std::ptrdiff_t dwZoomSensitivityRatioPtr = 0xD97D70;
constexpr ::std::ptrdiff_t dwbSendPackets = 0xD76CA;
constexpr ::std::ptrdiff_t dwppDirect3DDevice9 = 0xA7050;
constexpr ::std::ptrdiff_t find_hud_element = 0x2FF1F5A0;
constexpr ::std::ptrdiff_t force_update_spectator_glow = 0x3AF9FA;
constexpr ::std::ptrdiff_t interface_engine_cvar = 0x3E9EC;
constexpr ::std::ptrdiff_t is_c4_owner = 0x3BC630;
constexpr ::std::ptrdiff_t m_bDormant = 0xED;
constexpr ::std::ptrdiff_t m_flSpawnTime = 0xA370;
constexpr ::std::ptrdiff_t m_pStudioHdr = 0x294C;
constexpr ::std::ptrdiff_t m_pitchClassPtr = 0x51DA230;
constexpr ::std::ptrdiff_t m_yawClassPtr = 0xD92AD0;
constexpr ::std::ptrdiff_t model_ambient_min = 0x58D05C;
constexpr ::std::ptrdiff_t set_abs_angles = 0x1E07A0;
constexpr ::std::ptrdiff_t set_abs_origin = 0x1E05E0;
} // namespace signatures
} // namespace hazedumper
constexpr ::std::ptrdiff_t m_flFallbackWear = 0x31D0;
constexpr ::std::ptrdiff_t m_flFlashDuration = 0xA420;
constexpr ::std::ptrdiff_t m_flFlashMaxAlpha = 0xA41C;
constexpr ::std::ptrdiff_t m_flLastBoneSetupTime = 0x2924;
constexpr ::std::ptrdiff_t m_flLowerBodyYawTarget = 0x3A90;
constexpr ::std::ptrdiff_t m_flNextAttack = 0x2D70;
constexpr ::std::ptrdiff_t m_flNextPrimaryAttack = 0x3238;
constexpr ::std::ptrdiff_t m_flSimulationTime = 0x268;
constexpr ::std::ptrdiff_t m_flTimerLength = 0x2994;
constexpr ::std::ptrdiff_t m_hActiveWeapon = 0x2EF8;
constexpr ::std::ptrdiff_t m_hBombDefuser = 0x29B4;
constexpr ::std::ptrdiff_t m_hMyWeapons = 0x2DF8;
constexpr ::std::ptrdiff_t m_hObserverTarget = 0x338C;
constexpr ::std::ptrdiff_t m_hOwner = 0x29CC;
constexpr ::std::ptrdiff_t m_hOwnerEntity = 0x14C;
constexpr ::std::ptrdiff_t m_hViewModel = 0x32F8;
constexpr ::std::ptrdiff_t m_iAccountID = 0x2FC8;
constexpr ::std::ptrdiff_t m_iClip1 = 0x3264;
constexpr ::std::ptrdiff_t m_iCompetitiveRanking = 0x1A84;
constexpr ::std::ptrdiff_t m_iCompetitiveWins = 0x1B88;
constexpr ::std::ptrdiff_t m_iCrosshairId = 0xB3E4;
constexpr ::std::ptrdiff_t m_iDefaultFOV = 0x332C;
constexpr ::std::ptrdiff_t m_iEntityQuality = 0x2FAC;
constexpr ::std::ptrdiff_t m_iFOVStart = 0x31E8;
constexpr ::std::ptrdiff_t m_iGlowIndex = 0xA438;
constexpr ::std::ptrdiff_t m_iHealth = 0x100;
constexpr ::std::ptrdiff_t m_iItemDefinitionIndex = 0x2FAA;
constexpr ::std::ptrdiff_t m_iItemIDHigh = 0x2FC0;
constexpr ::std::ptrdiff_t m_iMostRecentModelBoneCounter = 0x2690;
constexpr ::std::ptrdiff_t m_iObserverMode = 0x3378;
constexpr ::std::ptrdiff_t m_iShotsFired = 0xA390;
constexpr ::std::ptrdiff_t m_iState = 0x3258;
constexpr ::std::ptrdiff_t m_iTeamNum = 0xF4;
constexpr ::std::ptrdiff_t m_lifeState = 0x25F;
constexpr ::std::ptrdiff_t m_nBombSite = 0x2984;
constexpr ::std::ptrdiff_t m_nFallbackPaintKit = 0x31C8;
constexpr ::std::ptrdiff_t m_nFallbackSeed = 0x31CC;
constexpr ::std::ptrdiff_t m_nFallbackStatTrak = 0x31D4;
constexpr ::std::ptrdiff_t m_nForceBone = 0x268C;
constexpr ::std::ptrdiff_t m_nTickBase = 0x3430;
constexpr ::std::ptrdiff_t m_nViewModelIndex = 0x29C0;
constexpr ::std::ptrdiff_t m_rgflCoordinateFrame = 0x444;
constexpr ::std::ptrdiff_t m_szCustomName = 0x303C;
constexpr ::std::ptrdiff_t m_szLastPlaceName = 0x35B4;
constexpr ::std::ptrdiff_t m_thirdPersonViewAngles = 0x31D8;
constexpr ::std::ptrdiff_t m_vecOrigin = 0x138;
constexpr ::std::ptrdiff_t m_vecVelocity = 0x114;
constexpr ::std::ptrdiff_t m_vecViewOffset = 0x108;
constexpr ::std::ptrdiff_t m_viewPunchAngle = 0x3020;
constexpr ::std::ptrdiff_t m_zoomLevel = 0x33D0;
} // namespace netvars
namespace signatures {
constexpr ::std::ptrdiff_t anim_overlays = 0x2980;
constexpr ::std::ptrdiff_t clientstate_choked_commands = 0x4D30;
constexpr ::std::ptrdiff_t clientstate_delta_ticks = 0x174;
constexpr ::std::ptrdiff_t clientstate_last_outgoing_command = 0x4D2C;
constexpr ::std::ptrdiff_t clientstate_net_channel = 0x9C;
constexpr ::std::ptrdiff_t convar_name_hash_table = 0x2F0F8;
constexpr ::std::ptrdiff_t dwClientState = 0x589FE4;
constexpr ::std::ptrdiff_t dwClientState_GetLocalPlayer = 0x180;
constexpr ::std::ptrdiff_t dwClientState_IsHLTV = 0x4D48;
constexpr ::std::ptrdiff_t dwClientState_Map = 0x28C;
constexpr ::std::ptrdiff_t dwClientState_MapDirectory = 0x188;
constexpr ::std::ptrdiff_t dwClientState_MaxPlayer = 0x388;
constexpr ::std::ptrdiff_t dwClientState_PlayerInfo = 0x52C0;
constexpr ::std::ptrdiff_t dwClientState_State = 0x108;
constexpr ::std::ptrdiff_t dwClientState_ViewAngles = 0x4D90;
constexpr ::std::ptrdiff_t dwEntityList = 0x4DA4F8C;
constexpr ::std::ptrdiff_t dwForceAttack = 0x31D6514;
constexpr ::std::ptrdiff_t dwForceAttack2 = 0x31D6520;
constexpr ::std::ptrdiff_t dwForceBackward = 0x31D64CC;
constexpr ::std::ptrdiff_t dwForceForward = 0x31D64D8;
constexpr ::std::ptrdiff_t dwForceJump = 0x524EECC;
constexpr ::std::ptrdiff_t dwForceLeft = 0x31D64F0;
constexpr ::std::ptrdiff_t dwForceRight = 0x31D64E4;
constexpr ::std::ptrdiff_t dwGameDir = 0x628800;
constexpr ::std::ptrdiff_t dwGameRulesProxy = 0x52C21AC;
constexpr ::std::ptrdiff_t dwGetAllClasses = 0xDB4F8C;
constexpr ::std::ptrdiff_t dwGlobalVars = 0x589CE8;
constexpr ::std::ptrdiff_t dwGlowObjectManager = 0x52ED560;
constexpr ::std::ptrdiff_t dwInput = 0x51F6550;
constexpr ::std::ptrdiff_t dwInterfaceLinkList = 0x947D24;
constexpr ::std::ptrdiff_t dwLocalPlayer = 0xD8D2BC;
constexpr ::std::ptrdiff_t dwMouseEnable = 0xD92E60;
constexpr ::std::ptrdiff_t dwMouseEnablePtr = 0xD92E30;
constexpr ::std::ptrdiff_t dwPlayerResource = 0x31D4840;
constexpr ::std::ptrdiff_t dwRadarBase = 0x51D9D04;
constexpr ::std::ptrdiff_t dwSensitivity = 0xD92CFC;
constexpr ::std::ptrdiff_t dwSensitivityPtr = 0xD92CD0;
constexpr ::std::ptrdiff_t dwSetClanTag = 0x8A1B0;
constexpr ::std::ptrdiff_t dwViewMatrix = 0x4D968A4;
constexpr ::std::ptrdiff_t dwWeaponTable = 0x51F7010;
constexpr ::std::ptrdiff_t dwWeaponTableIndex = 0x325C;
constexpr ::std::ptrdiff_t dwYawPtr = 0xD92AC0;
constexpr ::std::ptrdiff_t dwZoomSensitivityRatioPtr = 0xD97D60;
constexpr ::std::ptrdiff_t dwbSendPackets = 0xD75EA;
constexpr ::std::ptrdiff_t dwppDirect3DDevice9 = 0xA7050;
constexpr ::std::ptrdiff_t find_hud_element = 0x50F1EA20;
constexpr ::std::ptrdiff_t force_update_spectator_glow = 0x3AEE0A;
constexpr ::std::ptrdiff_t interface_engine_cvar = 0x3E9EC;
constexpr ::std::ptrdiff_t is_c4_owner = 0x3BB960;
constexpr ::std::ptrdiff_t m_bDormant = 0xED;
constexpr ::std::ptrdiff_t m_flSpawnTime = 0xA370;
constexpr ::std::ptrdiff_t m_pStudioHdr = 0x294C;
constexpr ::std::ptrdiff_t m_pitchClassPtr = 0x51D9FA0;
constexpr ::std::ptrdiff_t m_yawClassPtr = 0xD92AC0;
constexpr ::std::ptrdiff_t model_ambient_min = 0x58D05C;
constexpr ::std::ptrdiff_t set_abs_angles = 0x1DFC70;
constexpr ::std::ptrdiff_t set_abs_origin = 0x1DFAB0;
} // namespace signatures
} // namespace hazedumper
