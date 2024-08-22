Algoritmo "exercicio_08"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 05/04/2024
Var
// Seção de Declarações das variáveis 
cod_um: inteiro
cod_dois: inteiro
val_um: real
val_dois: real
qtd_um: inteiro
qtd_dois: inteiro
porcent: real
total: real


Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
leia(val_um)
leia(val_dois)
leia(qtd_um)
leia(qtd_dois)
leia(porcent)
total <- ((val_um*qtd_um)+(val_dois*qtd_dois))*((porcent/100)+1)
escreva ("O valor total a ser pago eh", total)
Fimalgoritmo