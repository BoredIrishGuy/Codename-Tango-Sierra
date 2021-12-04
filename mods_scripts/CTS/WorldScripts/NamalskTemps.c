modded class NamalskData
{
    override void Init()
    {
        super.Init();

        m_Sunrise_Jan = 9.16;
        m_Sunset_Jan = 14.85;
        m_Sunrise_Jul = 2.85;
        m_Sunset_Jul = 21.15;

        // Default values
        //              1    2    3    4    5    6    7    8   9    10   11   12
        // m_MaxTemps{-12,  -8,  -3,   0,   2,   5,   7,  11,   8,   5,   2,  -8}
        // m_MinTemps{-32, -27, -21, -14,  -7,  -4,  -2,   2,  -3,  -7, -15, -25}
        //
        //
        // New values
        //              1    2    3    4    5    6    7    8   9    10   11   12 
        m_MaxTemps = {-999, -999, -999, -999, -999, -999, -999, -999, -999, -999, -999, -999};
        m_MinTemps = {-999, -999, -999, -999, -999, -999, -999, -999, -999, -999, -999, -999};
    }
}
