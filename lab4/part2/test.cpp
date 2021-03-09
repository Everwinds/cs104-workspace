#include "arraylist.h"
#include "gtest/gtest.h"

class ArrayListTest : public testing::Test {
protected:
	// You can remove any or all of the following functions if its body is empty.

	ArrayListTest() {
		// You can do set-up work for each test here.
	}

	virtual ~ArrayListTest() {
		// You can do clean-up work that doesn't throw exceptions here.		
	}

	// If the constructor and destructor are not enough for setting up
	// and cleaning up each test, you can define the following methods:
	virtual void SetUp() {
		// Code here will be called immediately after the constructor (right
		// before each test).
	for (int i = 0 ; i < 8; i++) {
		list.add(i+1);
	}
	}

	virtual void TearDown() {
		// Code here will be called immediately after each test (right
		// before the destructor).
	}

	// Objects declared here can be used by all tests in the test case.
	ArrayList list;
};

/*
TEST_F(ArrayListTest, GetNominal) {
	// Exepct 0th element to be 1, 1st elemnt to be 2, etc.
	for (int i = 0 ; i < 6; i++) {
		EXPECT_EQ(i + 1, list.get(i));
	}
	
}
*/

/*
TEST_F(ArrayListTest, AddNominal) {
	EXPECT_EQ(-1, list.get(0));
	EXPECT_EQ(-2, list.get(1));
	EXPECT_EQ(-3, list.get(2));
	EXPECT_EQ(-4, list.get(3));
	EXPECT_EQ(-5, list.get(4));
	EXPECT_EQ(-6, list.get(5));
	EXPECT_EQ(-7, list.get(6));
	EXPECT_EQ(-8, list.get(7));
	EXPECT_EQ(-9, list.get(8));
	EXPECT_EQ(-10, list.get(9));
	EXPECT_EQ(-11, list.get(10));
	EXPECT_EQ(-12, list.get(11));
}
*/

///*
TEST_F(ArrayListTest, RemoveNominal) {
	EXPECT_EQ(8, list.size());
	list.remove(-1);
	list.remove(0);
	list.remove(2);
	list.remove(5);
	list.remove(4);
	list.remove(3);
	list.remove(100);
	// 2 3 5
	// Error EXPECT_EQ(7, list.size());
	EXPECT_EQ(2, list.get(0));
	EXPECT_EQ(3, list.get(1));
	EXPECT_EQ(5, list.get(2));
	// ...
}
//*/

/*
TEST_F(ArrayListTest, SetOffNominal) {
	// ...
}
*/