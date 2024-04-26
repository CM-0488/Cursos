algoritmo "Exercício Vetor"
// Função :
// Autor : Carla Marcondes
// Data : 24/01/2024
// Seção de Declarações 
var

   numerodigitado: vetor [1..5] de inteiro
   indice, resultado: inteiro

inicio

      para indice de 1 ate 5 faca
      
           escreval ("Digite um número: ")
           leia (numerodigitado [indice])

           resultado <- resultado + numerodigitado [indice]

      fimpara
      
      escreval
      escreval ("A soma dos números digitados é: ", resultado)
      escreval
      escreval ("Você digitou o número ", numerodigitado [1])
      escreval ("Você digitou o número ", numerodigitado [2])
      escreval ("Você digitou o número ", numerodigitado [3])
      escreval ("Você digitou o número ", numerodigitado [4])
      escreval ("Você digitou o número ", numerodigitado [5])

fimalgoritmo
