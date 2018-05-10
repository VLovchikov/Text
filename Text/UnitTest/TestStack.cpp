#include "gtest/gtest.h"
#include "Stack.h"
#include "Stack.cpp"

TEST(Stack, can_create_stack)
{
	ASSERT_NO_THROW(Stack ss);
}

TEST(Stack, empty_stack_is_empty)
{
	Stack ss;
	EXPECT_EQ(true,ss.isEmpty());
}

TEST(Stack, cannot_pop_if_stack_is_empty)
{
	Stack ss;
	ASSERT_ANY_THROW(ss.pop());
}