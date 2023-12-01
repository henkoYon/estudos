def verificaNumero(linha):
    primeiroNumero = ""
    segundoNumero = ""
    verifica = False
    for encontraNumero in linha:
        if encontraNumero >= '0' and encontraNumero <= '9' and verifica == False:
            verifica = True
            primeiroNumero = encontraNumero
            segundoNumero = encontraNumero
        elif encontraNumero >= '0' and encontraNumero <= '9' and verifica == True:
            segundoNumero = encontraNumero
    armazena = primeiroNumero + segundoNumero
    return armazena


arquivo = open("informacoes.txt")
linhas = arquivo.readlines()
somatorio = 0
numero = ""
for linha in linhas:
    numero = verificaNumero(linha)
    if numero:
        num = int(numero)
        print(num)
        somatorio += num
print(somatorio)