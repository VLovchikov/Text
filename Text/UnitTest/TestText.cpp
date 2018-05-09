#include "gtest/gtest.h"
#include "Stack.h"
#include "TText.h"
#include "TText.cpp"

TEST(TText, can_create_text)
{
	ASSERT_NO_THROW(TText tex);
}