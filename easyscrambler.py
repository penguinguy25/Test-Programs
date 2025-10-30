import random

moves = ["R", "R'", "U", "U'", "L", "L'", "D", "D'", "F", "F'", "M", "M'", "B", "B'"]

move_count = 0

while move_count != 20:
    random_move = random.randint(0, 13)
    print(f"{moves[random_move]}", end=" ")
    move_count += 1

# uh your cube is scrambled now! not really i still need to implement double moves
# C version coming soon anyway ebfiehfiojefewmfk