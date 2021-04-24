#pragma once

#include <stdint.h>

enum class uSymbolType : int8_t
{
	Unknown,

	// Arithmetic Operations
	Plus,					// +
	Minus,					// -
	Asterisk,				// *
	Divide,					// /
	Percent,				// %
	Increment,				// ++
	Decrement,				// --
	ArithmeticRightShift,	// >>

	// Bool Operations
	BoolAnd,			// &&
	BoolOr,				// ||
	BoolNot,			// !

	// Comparison Operations
	EqualTo,			// ==
	NotEqualTo,			// !=
	IdenticalTo,		// ===
	NotIdenticalTo,		// !==
	GreaterThan,		// >
	GreaterThanEqual,	// >=
	// !> becomes <=
	// !>= becomes <
	LessThan,			// <
	LessThanEqual,		// <=
	// !< becomes >=
	// !<= becomes >

	// Bitwise Operations
	Ampersand,			// &
	Pipe,				// |
	Tilde,				// ~
	Circumflex,			// ^
	BitwiseImplication,	// ->
	BitwiseLeftShift,	// <<
	BitwiseRightShift,	// >>>

	// Assignment
	Equals,						// =
	PlusEquals,					// +=
	MinusEquals,				// -=
	TimesEquals,				// *=
	DividedByEquals,			// /=
	ModuloEquals,				// %=
	ArithmeticRightShiftEquals,	// >>=
	BitwiseAndEquals,			// &=
	BitwiseOrEquals,			// |=
	BitwiseNotEquals,			// ~=
	BitwiseXorEquals,			// ^=
	BitwiseImplicationEquals,	// ->=
	BitwiseLeftShiftEquals,		// <<=
	BitwiseRightShiftEquals,	// >>>=

	// Grouping
	ParanLeft,			// (
	ParanRight,			// )
	SquareBracketLeft,	// [
	SquareBracketRight,	// ]
	CurlyBraceLeft,		// {
	CurlyBraceRight,	// }

	// Access
	Dot,				// .
	
	// Range
	Range,				// ..

	// Preprocessor
	Sharp,				// #

	// Special Directive
	At,					// @
};
