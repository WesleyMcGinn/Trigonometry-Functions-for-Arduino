# Program made by Wesley McGinn
# Writes C++ Code in the Python Shell that can be copied and pasted into a sketch


import math
pi = 3.141592653589793

# Initial Code:
print("double i_Tan(double m) {") # Starts function creation
print("  double n = ((round(m*1000))/(1000));") # Rounds input to the nearest thousandth
print("  if (n < -50) { return -90.0; }")
print("  if (n > 50) { return 90.0; }")

# Repeating Code (with value changes):
Loop = -50
Change = 1
while Loop < 50:
  print("  if (n > " + str(round(Loop-(Change/2), 3)) + " && n <= " + str(round(Loop+(Change/2), 3)) + ") { return " + str(round(math.atan(Loop)*(180/pi),3)) + "; }")
  Loop = round(Loop+Change,2)
  Change = 1
  if Loop < 3:
    if Loop > -3:
      Change = 0.05

# Ending Code:
print("}")
