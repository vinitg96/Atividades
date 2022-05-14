print('''
*******************************************************************************
 __________________
    .-'  \ _.-''-._ /  '-.
  .-/\   .'.      .'.   /\-.
 _'/  \.'   '.  .'   './  \'_
:======:======::======:======:  
 '. '.  \     ''     /  .' .'
   '. .  \   :  :   /  . .'
     '.'  \  '  '  /  '.'
       ':  \:    :/  :'
         '. \    / .'
           '.\  /.'   
             '\/'
*******************************************************************************
''')
print("Bem vindo a ilha do tesouro")
print("Sua missão é encontrar o diamante perdido")

primeira_acao = input("Para que lado você deseja ir (Esquerda ou Direita)?\n").lower()

if primeira_acao == "direita":
  print("Você foi picado no olho por uma abelha venenosa. Fim de Jogo")  
else:
  segunda_acao = input("Você avista um lago. Existe uma ilha no meio do lago. O que você vai fazer? (Esperar ou Nadar)\n").lower()
  if segunda_acao == "nadar":
    print("Você foi engolido por um jacaré. Fim de Jogo")
  else:
    terceira_acao = input("Você chega ileso a ilha. Existe uma casa com três portas, uma vermelha, uma amarela e uma azul. Em qual delas você irá entrar?\n").lower()
    if terceira_acao == "amarela":
      print("Você encontrou o tesouro! Parabéns, você venceu!")
    elif terceira_acao == "vermelha":
      print("Você entrou numa sala pegando fogo. Fim de Jogo")
    elif terceira_acao == "azul":
      print("Você entrou numa sala cheia de monstros. Fim de jogo")
    else:
      print("Você escolheu uma porta que não existe. Fim de jogo")
