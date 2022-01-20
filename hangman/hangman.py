# import hangman_art 
# from hangman_art import stages , logo
# import hangman_words
# from hangman_words import word_list
# import random

# # print(logo)
# # print(random.choice(word_list))
# random_word = random.choice(word_list)
# print(random_word)
# length_of_random_word = len(random_word)
# print(length_of_random_word)
# underscore = "_"
# combinedunderscores = ""

# for  number in range(0 ,length_of_random_word):
#     # print(f"{underscore}")
#     combinedunderscores += underscore+" "
# print(combinedunderscores)
# user_guess = input('guess a letter ')
# if user_guess in random_word:
#     print(user_guess)
# else:
#     print(f'{user_guess} not in {random_word}')
# number_index = random_word.index(user_guess)
# print(f"{number_index} is the number indexu")
# # while user_guess in random_word:
#     # random_word.index(user_guess) 
# for  number in range(0 ,length_of_random_word):
#     if user_guess in random_word:
#         combinedunderscores += user_guess.index(number)
# print(combinedunderscores)
import random
from hangman_art import stages, logo
from hangman_words import word_list
# from replit import clear

print(logo)
game_is_finished = False
lives = len(stages) - 1

chosen_word = random.choice(word_list)
word_length = len(chosen_word)

display = []
for _ in range(word_length):
    display += "_"

while not game_is_finished:
    guess = input("Guess a letter: ").lower()

    #Use the clear() function imported from replit to clear the output between guesses.
    # clear()

    if guess in display:
        print(f"You've already guessed {guess}")

    for position in range(word_length):
        letter = chosen_word[position]
        if letter == guess:
            display[position] = letter
    print(f"{' '.join(display)}")

    if guess not in chosen_word:
        print(f"You guessed {guess}, that's not in the word. You lose a life.")
        lives -= 1
        if lives == 0:
            game_is_finished = True
            print("You lose.")
    
    if not "_" in display:
        game_is_finished = True
        print("You win.")

    print(stages[lives])











