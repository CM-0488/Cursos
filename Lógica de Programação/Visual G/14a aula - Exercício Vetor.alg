algoritmo "Exerc�cio Vetor"
// Fun��o :
// Autor : Carla Marcondes
// Data : 24/01/2024
// Se��o de Declara��es 
var

   numerodigitado: vetor [1..5] de inteiro
   indice, resultado: inteiro

inicio

      para indice de 1 ate 5 faca
      
           escreval ("Digite um n�mero: ")
           leia (numerodigitado [indice])

           resultado <- resultado + numerodigitado [indice]

      fimpara
      
      escreval
      escreval ("A soma dos n�meros digitados �: ", resultado)
      escreval
      escreval ("Voc� digitou o n�mero ", numerodigitado [1])
      escreval ("Voc� digitou o n�mero ", numerodigitado [2])
      escreval ("Voc� digitou o n�mero ", numerodigitado [3])
      escreval ("Voc� digitou o n�mero ", numerodigitado [4])
      escreval ("Voc� digitou o n�mero ", numerodigitado [5])

fimalgoritmo
