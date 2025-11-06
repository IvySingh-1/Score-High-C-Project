// file containing set of 15 Qs as NEET-UG Daily Practice Paper 1

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
} neetDPP1;

// NEET-UG Daily Practice paper 1
void NEET_dpp1(neetDPP1 q[])
{
    // defining variable qu[] of type_name 'neetDPP1'
    neetDPP1 qu[MAX_QUESTIONS] = {
        {"In plants, the end product of anaerobic respiration is",
         {"actic acid ", "pyruvic acid", "methyl acid", "ethyl alcohol"},
         4},

        {"Perisperm differs from endosperm in",
         {"being a diploid tissue", " its formation by fusion of secondary nucleus with several sperms",
          "being a haploid tissue", "having no reserve food"},
         1},

        {"Which cell organelle is related to glycoprotein formation?", {"Golgi apparatus", "Rough endoplasmic reticulum", "Glyoxysome", "Mitochondria"}, 1},

        {"Mendelian recombinations are due to", {"linkage", "independent assortment of genes", "mutations", "dominant characters"}, 4},

        {"Bicarpellary gynoecium and oblique ovary is found in", {"Solanum melongena", "Sesbania", "Pisum sativum", "Brassica campestris"}, 3},

        {"The idea of matter waves was given by",
         {"Davisson and Germer ", " de-Broglie", "Einstein", "Planck"},
         1},

        {"A force F = (5i+3j+2k)N is applied over a particle which displaces it from its origin to the point r = (2i-j)m.The work done on the particle in joules is ",
         {"-7", "+7",
          "+10", "+13"},
         2},

        {"A long string is stretched by 2cm and the potential energy is V. If the spring is stretched by 10cm, its potential energy will be",
         {"V/25", "V/5", "5V", "25V"},
         4},

        {"Assertion : The centre of mass of an electron and proton, when released moves faster towards proton. Reason : This is because proton is heavier.",
         {"If both assertion and reason are true and reason is the correct explanation of assertion.", "If both assertion and reason are true but reason is not the correct explanation of assertion.", "If assertion is true but reason is false.", "If both assertion and reason are false."},
         4},

        {"If the unit of force and length be each increased by four times, then the unit of energy is increased by",
         {"16 times", "8 times", "2 times", "4 times"},
         1},

        {"On electrolysis of water, a total of 1 mole of gases is evolved.The amount of water decomposed is ",
         {"1 mol", "2 mol", "1/3 mol", "2/3 mol"},
         4},

        {"An organic compound contains 80 percent (by wt.) carbon and remaining percentage of hydrogen. The right option for the empirical formula of this compound is: [Atomic wt of C is 12 and of H is 1]",
         {"CH", "CH2", "CH3", "CH4"},
         3},

        {"Complete reaction of 2g of Ca (at. wt. = 40) with excess HCL produces 1.125L of H2 gas.Complete reaction of the same quantity of another metal M with excess HCL produces 1.85L of H2 gas under indentical conditions. The equivalent weight of M is closest to",
         {"23", "9", "7", "12"},
         4},

        {"Mixture of 1g of Na2CO3 and NaHCO3 is reacted with 0.1N HCl. The quantity of 0.1M HCl required to react completely with the above mixture is",
         {"15.78ml", "157.8ml", "198.4ml", "308ml"},
         4},

        {"A mixture of 2.3 g formic acid and 4.5 g oxalic acid is treated with conc.H2SO4. The evolved gaseous mixture is passed through KOH pellets.Weight(in g) of the remaining product at STP will be",
         {"2.8", "3", "1.4", "4.4"},
         1},
    };

    for (int i = 0; i < MAX_QUESTIONS; i++)
    {
        q[i] = qu[i];
    }
}