// file containing set of 15 Qs as JEEMains Daily Practice Paper 3

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

} jeeDPP3;

// JEE Mains Daily Practice paper 3
void JEE_dpp3(jeeDPP3 q[])
{
    // defining variable qu[] of type_name 'jeeDPP3'
    jeeDPP3 qu[MAX_QUESTIONS] = {
        {"The quantities which have the same dimensions as those of solid angle are",
         {"stress and angle",
          "strain and arc", "angular speed and stress", "strain and angle "},
         4},

        {"The wavelength of Lyman series of hydrogen atom appears in",
         {"Ultraviolet region", "Infrared region ",
          "Visible region",
          "Far infrared region"},
         1},

        {"For which one of the following, Bohr model is not valid?",
         {"Singly ionised helium atom ", "Deuteron atom", " Singly ionised neon atom", " Hydrogen atom "},
         3},

        {"The ratio of wavelengths of the last line of the Balmer series and the last line of the Lyman series is ",
         {"2", "1", "4", "0.5"},
         3},

        {"The electromagnetic radiation which has the smallest wavelength are",
         {"X-rays", "Gamma rays ", " Ultraviolet rays", "Microwaves  "},
         2},

        {"The element expected to form largest ion to achieve the nearest noble gas configuration is :",
         {"Na", "O", "F", "N"},
         4},

        {"The number of angular nodes and radial nodes in 3 s orbital are:",
         {"0 and 2 ,respectively", "1 and 0 ,respectively", " 3 and 0 ,respectively ", " 0 and 1,respectively  "},
         1},

        {"Which is the correct order of increasing energy of the listed orbitals in the atom of titanium?",
         {"3s 4s 3p 3d", "4s 3s 3p 3d", " 3s 3p 3d 4s", " 3s 3p 4s 3d"},
         4},

        {"Pumice stone is an example of:",
         {"foam", "sol", "gel", "solid sol"},
         4},

        {"Fog is a colloidal solution of:",
         {"liquid in gas", "gas in liquid", "solid in gas", "gas in gas"},
         1},

        {"Let A={1,2,3,4,5}. Let R be a relation on A defined by xRy if and only if 4x≤5y. Let  m be the number of elements in R and n be the minimum number of elements from A×A that are required to be added to R to make it a symmetric relation.Then m +n is equal to : ",
         {"25", "24", "26", "23"},
         1},

        {"Let a rectangle ABCD of sides 2 and 4 be inscribed in another rectangle PQRS such that the vertices of the rectangle ABCD lie on the sides of the rectangle PQRS.Let a and b be the sides of the rectangle PQRS when its area is maximum.Then(a + b) 2 is equal to :",
         {"72", "60", "64", "80"},
         1},

        {"An urn contains 6 white and 9 black balls. Two successive draws of 4 balls are made without replacement. The probability, that the first draw gives all white balls and the second draw gives all black balls, is : ",
         {"5/256", "5/715", "3/715", "3/256"},
         3},

        {"A bag contains 8 balls whose colours are either white or black.4 balls are drawn at random without replacement and it was found that 2 balls are white and other 2 balls are black.The probability that the bag contains equal number of white and black balls is : ",
         {"2/5", "2/7", "1/7", "1/5"},
         2},

        {"Let two straight lines drawn from the origin O intersect the first line 3x+4y=12 at the points P and Q such that △ OPQ is an isosceles triangle and ∠POQ=90∘. If l=OP 2+PQ 2+QO 2 , then the greatest integer less than or equal to l",
         {"42", "46", "44", "48"},
         2}};

    for (int i = 0; i < MAX_QUESTIONS; i++)
    {
        q[i] = qu[i];
    }
}