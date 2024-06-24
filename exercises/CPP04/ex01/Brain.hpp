#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called\n" << std::endl;
    ideas[0] = "A bird planning the perfect nest.";
	ideas[1] = "A squirrel devising a nut storage system.";
	ideas[2] = "A cat plotting the best sunbathing spot.";
	ideas[3] = "A dog thinking about the next walk route.";
	ideas[4] = "A dolphin designing a new game with bubbles.";
	ideas[5] = "An octopus strategizing an escape plan from an aquarium.";
	ideas[6] = "A bee mapping out the most efficient flower collection route.";
	ideas[7] = "A raccoon figuring out the easiest way to open a trash can.";
	ideas[8] = "A monkey inventing a new tool for cracking nuts.";
	ideas[9] = "An elephant considering how to use its trunk to paint.";
    ideas[10] = "A bird planning the perfect nest.";
	ideas[11] = "A squirrel devising a nut storage system.";
	ideas[12] = "A cat plotting the best sunbathing spot.";
	ideas[13] = "A dog thinking about the next walk route.";
	ideas[14] = "A dolphin designing a new game with bubbles.";
	ideas[15] = "An octopus strategizing an escape plan from an aquarium.";
	ideas[16] = "A bee mapping out the most efficient flower collection route.";
	ideas[17] = "A raccoon figuring out the easiest way to open a trash can.";
	ideas[18] = "A monkey inventing a new tool for cracking nuts.";
	ideas[19] = "An elephant considering how to use its trunk to paint.";
    ideas[20] = "A bird planning the perfect nest.";
	ideas[21] = "A squirrel devising a nut storage system.";
	ideas[22] = "A cat plotting the best sunbathing spot.";
	ideas[23] = "A dog thinking about the next walk route.";
	ideas[24] = "A dolphin designing a new game with bubbles.";
	ideas[25] = "An octopus strategizing an escape plan from an aquarium.";
	ideas[26] = "A bee mapping out the most efficient flower collection route.";
	ideas[27] = "A raccoon figuring out the easiest way to open a trash can.";
	ideas[28] = "A monkey inventing a new tool for cracking nuts.";
	ideas[29] = "An elephant considering how to use its trunk to paint.";
    ideas[30] = "A bird planning the perfect nest.";
	ideas[31] = "A squirrel devising a nut storage system.";
	ideas[32] = "A cat plotting the best sunbathing spot.";
	ideas[33] = "A dog thinking about the next walk route.";
	ideas[34] = "A dolphin designing a new game with bubbles.";
	ideas[35] = "An octopus strategizing an escape plan from an aquarium.";
	ideas[36] = "A bee mapping out the most efficient flower collection route.";
	ideas[37] = "A raccoon figuring out the easiest way to open a trash can.";
	ideas[38] = "A monkey inventing a new tool for cracking nuts.";
	ideas[39] = "An elephant considering how to use its trunk to paint.";
    ideas[40] = "A bird planning the perfect nest.";
	ideas[41] = "A squirrel devising a nut storage system.";
	ideas[42] = "A cat plotting the best sunbathing spot.";
	ideas[43] = "A dog thinking about the next walk route.";
	ideas[44] = "A dolphin designing a new game with bubbles.";
	ideas[45] = "An octopus strategizing an escape plan from an aquarium.";
	ideas[46] = "A bee mapping out the most efficient flower collection route.";
	ideas[47] = "A raccoon figuring out the easiest way to open a trash can.";
	ideas[48] = "A monkey inventing a new tool for cracking nuts.";
	ideas[49] = "An elephant considering how to use its trunk to paint.";
    ideas[50] = "A bird planning the perfect nest.";
	ideas[51] = "A squirrel devising a nut storage system.";
	ideas[52] = "A cat plotting the best sunbathing spot.";
	ideas[53] = "A dog thinking about the next walk route.";
	ideas[54] = "A dolphin designing a new game with bubbles.";
	ideas[55] = "An octopus strategizing an escape plan from an aquarium.";
	ideas[56] = "A bee mapping out the most efficient flower collection route.";
	ideas[57] = "A raccoon figuring out the easiest way to open a trash can.";
	ideas[58] = "A monkey inventing a new tool for cracking nuts.";
	ideas[59] = "An elephant considering how to use its trunk to paint.";
    ideas[60] = "A bird planning the perfect nest.";
	ideas[61] = "A squirrel devising a nut storage system.";
	ideas[62] = "A cat plotting the best sunbathing spot.";
	ideas[63] = "A dog thinking about the next walk route.";
	ideas[64] = "A dolphin designing a new game with bubbles.";
	ideas[65] = "An octopus strategizing an escape plan from an aquarium.";
	ideas[66] = "A bee mapping out the most efficient flower collection route.";
	ideas[67] = "A raccoon figuring out the easiest way to open a trash can.";
	ideas[68] = "A monkey inventing a new tool for cracking nuts.";
	ideas[69] = "An elephant considering how to use its trunk to paint.";
    ideas[70] = "A bird planning the perfect nest.";
	ideas[71] = "A squirrel devising a nut storage system.";
	ideas[72] = "A cat plotting the best sunbathing spot.";
	ideas[73] = "A dog thinking about the next walk route.";
	ideas[74] = "A dolphin designing a new game with bubbles.";
	ideas[75] = "An octopus strategizing an escape plan from an aquarium.";
	ideas[76] = "A bee mapping out the most efficient flower collection route.";
	ideas[77] = "A raccoon figuring out the easiest way to open a trash can.";
	ideas[78] = "A monkey inventing a new tool for cracking nuts.";
	ideas[79] = "An elephant considering how to use its trunk to paint.";
    ideas[80] = "A bird planning the perfect nest.";
	ideas[81] = "A squirrel devising a nut storage system.";
	ideas[82] = "A cat plotting the best sunbathing spot.";
	ideas[83] = "A dog thinking about the next walk route.";
	ideas[84] = "A dolphin designing a new game with bubbles.";
	ideas[85] = "An octopus strategizing an escape plan from an aquarium.";
	ideas[86] = "A bee mapping out the most efficient flower collection route.";
	ideas[87] = "A raccoon figuring out the easiest way to open a trash can.";
	ideas[88] = "A monkey inventing a new tool for cracking nuts.";
	ideas[89] = "An elephant considering how to use its trunk to paint.";
    ideas[90] = "A bird planning the perfect nest.";
	ideas[91] = "A squirrel devising a nut storage system.";
	ideas[92] = "A cat plotting the best sunbathing spot.";
	ideas[93] = "A dog thinking about the next walk route.";
	ideas[94] = "A dolphin designing a new game with bubbles.";
	ideas[95] = "An octopus strategizing an escape plan from an aquarium.";
	ideas[96] = "A bee mapping out the most efficient flower collection route.";
	ideas[97] = "A raccoon figuring out the easiest way to open a trash can.";
	ideas[98] = "A monkey inventing a new tool for cracking nuts.";
	ideas[99] = "An elephant considering how to use its trunk to paint.";
}

Brain::Brain(const Brain &other)
{
    *this = other;
    std::cout << "Brain copy constructor called\n" << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
    int i;

    i = 0;
    while (i < 100)
    {
        ideas[i] = other.ideas[i];
        i++;
    }
    std::cout << "Brain copy assignment called\n" << std::endl;
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain destructor called\n" << std::endl;
}
