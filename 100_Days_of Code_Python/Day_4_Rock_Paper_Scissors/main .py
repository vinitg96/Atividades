import random
pedra = '''
    _______
---'   ____)
      (_____)
      (_____)
      (____)
---.__(___)
'''

papel = '''
    _______
---'   ____)____
          ______)
          _______)
         _______)
---.__________)
'''

tesoura = '''
    _______
---'   ____)____
          ______)
       __________)
      (____)
---.__(___)
'''

#Write your code below this line 👇
options = [pedra, papel, tesoura]
user_choice = int(input('''O que você escolhe?\n
      0 - Pedra\n
      1 - Papel\n
      2 - Tesoura\n
      '''))
if user_choice >= 3 or user_choice < 0:
  print("Opção Inválida, Você perdeu!")
else:
  user_choice = options[user_choice]
  computer_choice = random.choice(options)

  print(f"\nSua escolha:\n{user_choice}")
  print(f"Escolha do Computador:\n{computer_choice}")

  if user_choice == computer_choice:
    print("Empate")

  elif user_choice == pedra:
    if computer_choice == papel:
      print("Você perdeu!")
    elif computer_choice == tesoura:
      print("Você venceu!")

  elif user_choice == papel:
    if computer_choice == tesoura:
      print("Você perdeu!")
    elif computer_choice == pedra:
      print("Você venceu!")

  elif user_choice == tesoura:
    if computer_choice == pedra:
      print("Você perdeu!")
    elif computer_choice == papel:
      print("Você venceu!")

  
  

