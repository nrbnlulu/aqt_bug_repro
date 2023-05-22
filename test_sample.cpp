#include <QTest>
#include <catch2/catch_test_macros.hpp>


TEST_CASE("foo bar", "[foo]"){
    REQUIRE(true);
    Q_ASSERT(true);
}