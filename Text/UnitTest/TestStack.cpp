#include "gtest/gtest.h"
#include "Stack.h"
#include "Stack.cpp"

TEST(Stack, can_create_stack)
{
	ASSERT_NO_THROW(Stack ss);
}