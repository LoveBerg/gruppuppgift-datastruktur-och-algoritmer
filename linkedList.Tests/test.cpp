#include "pch.h"
#include "../Datastrukturer gruppuppgift/linkedList.h"


TEST(TestCaseName, GetSizeOfList) {

	LinkedList<int> test;
	test.AddNodeToFirst(1);
	test.AddNodeToFirst(2);
	test.AddNodeToFirst(3);
	test.AddNodeToFirst(4);
	test.GetSize();
	EXPECT_EQ(3, test.GetSize());
}