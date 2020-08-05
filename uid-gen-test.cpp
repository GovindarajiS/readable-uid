#include "uidgen.h"

#include <string>
#include <gtest/gtest.h>

TEST(UID, UID_is_generated_within_length_limit) {
  std::string uid = uidgen();
  ASSERT_TRUE(uid.length() > 0);
}

TEST(UID, UID_is_generated_and_check_random_number_split_by_dot) {
  std::string uid = uidgen();
  size_t n = std::count(uid.begin(), uid.end(), '.');
  ASSERT_TRUE(n = 6);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
