#include "../Datastrukturer gruppuppgift/Stack.h"

#include "gtest/gtest.h"
#include <string.h>

//INT STACK TESTS:
TEST(IntStackTests, AddingElementsToStack) {
	Stack<int> intStack;
	intStack.Push(10);
	intStack.Push(20);
	intStack.Push(30);
	EXPECT_EQ(30, intStack.getElement());
}

TEST(IntStackTests, PoppingElementsFromStackContaingElements) {
	Stack<int> intStack;
	intStack.Push(10);
	intStack.Push(20);
	intStack.Push(30);
	intStack.Pop();
	EXPECT_EQ(20, intStack.getElement());

}

TEST(IntStackTests, PoppingElementsFromEmptyStack) {
	Stack<int>intStack;
	EXPECT_THROW(intStack.Pop(), std::length_error);
}

TEST(IntStackTests, GettingElementFromEptyStack){
	Stack<int>intStack;
	EXPECT_THROW(intStack.Pop(), std::length_error);
}




//STRING STACK TESTS:
TEST(StringStackTests, AddingElementsToStack) {
	Stack<std::string> stringStack;
	stringStack.Push("hej");
	stringStack.Push("lilla");
	stringStack.Push("korv");
	EXPECT_EQ("korv", stringStack.getElement());
}

TEST(StringStackTests, PoppingElementsFromStackContaingElements) {
	Stack<std::string> stringStack;
	stringStack.Push("hej");
	stringStack.Push("korv");
	stringStack.Push("gubben");
	stringStack.Pop();
	EXPECT_EQ("korv", stringStack.getElement());

}

TEST(StringStackTests, PoppingElementsFromEmptyIntStack) {
	Stack<int>stringStack;
	EXPECT_THROW(stringStack.Pop(), std::length_error);
}

TEST(StringStackTests, GettingElementFromEptyIntStack) {
	Stack<int>stringStack;
	EXPECT_THROW(stringStack.Pop(), std::length_error);
}




//CLASS STACK TESTS:
class TestingClass
{
public:
	TestingClass() {
		this->testDouble = 13.37;
		this->testInt = 42;
		this->testString = "korv med broed";
	}
private:
	double testDouble;
	int testInt;
	std::string testString;
};

//
//class stackFixture : public testing::Test {
//public:
//	TestingClass korv;
//	Stack<TestingClass> ClassStack;
//	stackFixture() {
//		 initialization code here
//	}
//	void SetUp() {
//	}
//	void TearDown() {
//		 code here will be called just after the test completes
//		 ok to through exceptions from here if need be
//	}
//	~stackFixture() {
//		 cleanup any pending stuff, but no exceptions allowed
//	}
//	 put in any custom data members that you need 
//};
//


TEST(ClassStackTests, AddingElementToStack) {
	Stack<TestingClass> ClassStack;
	TestingClass korv;
	TestingClass broed;
	ClassStack.Push(korv);
	ClassStack.Push(broed);
	EXPECT_EQ(2, ClassStack.getSize());
}



TEST(ClassStackTests, PoppingElementsFromStackContaingElements) {
	Stack<TestingClass> ClassStack;
	TestingClass korv;
	TestingClass broed;
	ClassStack.Push(korv);
	ClassStack.Push(broed);
	ClassStack.Pop();
	EXPECT_EQ(1, ClassStack.getSize());

}

TEST(ClassStackTests, PoppingElementsFromEmptyStack) {
	Stack<TestingClass> ClassStack;
	EXPECT_THROW(ClassStack.Pop(), std::length_error);
}

TEST(ClassStackTests, GettingElementFromEmptyIntStack) {
	Stack<TestingClass> ClassStack;
	EXPECT_THROW(ClassStack.getElement(), std::length_error);
}


