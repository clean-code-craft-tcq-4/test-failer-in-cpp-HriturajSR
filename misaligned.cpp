#include "misaligned.hpp"

namespace misaligned
{

    const char *majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    int numberOfMajorColors = sizeof(majorColor)/sizeof(*majorColor);
    const char *minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int numberOfMinorColors = sizeof(minorColor)/sizeof(*minorColor);

    int Misaligned::printColorMap()
    {
        int i = 0, j = 0;
        for (i = 0; i < numberOfMajorColors; i++)
        {
            for (j = 0; j < numberOfMinorColors; j++)
            {
                std::cout << i * 5 + j << " | " << majorColor[i] << " | " << minorColor[i] << "\n";
            }
        }
        return i * j;
    }

    int Misaligned::GetPairNumber(MajorColor major, MinorColor minor)
    {
        return major * numberOfMinorColors + minor;
    }

    int Misaligned::ExpectedNumber(MajorColor major, MinorColor minor)
    {
        return major * numberOfMinorColors + minor + 1;
    }
}

void testPairToNumber(misaligned::MajorColor major, misaligned::MinorColor minor)
{
    misaligned::Misaligned *misaligned_object{};
    int pairNumber = misaligned_object->GetPairNumber(major, minor);
    int ExpectedpairNumber = misaligned_object->ExpectedNumber(major, minor);
    std::cout << "Pair Number " << pairNumber << std::endl;
    std::cout << "Expected Pair Number " << ExpectedpairNumber << std::endl;
    assert(pairNumber == ExpectedpairNumber);
}

int main()
{
    misaligned::Misaligned misaligned_object;
    int result = misaligned_object.printColorMap();
    assert(result == 25);
    testPairToNumber(misaligned::WHITE, misaligned::BROWN);
    testPairToNumber(misaligned::WHITE, misaligned::SLATE);
    std::cout << "All is well (maybe!)\n";
    return 0;
}
