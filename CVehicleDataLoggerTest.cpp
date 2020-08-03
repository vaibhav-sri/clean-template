#include <gtest/gtest.h>
 
TEST(COLLECT_TELEMATICS, Should_test_functionality_where_a_telematics_key_value_pair_is_fetched_against_a_vehicle_id) {
 telematics inputParam = {231, motor_temp, 30};
 inventory outputParam = GetVehicleTelematics(&inputParam);
 EXPECT_NEAR(30, outputParam.motor_temp, 0.001);  
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
