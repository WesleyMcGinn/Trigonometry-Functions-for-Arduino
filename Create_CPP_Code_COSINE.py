# Program made by Wesley McGinn
# Writes C++ Code in the Python Shell that can be copied and pasted into a sketch

import math
pi = 3.141592653589793
Loop = -1
while Loop <= 360:
  print("if (n == " + str(Loop) + ") { return " + str(math.cos((pi/180)*Loop)) + "; }")
  Loop += 1

# Note:
# cos(90) and cos(270) both should be zero.  However, because pi is irrational, the number will not be calculated exactly.
# You may get a value of something like "-1.8369701987210297e-16".  The "e-16" means that the decimal needs to be moved 16
# places to the left.  In other words, this program thinks that the cosine of 270 is -0.00000000000000018369701987210297.
# This is very slightly off from the actual value (0), but it can throw off the arduino program, so just change it to 0.
