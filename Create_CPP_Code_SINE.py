# Program made by Wesley McGinn
# Writes C++ Code in the Python Shell that can be copied and pasted into a sketch

import math
pi = 3.141592653589793
Loop = 0
while Loop <= 360:
  print("if (n == " + str(Loop) + ") { return " + str(math.sin((pi/180)*Loop)) + "; }")
  Loop += 1
