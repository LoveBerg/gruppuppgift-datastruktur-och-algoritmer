#include "pch.h"
#include "../Datastrukturer gruppuppgift/DoubleLinkedList.h"

TEST(DoubleLinkedList, InsertIntToList) {
	DoubleLinkedList<int> test;
	test.InsertFirst(1);
	test.InsertFirst(2);
	test.InsertFirst(3);
	test.InsertFirst(4);
	test.GetSize();
	EXPECT_EQ(4, test.GetSize());
}