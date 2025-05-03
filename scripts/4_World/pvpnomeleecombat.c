modded class DayZPlayerImplementMeleeCombat
{
    protected void SetTarget(Object obj, vector hitPos, int hitZone)
    {
        // Check if the target is a player
        if (PlayerBase.Cast(obj))
        {
            // If the target is a player, do not set the target
            return;
        }

        if (obj)
        {
            m_TargetObject 	= obj;
            m_HitPositionWS = hitPos;
            m_HitZoneIdx 	= hitZone;
            m_HitZoneName 	= m_TargetObject.GetDamageZoneNameByComponentIndex(m_HitZoneIdx);
        }
    }
}