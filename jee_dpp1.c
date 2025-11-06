// file containing set of 15 Qs as JEEMains Daily Practice Paper 1

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

} jeeDPP1;

// JEE Mains Daily Practice paper 1
void JEE_dpp1(jeeDPP1 q[])
{
    // defining variable qu[] of type_name 'jeeDPP1'
    jeeDPP1 qu[MAX_QUESTIONS] = {
        {"The force of gravitation is",
         {"repulsive", "conservative", "electrostatic", "non-conservative"},
         2},

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

        {"Let Z and W be complex numbers such that |Z|=|W|, and arg Z denotes the principal argument of Z. Statement 1 : If arg Z + arg W = π, then Z = -W. Statement 2 :| Z | = | W |, implies arg Z -arg W = π.",
         {"Statement 1 is true, Statement 2 is false.", "Statement 1 is true, Statement 2 is true, Statement 2 is a correct explanation for Statement 1.", "Statement 1 is true, Statement 2 is true, Statement 2 is not a correct explanation for Statement 1.", "Statement 1 is false, Statement 2 is true."},
         1},

        {"A bag contains 8 balls, whose colours are either white or black. 4 balls are drawn at random without replacement and it was found that 2 balls are white and other 2 balls are black.The probability that the bag contains equal number of white and black balls is : ",
         {"2/5", "2/7", "1/7", "1/5"},
         2},

        {"An urn contains 6 white and 9 black balls. Two successive draws of 4 balls are made without replacement. The probability, that the first draw gives all white balls and the second draw gives all black balls, is : ",
         {"5/256", "5/715", "3/715", "3/256"},
         3},

        {"A fair die is thrown until 2 appears. Then the probability, that 2 appears in even number of throws , is",
         {"5/6", "1/6", "5/11", "6/11"},
         3},

        {"An integer is chosen at random from the integers 1, 2, 3, ..., 50. The probability that the chosen integer is a multiple of atleast one of 4, 6 and 7 is ",
         {"8/25", "21/50", "9/50", "14/25"},
         2}};

    for (int i = 0; i < MAX_QUESTIONS; i++)
    {
        q[i] = qu[i];
    }
}