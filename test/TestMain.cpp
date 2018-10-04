#include "../src/main.h"
#include <assert.h>

void testGetTriangleType() {
    assert(getTriangleType(3, 4, 5) == 0);
}

int main() {
    assert(a_mod_B(6, 4) == 2);
    testGetTriangleType();
    return 0;
}
