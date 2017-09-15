//
// Created by jflop on 9/15/2017.
//

#include "../../includes/google-test.h"
#include "TestClass.h"


using testing::Eq;

namespace {
class ClassDeclaration : public testing::Test {
 public:
  TestClass test;

  ClassDeclaration() = default;
};
} // End namespace

TEST_F(ClassDeclaration, nameOfTheTest1) {
  //...
}

TEST_F(ClassDeclaration, nameOfTheTest2) {
  //...
}

