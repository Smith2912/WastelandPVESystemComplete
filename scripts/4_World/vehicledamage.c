modded class CarScript extends Car
{
    override void OnContact( string zoneName, vector localPos, IEntity other, Contact data )
    {
    }
    override void OnUpdate( float dt )
    {
		if ( GetGame().IsServer() )
		{
			ItemBase battery = GetBattery();
			if ( battery )
			{
				if ( EngineIsOn() )
				{
					m_BatteryTimer += dt;
					if ( m_BatteryTimer >= BATTERY_UPDATE_DELAY )
					{
						float rechargeRate = GetBatteryRechargeRate();
						if (rechargeRate < 0)
						{
							battery.GetCompEM().ConsumeEnergy(rechargeRate * m_BatteryTimer);
						}
						m_BatteryTimer = 0;
					}
				}
				else if ( !EngineIsOn() && IsScriptedLightsOn() )
				{
					m_BatteryTimer += dt;
					if ( m_BatteryTimer >= BATTERY_UPDATE_DELAY )
					{
						m_BatteryTimer = 0;
						
						if ( battery.GetCompEM().GetEnergy() <= 0 )
						{
							ToggleHeadlights();
						}
					}
				}
			}
			
			if ( GetGame().GetWaterDepth( GetEnginePosWS() ) > 0 )
			{
				m_DrownTime += dt;
			}
			else
			{
				m_DrownTime = 0;
			}
		}

		// For visualisation of brake lights for all players
		float brake_coef = GetBrake();
		if ( brake_coef > 0 )
		{
			if ( !m_BrakesArePressed )
			{
				m_BrakesArePressed = true;
				SetSynchDirty();
				OnBrakesPressed();
			}
		}
		else
		{
			if ( m_BrakesArePressed )
			{
				m_BrakesArePressed = false;
				SetSynchDirty();
				OnBrakesReleased();
			}
		}
		
		if ( (!GetGame().IsDedicatedServer()) && m_ForceUpdateLights )
		{
			UpdateLights();
			m_ForceUpdateLights = false;
		}
    }
    
    override void EEKilled(Object killer)
	{
	}
    override void EOnPostSimulate(IEntity other, float timeSlice)
    {  
    }
}