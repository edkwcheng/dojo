#include "coins.hpp"
#include <cassert>
#include <iostream>

namespace {

    void life_the_universe_and_everthing()
    {
        int ans = answer();
        std::cout << ans << std::endl;
        assert(answer() == 242);
    }

    const char * green_traffic_light_pattern()
    {
        return "All tests passed\n";
    }
} // namespace

int main()
{
    life_the_universe_and_everthing();
    std::cout << green_traffic_light_pattern();
}
