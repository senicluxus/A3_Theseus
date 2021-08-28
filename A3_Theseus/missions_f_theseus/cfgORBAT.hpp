class CfgORBAT
{
    class NAAF
    {
        id = 1;
        text = "New Altian Armed Forces";
        textShort = "NAAF";
        type = Infantry;
        texture = "flag_FIA";
        insignia = "\a3\missions_f_epa\data\img\orbat\I_AAF_ca.paa";
        side = West;
        color[] = {1,1,1,1};
        commander = "Gavras";
        commanderRank = Colonel;
        description = "Formed in the aftermath of the Altis Incident, the reformed Altian Armed Forces are comprised of former guerillas, freedom fighters, and believers in the civilian government.";

        class 2ndRegiment
        {
            id = 2;
            text = "%1 %3";
            textShort = "%1 %3";
            type = Infantry;
            side = West;
            size = Regiment;
            commander = "GreekMen";
            commanderRank = Major;
            description = "The 2nd Regiment is named after the unit of the Altian military that defected to the loyalists in the 2020's, honoring the heritage of fighting for freedom and a fair rule of law. It is mostly comprised of light infantry with small amounts of supporting IFV's and light tanks.";

            class alphacompany
            {
                id = 1;
                idType = 2;
                text = "%1 %3";
                textShort = "%1 %3";
                type = Infantry;
                side = West;
                size = Company;
                commander = "GreekMen";
                commanderRank = Captain;
            };

            class bravocompany: alphacompany
            {
                id = 2;
            };

            class charliecompany: bravocompany
            {
                id = 3;
                type = MechanizedInfantry;

                class charlie1stplatoon
                {
                    id = 1;
                    text = "%1 %3";
                    textShort = "%1 %3";
                    type = MechanizedInfantry;
                    side = West;
                    size = Platoon;
                    commander = "GreekMen";
                    commanderRank = Lieutenant;
                };
                class charlie2ndplatoon: charlie1stplatoon
                {
                    id = 2;
                };
                class charlie3rdplatoon: charlie1stplatoon
                {
                    id = 3;
                    type = Armored;
                };
                class charlie4thplatoon: charlie3rdplatoon
                {
                    id = 4;
                };
            };
            class minotaur
            {
                id = 1;
                idType = 2;
                text = "Minotaur Squad";
                textShort = "Minotaur";
                type = Recon;
                side = West;
                size = Squad;
                commander = "Xenos";
                commanderRank = Captain;
                description = "A special tactics group trained by foreign Israeli advisors, Minotaur Squad specializes in counter-insurgency operations and is the NAAF's only special forces unit.";
            };
        };
        class airwing
        {
            id = 1;
            text = "%1 %3";
            textShort = "%1 %3";
            type = Helicopter;
            side = West;
            size = Squadron;
            commander = "GreekMen";
            description = "Composed of the view remaining air vehicles left by the ceasefire, the NAAF air wing is entirely composed of helicopters. The pride and joy of their pilots is the pair of AH-1 Navajos that survived the invasion.";
            commanderRank = Major;
        };
        class coastguard
        {
            id = 1;
            text = "Coast Guard";
            textShort = "Coast Guard";
            description = "Composed of armed speedboats and rescue vehicles, the NAAF Coastguard mainly performs recovery and rescue operations.";
            type = Maritime;
            side = West;
            size = Company;
            commander = "GreekMen";
            commanderRank = Captain;
        };
    };
};