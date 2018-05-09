#include "gtest/gtest.h"
#include "Stack.h"
#include "TText.h"
#include "TText.cpp"

TEST(TText, can_create_text)
{
	ASSERT_NO_THROW(TText tex);
}

TEST(TText, cannot_back_if_text_is_empty)
{
	TText tex;
	ASSERT_ANY_THROW(tex.back());
}

TEST(TText, cannot_next_if_text_is_empty)
{
	TText tex;
	ASSERT_ANY_THROW(tex.next());
}

TEST(TText, cannot_down_if_text_is_empty)
{
	TText tex;
	ASSERT_ANY_THROW(tex.down());
}

TEST(TText, can_move_back)
{
	TText tex;
	tex.addDown("Hello");
	ASSERT_NO_THROW(tex.back());
}

TEST(TText, can_move_next)
{
	TText tex;
	tex.addNext("Hello");
	tex.back();
	ASSERT_NO_THROW(tex.next());
}

TEST(TText, can_move_down)
{
	TText tex;
	tex.addDown("Hello");
	tex.back();
	ASSERT_NO_THROW(tex.down());
}

TEST(TText, can_add_next)
{
	TText tex;
	ASSERT_NO_THROW(tex.addNext("Hello"));
}

TEST(TText, can_add_down)
{
	TText tex;
	ASSERT_NO_THROW(tex.addDown("Hello"));
}

TEST(TText, can_edit)
{
	TText tex;
	ASSERT_NO_THROW(tex.edit("Edit is working"));
	cout << tex.printcurr() << endl;;
}

TEST(TText, can_delete_lurr)
{
	TText tex;
	tex.addNext("Lvl1");
	tex.addDown("Lvl2");
	tex.addNext("Lvl3");
	tex.back();
	ASSERT_NO_THROW(tex.deletelurr());
}