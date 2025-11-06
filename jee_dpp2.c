// file containing set of 15 Qs as JEEMains Daily Practice Paper 2

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
} jeeDPP2;

// JEE Mains Daily Practice paper 2
void JEE_dpp2(jeeDPP2 q[])
{
    // defining variable qu[] of type_name 'jeeDPP2'
    jeeDPP2 qu[MAX_QUESTIONS] = {
        {"N moles of a polyatomic gas(f=6) must be mixed with two moles of a monoatomic gas so that the mixture behaves as a diatomic gas. The value of N is ",
         {"6", "3", "4", "2"},
         3},

        {"Sugar which does not give reddish brown precipitate with Fehling's reagent is:", {"Sucrose", "Lactose", "Glucose", "Maltose"}, 1},

        {"The electrostatic potential due to an electric dipole at a distance r varies as : ",
         {"r", "1/r²",
          "1/r³", "1/r"},
         2},

        {"For the thin convex lens, the radii of curvature are at 15cm and 30 cm respectively.The focal length the lens is 20cm. The refractive index of the material is : ", {"1.2", "1.8", "1.5", "1.4"}, 3},

        {"The ratio of the shortest wavelength of Balmer series to the shortest wavelength of Lyman series for hydrogen atom is :", {"4:1", "1:4", "2:1", "1:2"}, 1},

        {"The number of tripeptides formed by three different amino acids using each amino acid once is",
         {"5", "6", "4", "3"},
         2},

        {"Among the following halogens F2,Cl2,Br2 and I2 Which can undergo disproportionation reactions?",
         {"F2,Cl2 and Br2", "F2 and Cl2",
          "Only I2", "Cl2,Br2 and I2"},
         4},

        {"Given below are two statements: Statement I : Gallium is used in the manufacturing of thermometers.Statement II : A thermometer containing gallium is useful for measuring the freezing point (256K)of brine solution.In the light of the above statements, choose the correct answer from the options given below :",
         {"Both Statement I and Statement II are true", "Statement I is false but Statement II is true", "Both Statement I and Statement II are false", "Statement I is true but Statement II is false"},
         4},

        {"The metal atom present in the complex MABXL (where A, B, X and L are unidentate ligands and M is metal) involves sp3 hybridization. The number of geometrical isomers exhibited by the complex is:.",
         {"4", "3", "0", "2"},
         3},

        {"Two nucleotides are joined together by a linkage known as :",
         {"Phosphodiester linkage", "Glycosidic linkage", "Disulphide linkage", "Peptide linkage"},
         1},

        {"The number of 3-digit numbers, formed using the digits 2,3,4,5 and 7 , when the repetition of digits is not allowed, and which are not divisible by 3 , is equal to",
         {"48", "36", "30", "42"},
         2},

        {"Let C be the circle of minimum area touching the parabola y=6-x² and the lines y=√3|x|. Then, which one of the following points lies on the circle C? ", {"(1,2)", "(1,1)", "(2,2)", "(2,4)"}, 4},

        {"Let A={1,2,3,4,5}.Let R be a relation on A defined by xRy if and only if 4x≤5y. Let m be the number of elements in R and n be the minimum number of elements from A*A that are required to be added to R to make it a symmetric relation. Then m+n is equal to : ",
         {"24", "25",
          "26", "23"},
         2},

        {"The area of the region enclosed by the parabolas y = x²-5x and y = 7x-x² is ",
         {"24", "36", "48", "72"},
         4},

        {"Which structure of protein remains intact after coagulation of egg white on boiling?:", {"Primary", "Tertiary", "Secondary", "Quaternary"}, 1}};

    for (int i = 0; i < MAX_QUESTIONS; i++)
    {
        q[i] = qu[i];
    }
}