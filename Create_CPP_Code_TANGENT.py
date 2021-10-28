# Program made by Wesley McGinn
# Writes C++ Code in the Python Shell that can be copied and pasted into a sketch

import math
pi = 3.141592653589793
Loop = -1
while Loop < 360:
  print("if (n == " + str(Loop) + ") { return " + str(math.tan((pi/180)*Loop)) + "; }")
  Loop += 1
