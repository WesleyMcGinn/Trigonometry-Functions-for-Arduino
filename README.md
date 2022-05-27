# Trigonometry-Functions-for-Arduino
# NOTE: FINAL.CPP HAS NOT BEEN OFFICIALLY TESTED, YET.  IT SHOULD BE TESTED BY THIS SATURDAY.
## About:
#### Although some arduinos will quickly and easily calculate basic trigonometric functions, other arduinos may take an excessive amount of time to calculate or they may not be able to calculate trigonometry at all.  That is why I am making functions that you can copy and paste into your sketch that will allow you to get values from things such as `Cos(47)`, `Sin(272)`, or even `i_Cos(0.51)`.  I am using Python to generate some of the C++ code (so that I don't have to type out every trigonometric value for every degree) and then making that code usable.

## How to use:
#### After copying and pasting the code from "FINAL.cpp" into your sketch, you can use the following syntaxes to get values:

Main Functions in Degrees:

`Sin(w) // Returns the sine of w when w is in degrees`

`Cos(w) // Returns the cosine of w when w is in degrees`

`Tan(w) // Returns the tangent of w when w is in degrees`

`i_Sin(w) // Returns the inverse of the sine of w in degrees`

`i_Cos(w) // Returns the inverse of the cosine of w in degrees`

`i_Tan(w) // Returns the inverse of the tangent of w in degrees`

Main Functions in Radians:

`siN(w) // Returns the sine of w when w is in radians`

`coS(w) // Returns the cosine of w when w is in radians`

`taN(w) // Returns the tangent of w when w is in radians`

`i_siN(w) // Returns the inverse of the sine of w in radians`

`i_coS(w) // Returns the inverse of the cosine of w in radians`

`i_taN(w) // Returns the inverse of the tangent of w in radians`

Extra Functions in Degrees:

`Sec(w) // Returns the secant of w when w is in degrees`

`Csc(w) // Returns the cosecant of w when w is in degrees`

`Cot(w) // Returns the cotangent of w when w is in degrees`

Extra Functions in Radians:

`seC(w) // Returns the secant of w when w is in radians`

`csC(w) // Returns the cosecant of w when w is in radians`

`coT(w) // Returns the cotangent of w when w is in radians`



A few general notes about this:
1)  When the first of the three main letters is capitalized, it means that that function is being calculated in degrees.
2)  When the last of the three letters is capitalized, then that function is calculated in radians.
3)  Only the three letters for abreviation are used.  `Cosine(35)` will not return the cosine of 35.
4)  `i_` at the beginning of a function name means that that function is an inverse.
5)  Inverses of secant, cosecant, and cotangent are not avalible.
6)  Writing `i_coS(0.2);` in your code will not do anything because these functions return values rather than performing tasks.  A good example of how to use this would be `servo_1.write(i_Cos(0.5));`
7)  The inverses of sine and cosine cannot take any data input that is less than `-1` or greater than `1`.  Otherwise, they will simply return a value of 1 or -1.
8)  I am not to be held responsible for anything that happens when you run my code.  If you use it, you must hold personal responsibility to use it correctly.  Math can be dangerous.
9)  If you have any questions, please ask them in the discussions or issues pages of this repository.
