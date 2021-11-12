# Program made by Wesley McGinn
# Writes C++ Code in the Python Shell that can be copied and pasted into a sketch


import math
pi = 3.141592653589793

# Initial Code:
print("double i_Cos(double m) {") # Starts function creation
print("  double n = ((round(m*100))/(100));") # Rounds input to the nearest hundredth
print("  if (n < -1) { return -180; }") # Returns what may be called a "usable error" if the input exceeds below the range
print("  if (n > 1) { return 180; }") # Returns what may be called a "usable error" if the input exceeds above the range

# Repeating Code (with value changes):
Loop = -1
while Loop <= 1:
  print("  if (n > " + str(round(Loop-0.01, 2)) + " && n <= " + str(round(Loop+0.01, 2)) + ") { return " + str(round(math.acos(Loop)*(180/pi),2)) + "; }")
  Loop = round(Loop+0.02,2)

# Ending Code:
print("}")
