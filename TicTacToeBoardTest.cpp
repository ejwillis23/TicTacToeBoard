/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} 
		virtual ~TicTacToeBoardTest(){} 
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(TicTacToeBoardTest, xtoggleturn)
{
    TicTacToeBoard mypiece;

    Piece real = mypiece.toggleTurn();

	ASSERT_EQ(real, O);
}

TEST(TicTacToeBoardTest, otoggleturn)
{
    TicTacToeBoard mypiece;

    mypiece.toggleTurn();
    Piece real = mypiece.toggleTurn();

	ASSERT_EQ(real, X);
}


TEST(TicTacToeBoardTest, empXplacePiece)
{
    TicTacToeBoard mypiece;

    Piece real = mypiece.placePiece(0, 0);

	ASSERT_EQ(real, X);
}

TEST(TicTacToeBoardTest, off33placePiece)
{
    TicTacToeBoard mypiece;

    Piece real = mypiece.placePiece(3, 3);

	ASSERT_EQ(real, Invalid);
}

TEST(TicTacToeBoardTest, row3getPiece)
{
    TicTacToeBoard mypiece;

    Piece real = mypiece.getPiece(3, 0);

	ASSERT_EQ(real, Invalid);
}

TEST(TicTacToeBoardTest, col3getPiece)
{
    TicTacToeBoard mypiece;

    Piece real = mypiece.getPiece(0, 3);

	ASSERT_EQ(real, Invalid);
}

TEST(TicTacToeBoardTest, off33getPiece)
{
    TicTacToeBoard mypiece;

    Piece real = mypiece.getPiece(3, 3);

	ASSERT_EQ(real, Invalid);
}

TEST(TicTacToeBoardTest, emptyBoard1getPiece)
{
    TicTacToeBoard mypiece;

    Piece real = mypiece.getPiece(0, 0);

	ASSERT_EQ(real, Blank);
}

TEST(TicTacToeBoardTest, emptyBoard2getPiece)
{
    TicTacToeBoard mypiece;

    Piece real = mypiece.getPiece(2, 2);

	ASSERT_EQ(real, Blank);
}

TEST(TicTacToeBoardTest, getWinnerTest)
{
    TicTacToeBoard mypiece;

    Piece real = mypiece.getWinner(0, 0);

	ASSERT_EQ(real, Blank);
}
