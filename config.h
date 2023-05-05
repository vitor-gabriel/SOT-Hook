#pragma once

#include <imgui/imgui.h>

class Config
{
public:
	enum  class EBar : int {
		ENone,
		ELeft,
		ERight,
		EBottom,
		ETop,
		ETriangle
	};
	static inline struct Configuration {
		enum class ECrosshairs : int {
			ENone,
			ECircle,
			ECross
		};
		
		struct
		{
			bool enable = true;
			bool fovEnable = true;
			float fov = 102.f;
			float spyglassFovMul = 4.0;
			float sniperFovMul = 1.0;
			bool spyRClickMode = true;
			bool oxygen = true;
			bool crosshair = true;
			float crosshairSize = 8.f;
			float crosshairThickness = 1.f;
			ImVec4 crosshairColor = { 255.f, 0.f, 0.f, 255.f };
			ECrosshairs crosshairType = ECrosshairs::ECross;
			bool bCustomTOD = true;
			float customTOD = 12.f;
		}client;
		struct
		{
			bool enable = true;
			struct
			{
				bool enable = true;
				bool bSkeleton = true;
				float renderDistance = 500.f;
				ImVec4 colorVisible = { 255.f, 0.f, 0.f, 255.f };
				ImVec4 colorInvisible = { 0.f, 8.f, 255.f, 255.f };
				bool team = false;
				bool tracers = true;
				float tracersThickness = 1.f;
				EBar barType = EBar::ENone;
				
			}players;
			struct
			{
				bool enable = true;
				float renderDistance = 200.f;
				ImVec4 color = { 255.f, 0.f, 247.f, 255.f };
				bool bartype = false;
			}skeletons;
			struct
			{
				bool enable = true;
				float renderDistance = 5000.f;
				ImVec4 color = { 47.f, 255.f, 0.f, 255.f };
				ImVec4 coloraiships = { 255.f, 0.f, 247.f, 255.f };
				ImVec4 colorghships = { 189.f, 189.f, 189.f, 255.f };
				bool holes = true;
				ImVec4 holesColor = { 1.f, 1.f, 1.f, 1.f };
				bool skeletons = true;
				bool ghosts = true;
				bool shipTray = false;
				float shipTrayThickness = 0.f;
				float shipTrayHeight = 0.f;
				ImVec4 shipTrayCol = { 1.f, 1.f, 1.f, 1.f };
				bool showLadders = true;
			}ships;
			struct
			{
				bool enable = true;
				float renderDistance = 1000.f;
				float size = 10.f;
				ImVec4 color = { 1.f, 1.f, 1.f, 1.f };
				bool marks = true;
				float marksRenderDistance = 100.f;
				ImVec4 marksColor = { 1.f, 1.f, 1.f, 1.f };
				bool decals = false;
				bool rareNames = false;
				char rareNamesFilter[0x64] = { 0 };
				bool renderCenterName = false;
				float decalsRenderDistance = 100.f;
				ImVec4 decalsColor = { 1.f, 1.f, 1.f, 1.f };
				bool vaults = false;
				float vaultsRenderDistance = 100.f;
				ImVec4 vaultsColor = { 1.f, 1.f, 1.f, 1.f };
				bool barrels = true;
				float barrelsRenderDistance = 100.f;
				ImVec4 barrelsColor = { 154.f, 154.f, 154.f, 255.f };
				bool barrelspeek = true;
				bool barrelstoggle = true;
				bool ammoChest = false;
				float ammoChestRenderDistance = 100.f;
				ImVec4 ammoChestColor = { 1.f, 1.f, 1.f, 1.f };
			}islands;
			struct
			{
				bool enable = true;
				float renderDistance = 200.f;
				ImVec4 color = { 1.f, 1.f, 1.f, 1.f };
				ImVec4 colorgunpowerd = { 1.f, 0.f, 0.f, 1.f };
				ImVec4 colorlegend = { 5.f, 0.f, 255.f, 255.f };
				ImVec4 colorgood = { 5.f, 0.f, 255.f, 255.f };
				ImVec4 colorritual = { 5.f, 0.f, 255.f, 255.f };

				bool nameToggle = true;
				bool mermaids = false;
				bool animals = false;
				float animalsRenderDistance = 100.f;
				ImVec4 animalsColor = { 1.f, 1.f, 1.f, 1.f };
				bool lostCargo = false;
				ImVec4 cluesColor = { 1.f, 1.f, 1.f, 1.f };
				bool gsRewards = false;
				ImVec4 gsRewardsColor = { 1.f, 1.f, 1.f, 1.f };
			}items;
			struct
			{
				bool enable = true;
				bool mermaids = true;
				float mermaidsRenderDistance = 450.f;
				ImVec4 mermaidsColor = { 1.f, 1.f, 1.f, 1.f };
				bool shipwrecks = true;
				float shipwrecksRenderDistance = 1000.f;
				ImVec4 shipwrecksColor = { 215.f, 253.f, 130.f, 255.f };
				bool rowboats = false;
				float rowboatsRenderDistance = 100.f;
				ImVec4 rowboatsColor = { 1.f, 1.f, 1.f, 1.f };
				bool sharks = false;
				float sharksRenderDistance = 100.f;
				ImVec4 sharksColor = { 1.f, 1.f, 1.f, 1.f };
				bool events = true;
				float eventsRenderDistance = 10000.f;
				ImVec4 eventsColor = { 255.f, 53.f, 53.f, 255.f };
			}others;
			struct
			{
				bool bEnable = true;
				int i_size = 325;
				int i_scale = 1000;
			} radar;
		}esp;
		struct
		{
			bool enable = true;
			struct
			{
				bool enable = true;
				float fPitch = 45.f;
				float fYaw = 45.f;
				float smooth = 1.f;
				float height = 1.f;
				bool players = true;
				bool skeletons = false;
				bool kegs = false;
				bool trigger = true;
				bool visibleOnly = true;
				bool calcShipVel = true;
			}weapon;
			struct
			{
				bool enable = true;
				float fPitch = 80.f;
				float fYaw = 80.f;
				float smooth = 1.f;
				bool instant = false;
				bool chains = false;
				bool incannons = false;

				int mastsloop = 1653;
				int deckshotsloopupdown = 265;
				int deckshotslooprightleft = 80;
				int cannonslooprightleft = 166;
				int	cannonsloopupdown = 175;


				bool BRIG = false;
				int mastbrigleftright = 1095;
				int mastbrigupdown = 1500;
				int deckshotsbrigleftright = -300;
				int deckshotsbrigupdown = 300;
				int cannonsbrigleftright = -116;


				bool players = false;
				bool skeletons = false;
				bool deckshots = false;
				bool ghostShips = false;
				bool lowAim = false;
				bool visibleOnly = false;
				bool autoDetect = false;
				bool drawPred = false;
				bool improvedVersion = false;
			}cannon;
			struct
			{
				bool rage = false;
			}others;
			struct {
				bool bEnable = true;
				bool harpoonplayers = false;
				bool bVisibleOnly = false;
				bool bAutoshoot = false;
				float fYaw = 100.f;
				float fPitch = 100.f;
			} harpoon;
		}aim;
		struct
		{
			bool enable = true;
			bool shipInfo = true;
			bool mapPins = true;
			bool walkUnderwater = false;
			bool showSunk = false;
			bool nofog = true;
			ImVec4 sunkColor = { 1.f, 1.f, 1.f, 1.f };
			bool playerList = true;
			bool cooking = true;
			bool noIdleKick = true;

			struct
			{
				bool bEnable = true;
				bool noclamp = true;
				bool noblockreduce = true;
			} sword;

			struct
			{
				bool bEnable = false;
				bool fasterreloading = true;
				bool fasteraimingspeed = true;
			} allweapons;

			struct
			{
				bool bEnable = true;
				bool b_bunnyhop = true;
				bool bLootsprint = false;
				bool takelootfrombarreltocrate = false;
				bool bIdleKick = false;
			} macro;
		}game;
		struct
		{
			bool process = false;
			int cFont = 0;
			int lFont = 0;
			float renderTextSizeFactor = 0.8f;
			float nameTextRenderDistanceMax = 5000.f;
			float nameTextRenderDistanceMin = 45.f;
			float pinRenderDistanceMax = 50.f;
			float pinRenderDistanceMin = 0.f;

			bool printErrorCodes = false;
			bool interceptProcessEvent = false;
			bool printRPCCalls = false;
			bool infsupplies = false;
			bool debugNames = false;
			int debugNamesTextSize = 20;
			char debugNamesFilter[0x64] = { 0 };
			float debugNamesRenderDistance = 0.f;
			bool bDummy = false;
		}dev;
		struct
		{
			bool russian = false;
			bool english = true;
		}lang;

	}cfg;
};