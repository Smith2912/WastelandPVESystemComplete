class CfgPatches
{
	class WastelandPVESystemComplete
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data","DZ_Scripts"
		};
	};
};
class CfgMods
{
    class WastelandPVESystemComplete
    {
        type="mod";
        author="The Songsmith";
        dir="WastelandPVESystemComplete";
        name="WastelandPVESystemComplete";
        dependencies[]={"Game","World"};
        class defs
        {
			class gameScriptModule
				{
				files[]={"WastelandPVESystemComplete/scripts/3_game"};
			};
            class worldScriptModule
            {
                files[]={"WastelandPVESystemComplete/scripts/4_World"};
            };
        };
    };
};
class CfgVehicles
{
	class Man;
	class SurvivorBase: Man
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
				class Blood
				{
					hitpoints=5000;
				};
				class Shock
				{
					hitpoints=100;
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints=33;
						transferToGlobalCoef=2;
					};
					class Blood
					{
						hitpoints=100;
						transferToGlobalCoef=0;
					};
					class Shock
					{
						hitpoints=0;
						transferToGlobalCoef=2;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=0;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=0.5;
							};
							class Blood
							{
								damage=1;
							};
							class Shock
							{
								damage=1;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Infected
						{
							class Health
							{
								damage=0.5;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"dmgZone_head"
					};
					fatalInjuryCoef=0.1;
					inventorySlots[]=
					{
						"Headgear",
						"Mask",
						"Eyewear"
					};
					inventorySlotsCoefs[]={1,1,0.5};
				};
				class Brain
				{
					class Health
					{
						hitpoints=100;
						transferToGlobalCoef=1;
					};
					class Blood
					{
						hitpoints=100;
						transferToGlobalCoef=0;
					};
					class Shock
					{
						hitpoints=0;
						transferToGlobalCoef=1;
					};
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0.5;
							};
							class Blood
							{
								damage=1;
							};
							class Shock
							{
								damage=1;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"dmgZone_brain"
					};
					fatalInjuryCoef=1;
				};
				class Torso
				{
					class Health
					{
						hitpoints=100;
						transferToGlobalCoef=1;
					};
					class Blood
					{
						hitpoints=100;
						transferToGlobalCoef=0;
					};
					class Shock
					{
						hitpoints=0;
						transferToGlobalCoef=1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=0;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=0.5;
							};
							class Blood
							{
								damage=1;
							};
							class Shock
							{
								damage=1;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"dmgZone_torso",
						"dmgZone_lungs",
						"dmgZone_spine",
						"dmgZone_liver",
						"dmgZone_heart"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]=
					{
						"Vest",
						"Body",
						"Back",
						"Hips"
					};
					inventorySlotsCoefs[]={1,1,0.5,0.1};
				};
				class LeftArm
				{
					class Health
					{
						hitpoints=100;
						transferToGlobalCoef=0.1;
					};
					class Blood
					{
						hitpoints=100;
						transferToGlobalCoef=0;
					};
					class Shock
					{
						hitpoints=0;
						transferToGlobalCoef=1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=0;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=0.5;
							};
							class Blood
							{
								damage=1;
							};
							class Shock
							{
								damage=1;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"dmgZone_leftArm"
					};
					inventorySlots[]=
					{
						"Body"
					};
					inventorySlotsCoefs[]={1};
					fatalInjuryCoef=-1;
				};
				class RightArm
				{
					class Health
					{
						hitpoints=100;
						transferToGlobalCoef=0.1;
					};
					class Blood
					{
						hitpoints=100;
						transferToGlobalCoef=0;
					};
					class Shock
					{
						hitpoints=0;
						transferToGlobalCoef=1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=0;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=0.5;
							};
							class Blood
							{
								damage=1;
							};
							class Shock
							{
								damage=1;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"dmgZone_rightArm"
					};
					inventorySlots[]=
					{
						"Body"
					};
					inventorySlotsCoefs[]={1};
					fatalInjuryCoef=-1;
				};
				class LeftHand
				{
					class Health
					{
						hitpoints=100;
						transferToGlobalCoef=0.1;
					};
					class Blood
					{
						hitpoints=100;
						transferToGlobalCoef=0;
					};
					class Shock
					{
						hitpoints=0;
						transferToGlobalCoef=1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=0;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=0.5;
							};
							class Blood
							{
								damage=1;
							};
							class Shock
							{
								damage=1;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
					transferToZonesNames[]=
					{
						"LeftArm"
					};
					transferToZonesCoefs[]={0.1};
					componentNames[]=
					{
						"dmgZone_leftHand"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]=
					{
						"Gloves"
					};
				};
				class RightHand
				{
					class Health
					{
						hitpoints=100;
						transferToGlobalCoef=0.1;
					};
					class Blood
					{
						hitpoints=100;
						transferToGlobalCoef=0;
					};
					class Shock
					{
						hitpoints=0;
						transferToGlobalCoef=1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=0;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=0.5;
							};
							class Blood
							{
								damage=1;
							};
							class Shock
							{
								damage=1;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
					transferToZonesNames[]=
					{
						"RightArm"
					};
					transferToZonesCoefs[]={0.1};
					componentNames[]=
					{
						"dmgZone_rightHand"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]=
					{
						"Gloves"
					};
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints=125;
						transferToGlobalCoef=0.25;
					};
					class Blood
					{
						hitpoints=100;
						transferToGlobalCoef=0;
					};
					class Shock
					{
						hitpoints=0;
						transferToGlobalCoef=1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=0;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=0.5;
							};
							class Blood
							{
								damage=1;
							};
							class Shock
							{
								damage=1;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
					fatalInjuryCoef=-1;
					componentNames[]=
					{
						"dmgZone_leftLeg"
					};
					inventorySlots[]=
					{
						"Legs"
					};
				};
				class RightLeg: LeftLeg
				{
					componentNames[]=
					{
						"dmgZone_rightLeg"
					};
					inventorySlots[]=
					{
						"Legs"
					};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints=125;
						transferToGlobalCoef=0.1;
					};
					class Blood
					{
						hitpoints=100;
						transferToGlobalCoef=0;
					};
					class Shock
					{
						hitpoints=0;
						transferToGlobalCoef=1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=0;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=0.5;
							};
							class Blood
							{
								damage=1;
							};
							class Shock
							{
								damage=1;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
					fatalInjuryCoef=-1;
					componentNames[]=
					{
						"dmgZone_leftFoot"
					};
					inventorySlots[]=
					{
						"Feet"
					};
					transferToZonesNames[]=
					{
						"LeftLeg"
					};
					transferToZonesCoefs[]={0.2};
				};
				class RightFoot: LeftFoot
				{
					componentNames[]=
					{
						"dmgZone_rightFoot"
					};
					transferToZonesNames[]=
					{
						"RightLeg"
					};
					transferToZonesCoefs[]={0.2};
				};
			};
		};
	};
};

