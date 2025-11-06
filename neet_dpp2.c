// file containing set of 15 Qs as NEET-UG Daily Practice Paper 2

// #define directive in C is a preprocessor command that defines macros and constant values that can be used throughout a C program.The scope of a #define is limited to the file in which it is defined.
// macro definition
#define MAX_QUESTIONS 15

// structure to store question details
typedef struct
{
    // to store question
    char question[350];

    // array to store four options associated with each question
    char options[4][100];

    // integer to store correct option
    int correctOption;

} neetDPP2;

// NEET-UG Daily Practice paper 2
void NEET_dpp2(neetDPP2 q[])
{
    // defining variable qu[] of type_name 'neetDPP2'
    neetDPP2 qu[MAX_QUESTIONS] = {
        {"Which one of the following is not a criterion for classification of fungi",
         {"Mode of nutrition ", "mode of spore formation", "fruting body", "morphology of mycelium"},
         1},

        {"Which of the following statements about methanogens is not correct?",
         {"they can be used to produce bio gas", "they are found in rumen of cattle and there extcreta",
          "they grow aerobically and breakdown cellulode rich food ", "they produce methane gas"},
         3},

        {"Which cell organelle is related to glycoprotein formation?", {"Golgi apparatus", "Rough endoplasmic reticulum", "Glyoxysome", "Mitochondria"}, 1},

        {"Open circulatory system is present in", {"Palaemon", "Nereis", "Balanoglossus", "Hirudinaria"}, 4},

        {"Bicarpellary gynoecium and oblique ovary is found in", {"Solanum melongena", "Sesbania", "Pisum sativum", "Brassica campestris"}, 3},

        {"Vital capacity of lung is",
         {" IRV + ERV + TV", "IRV+ERV", "IRV +ERV+TV+RV", "IRV+ERV+TV-RV"},
         1},

        {"A Which of the following are NOT considered as the part of endomembrane system? A.Mitochondria B.Endoplasmic reticulum C.Chloroplasts D.Golgi complex E.Pesoxisomes Choose the most appropriate answer from the options given be ",
         {"A, D and E only", "B and D only", "A,C, and E only", "A,C and D only"},
         3},

        {"Which one of the following represents all isoelectronic species?", {"Na+,Mg2+,O-,F-", "Ca2+,Ar,K+,Cl-", "Na+,Cl-,O-,NO+", "N2O,N2O4,NO+,NO"}, 2},

        {"Arrange the following compounds in increasing order of their solubilities in chloroform : NaCl,CH3OH,cyclohexan,CH3CN", {" NaCl < CH3CN < CH3OH < Cyclohexane ", " CH3OH < CH3CN < NaCl < Cyclohexane ", " NaCl < CH3OH < CH3CN < Cyclohexane ", " Cyclohexane < CH3CN < H3OH < NaCl "}, 1},

        {"The work done during reversible isothermal expansion of one mole of hydrogen gas at 25∘C from pressure of 20 atmosphere to 10 atmosphere is",
         {"-413.14 calories", "413.14 calories", "100 calories", "0 calorie"},
         1},

        {"Mass of glucose (C6H12O6)required to be dissolved to prepare one litre of its solution which is isotonic with 15 g L-1solution of urea (NH3CONH2)is (Given: Molar mass in gmol-1C:12,H:1,O:16,N:14 )",
         {"55 g", "15 g", "30 g", "45 g"},
         4},

        {"A particle moving with uniform speed in a circular path maintains:", {" constant acceleration", "constant velocity but variable acceleration", "variable velocity and constant acceleration", "constant velocity"}, 3},

        {"The ratio of radius of gyration of a solid sphere of mass M and radius R about its own axis to the radius of gyration of the thin hollow sphere of same mass and radius about its axis is : ",
         {"3:5", "2:7", "4:3", "1:2"},
         1},

        {"The escape velocity for earth is v. A planet having 9 times mass that of earth and radius, 16 times that of earth, has the escape velocity of: ",
         {"2v/3", "3v/4",
          "9v/4", "v/3"},
         3},

        {"If the unit of force and length be each increased by four times, then the unit of energy is increased by", {"16 times", "8 times", "2 times", "4 times"}, 1},

    };

    for (int i = 0; i < MAX_QUESTIONS; i++)
    {
        q[i] = qu[i];
    }
}