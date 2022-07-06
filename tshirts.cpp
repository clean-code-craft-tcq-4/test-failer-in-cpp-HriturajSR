#include "tshirts.hpp"

namespace tshirts
{
    char tshirtsize::size(int cms)
    {
        char sizeName = '\0';
        if (cms < 38)
        {
            sizeName = 'S';
        }
        else if (cms > 38 && cms < 42)
        {
            sizeName = 'M';
        }
        else if (cms > 42)
        {
            sizeName = 'L';
        }
        return sizeName;
    };
}

int main()
{
    tshirts::tshirtsize *size_data{};
    assert(size_data->size(37) == 'S');
    assert(size_data->size(40) == 'M');
    assert(size_data->size(43) == 'L');
    assert(size_data->size(39) == 'M');
    assert(size_data->size(38) == 'S');
    assert(size_data->size(42) == 'L');
    std::cout << "All is not well\n";
    return 0;
}
