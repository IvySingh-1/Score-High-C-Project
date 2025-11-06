// file containing set of 15 Qs as NEET-UG Daily Practice Paper 3

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

} neetDPP3;

// NEET-UG Daily Practice paper 3
void NEET_dpp3(neetDPP3 q[])
{
    // defining variable qu[] of type_name 'neetDPP3'
    neetDPP3 qu[MAX_QUESTIONS] = {
        {"Which of the following simple tissues are commonly found in the fruit walls of nuts and pulp of pear?",
         {" Sclereids", "Fibres", "Parenchyma", " Collenchyma"},
         1},

        {"Bulliform cells are responsible for",
         {"Protecting the plant from salt stress.", "Increased photosynthesis in monocots. ",
          "Providing large spaces for storage of sugars", "Inward curling of leaves in monocots"},
         4},

        {"How many different proteins does the ribosome consist of?", {"20", "80", "60", "40"}, 1},

        {"Respiratory Quotient (RQ) value of tripalmitin is", {"0.9", "0.7", "0.07", "0.09"}, 2},

        {"Asthma may be attributed to:", {" Bacterial infection of the lungs", "Allergic reaction of the mast cells in the lungs  ", " Fungal infection of the lungs", " accumulation of fluid in the lungs"}, 1},

        {"Which of the following statement is not true about stopping potential?",
         {"It is 1/e times the maximum kinetic energy of electrons emitted ", " It increases with increase in intensity of the incident light", "it depends on the nature of emitter material. ", " It depends upon frequency of the incident light "},
         2},

        {"In an electromagnetic wave, at an instant and at a particular position, the electric field is along the negative z-axis and magnetic field is along the positive x-axis. Then the direction of propagation of electromagnetic wave is: ",
         {"positive z-axis", " positive y-axis",
          "45 degree angle from positive y axis",
          "negative y-axis"},
         4},

        {"The ratio of average electric energy density and total average energy density of electromagnetic wave is:",
         {"2", "1", "3", "1/2"},
         4},

        {"The escape velocity for earth is v. A planet having 9 times mass that of earth and radius, 16 times that of earth, has the escape velocity of: ",
         {"2v/3", "3v/4", "9v/4", "v/3"},
         1},

        {"For a transistor to act as a switch, it must be operated in",
         {"Active region", "Saturation and cut-off region", "Cutoff region only", "Saturated region onl"},
         2},

        {"The incorrect statement regarding ethyne is:",
         {" The C C bonds in ethyne is shorter than that in ethene", "Both carbons are sp hybridised", " Ethyne is linear", "The corbon - carbon bonds in ethyne is weaker than that in ethene"},
         4},

        {"The metal that shows highest and maximum number of oxidation state is :",
         {"Fe", "Mn", "Co", "Ti"},
         2},

        {"The amorphous form of silica is",
         {"quartz", "kieselguhr", "tridymite", "cristobalite"},
         2},

        {"Given below are two statements Statement I : Nickel is being used as the catalyst for producing syn gas and edible fats.Statement II : Silicon forms both electron rich and electron deficient hydrides.In the light of the above statements, choose the most appropriate answer from the options given below:",
         {"Both the statements I and II are correct", "Statement I is incorrect but statement II is correc", "Both the statements I and II are incorrect", "Statement I is correct but statement II is incorrect"},
         4},

        {"The reaction at cathode in the cells commonly used in clocks involves",
         {"reduction of Mn from +4 to +3", "reduction of Mn from +7 to +2", " oxidation of Mn from +3 to +4 ", " oxidation of Mn from +2 to +7"},
         2}};

    for (int i = 0; i < MAX_QUESTIONS; i++)
    {
        q[i] = qu[i];
    }
}