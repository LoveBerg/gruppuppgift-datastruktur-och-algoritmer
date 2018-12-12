#include "pch.h"
#include "../Datastrukturer gruppuppgift/QueueMedLinkedList.h"
#include <string.h>

//INT QUEUE TESTS:
TEST(IntQueueTests, AddingElementsToStack) {
	QueueMedLinkedList<int> intQueue;
	intQueue.Push(10);
	intQueue.Push(20);
	intQueue.Push(30);
	EXPECT_EQ(10, intQueue.getElement());
}

TEST(IntQueueTests, PoppingElementsFromStackContaingElements) {
	QueueMedLinkedList<int> intQueue;
	intQueue.Push(10);
	intQueue.Push(20);
	intQueue.Push(30);
	intQueue.Pop();
	EXPECT_EQ(2, intQueue.getSize());

}

TEST(IntQueueTests, PoppingElementsFromEmptyStack) {
	QueueMedLinkedList<int>intQueue;
	EXPECT_THROW(intQueue.Pop(), std::length_error);
}

TEST(IntStackTests, GettingElementFromEptyStack) {
	QueueMedLinkedList<int>intQueue;
	EXPECT_THROW(intQueue.Pop(), std::length_error);
}




//STRING QUEUE TESTS:
TEST(StringQueueTests, AddingElementsToStack) {
	QueueMedLinkedList<std::string> stringQueue;
	stringQueue.Push("hej");
	stringQueue.Push("lilla");
	stringQueue.Push("korv");
	EXPECT_EQ("hej", stringQueue.getElement());
}

TEST(QueueMedLinkedList, PoppingElementsFromStackContaingElements) {
	QueueMedLinkedList<std::string> stringQueue;
	stringQueue.Push("hej");
	stringQueue.Push("korv");
	stringQueue.Push("gubben");
	stringQueue.Pop();
	EXPECT_EQ(2, stringQueue.getSize());

}

TEST(QueueMedLinkedList, PoppingElementsFromEmptyIntStack) {
	QueueMedLinkedList<int>stringQueue;
	EXPECT_THROW(stringQueue.Pop(), std::length_error);
}

TEST(QueueMedLinkedList, GettingElementFromEptyIntStack) {
	QueueMedLinkedList<int>stringQueue;
	EXPECT_THROW(stringQueue.Pop(), std::length_error);
}




//CLASS QUEUE TESTS:
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


TEST(ClassQueueTests, AddingElementToStack) {
	QueueMedLinkedList<TestingClass> ClassQueue;
	TestingClass korv;
	TestingClass broed;
	ClassQueue.Push(korv);
	ClassQueue.Push(broed);
	EXPECT_EQ(2, ClassQueue.getSize());
}



TEST(ClassQueueTests, PoppingElementsFromStackContaingElements) {
	QueueMedLinkedList<TestingClass> ClassQueue;
	TestingClass korv;
	TestingClass broed;
	ClassQueue.Push(korv);
	ClassQueue.Push(broed);
	ClassQueue.Pop();
	EXPECT_EQ(1, ClassQueue.getSize());

}

TEST(ClassQueueTests, PoppingElementsFromEmptyStack) {
	QueueMedLinkedList<TestingClass> ClassQueue;
	EXPECT_THROW(ClassQueue.Pop(), std::length_error);
}

TEST(ClassQueueTests, GettingElementFromEmptyIntStack) {
	QueueMedLinkedList<TestingClass> ClassQueue;
	EXPECT_THROW(ClassQueue.getElement(), std::length_error);
}


