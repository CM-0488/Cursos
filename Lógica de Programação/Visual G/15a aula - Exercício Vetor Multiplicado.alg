algoritmo "Exerc�cio Vetor Multiplicado"
// Fun��o :
// Autor : Carla Marcondes
// Data : 28/01/2024
// Se��o de Declara��es 
var

   vetornumero1: vetor [1..5] de inteiro
   vetornumero2: vetor [1..5] de inteiro
   posicaonumerovetor: inteiro

inicio

      para posicaonumerovetor de 1 ate 5 faca

           escreval ("Digite um n�mero: ")
           leia ( vetornumero1 [ posicaonumerovetor ] )
           vetornumero2 [ posicaonumerovetor ] <- vetornumero1 [ posicaonumerovetor ] * 2

      fimPara
      
      escreval
      escreval ("Resultado:")

      para posicaonumerovetor de 1 ate 5 faca

           escreval (vetornumero1 [ posicaonumerovetor ], " - ", vetornumero2 [ posicaonumerovetor ])

      fimPara

             
             

fimalgoritmo
