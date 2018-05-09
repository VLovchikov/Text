// UnitTest.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "gtest/gtest.h"
#include "TText.h"

int main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}


