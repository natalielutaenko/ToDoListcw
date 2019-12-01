#include <boost/test/unit_test.hpp>
BOOST_AUTO_TEST_SUITE(TestList)
BOOST_AUTO_TEST_CASE(Equal) {
  const float
      a = 3, b = 3;
  BOOST_REQUIRE_EQUAL(a,b);
}

BOOST_AUTO_TEST_SUITE_END()
