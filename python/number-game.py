import random

number_to_guess = random.randint(1, 100)
attempts = 0

while True:
    guess = int(input("Guess the number (1-100): "))
    attempts += 1
    if guess == number_to_guess:
        print("Congratulations! You guessed the number in", attempts, "attempts.")
        break
    elif guess < number_to_guess:
        print("Try a higher number.")
    else:
        print("Try a lower number.")
