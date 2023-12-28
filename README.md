# This is How to printf from scratch in C programming language
## What is printf?
* **printf** is a function that allow us to print format based text, in other words. We can print anything in one place awesome!. *basic usage*: `printf("%d%i%c%f", int, int, char, float)`
	* The first argument as a constant char followed by the rest of the arguments acording to our logic.<br />

## How does it work?
* Using first `const char` argument we can perform a formated text that act as a reference for what should be the output, and those references have to be followed by its representation: *for example* `printf("%d", integer);`<br /> As you can see, we formated the string as int with `%d` and the next argument should be their same type at least.
	* **THEY MUST FOLLOW A ORDER OR WE'LL MISSLEAD PLEACES**<br />

## What formats are available?
* Format control
	* `\*` Double quote
	* `\\` Backslash
	* `\a` Alert (BEL)
	* `\b` Backspace
	* `\c` Produce no further output
	* `\e` escape
	* `\f` form feed
	* `\n` New Line
	* `\r` Carriage return
	* `\t` Horizontal tap
	* `\v` Vertical tap
	* `\NNN` byte with octal value NNN (1 to 3 digits)
	* `\xHH` byte with hexadecimal value HH (1 to 2 digits)
	* `uHHHH` Unicode (ISO/IEC 10646) character with hex value HHHH (4 digits)
* Percent
	* `%c` print a single character.
	* `%d` print a decimal (base 10) number
	* `%e` print an exponential floating-point number`
	* `%f` print a floating-point number
	* `%g` print a general-format floating-point number
	* `%i` print an integer in base 10
	* `%o` print a number in octal (base 8)
	* `%s` print a string of characters
	* `%u` print an unsigned decimal (base 10) number
	* `%x` print a number in hexidecimal (base 16)
	* `%%` print a percent sign (\% also works)
## Width option
* In printf we can also custom our output
```
=================================================================
|Printf 	|Produces	|explain			|
|("%5d", 0)	|[][][][]0	|5 int slots (1 ocupaded)	|
|("%5d", -7)    |[][][]- 7	|5 int slot  (2 ocupaded)	|
|("%5d", 15601  |15601		|normal int output		|
=================================================================
```
* Zero padding
```
==================================================================
|Printf          |Produces       |explain                        |
|("%05d", 0)     |[][][][]0      |5 int slots (1 ocupaded)       |
|("%05d", -7)    | -0007         |5 int slot  (2 ocupaded)       |
|("%05d", 15601  |15601          |normal int output              |
|("%05d", -203506| -20350653	 |Normal negative output	 |
==================================================================
```
* Plus (`+`) sign
```
=================================================================0=
|Printf          |Produces        |explain                        |
|("%+5d", 0)     |[][][]+0        |5 int slots (1 ocupaded)       |
|("%+5d", -7)    |[][][]+7        |5 int slot  (2 ocupaded)       |
|("%+5d", 15601  |+15601          |normal plus int output         |
===================================================================
```
