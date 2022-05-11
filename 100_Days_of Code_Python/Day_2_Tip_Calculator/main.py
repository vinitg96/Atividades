print("Bem vindo ao calculador de gorjeta!")
conta = float(input("Qual o total da conta? R$"))
gorjeta = int(input("Qual a % da gorjeta? (10, 12 ou 15) "))
pessoas = int(input("Quantas pessoas vão dividir a conta? "))

valor_individual = (conta + (gorjeta / 100) * conta) / pessoas

print(f"Cada pessoa deve pagar R${round(valor_individual,2)}")