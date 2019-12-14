import datetime

def switch(idade):
    switcher={
        10:"A e B",
        11:"A e B",
        12:"A e B",
        13:"B e C",
        14:"B e C",
        15:"B e C",
        16:"C e D",
        17:"C e D",
        18:"C e D",
        }
    return switcher.get(idade, "Erro, não pode")


def main():
    now = datetime.datetime.now()
    ano = now.year
    print("Insira o seu ano de nascimento:\n")
    anonascimento = int(input())
    print("\n")
    idade = ano - anonascimento
    print(switch(idade))

main()