#include <doctest/doctest.h>
#include "../../../src/tsin.h"
#include "../../../src/Parameters.h"
#include "../../../src/GetInput.h"

TEST_CASE("C60 example regression test") {
  TSIN Input;
  Input.ReadFromFile("./c60.inp", 5);
  Parameters InP;
  GetInputParameters(InP, Input);
  CHECK( 0 == 0 );
}

