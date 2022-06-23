from hangman_art import logo, stages 
from hangman_words import banco_palavras
import os
import random

clear = lambda: os.system('clear')



print(logo)


blank = []
chosen_word = random.choice(banco_palavras).lower()
for _ in range(len(chosen_word)):
    blank.append("_")
lives = 6
end_game = False
wrong_guess = []

while not end_game:

    guess = input("Write a letter: ").lower()
    clear()

    
    if guess in blank or guess in wrong_guess:
        print(f"You've already guessed '{guess}'")
        print(blank)
        print(stages[lives])
        continue #volta o loop, antes mostra o hangman
        
    for index,letter in enumerate(chosen_word):
        if letter == guess:
            blank[index] = letter

    if guess not in chosen_word:
        print(f"You guessed '{guess}' that's not in the word. You lose a life.")
        wrong_guess.append(guess)
        lives -= 1
    else:
        print(f"You guessed '{guess}' that's in the word.") #acerto
    
    print(blank)
    print(stages[lives])

    if "_" not in blank:
        end_game = True
        print("You Win!")

    if lives == 0:
        end_game = True
        print("You Lose :(")
        print(f"A palavra era: {chosen_word}")


