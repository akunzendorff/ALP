Algoritmo "exercicio_08"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 05/04/2024
Var
// Se��o de Declara��es das vari�veis 
cod_um: inteiro
cod_dois: inteiro
val_um: real
val_dois: real
qtd_um: inteiro
qtd_dois: inteiro
porcent: real
total: real


Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
leia(val_um)
leia(val_dois)
leia(qtd_um)
leia(qtd_dois)
leia(porcent)
total <- ((val_um*qtd_um)+(val_dois*qtd_dois))*((porcent/100)+1)
escreva ("O valor total a ser pago eh", total)
Fimalgoritmo