algoritmo "Vetor Pares e Impares"
// Fun��o :
// Autor : Carla Marcondes
// Data : 28/01/2024
// Se��o de Declara��es 
var

   numero, posicao: inteiro
   vetorpares: vetor [1..4] de inteiro
   vetorimpares: vetor [1..4] de inteiro

inicio

      para posicao de 1 ate 4 faca

           escreval ("Digite um n�mero: ")
           leia (numero)
      
           se ( numero % 2 = 0 ) entao
              vetorpares [posicao] <- numero
      
           senao
              vetorimpares [posicao] <- numero
      
           fimse

      fimpara
           
      escreval
      escreval
      escreval ("N�meros Pares: ")
      para numero de 1 ate 4 faca
      
           escreval ( vetorpares [numero] )

      fimpara

            escreval
      escreval
      escreval ("N�meros Impares: ")
      para numero de 1 ate 4 faca

           escreval ( vetorimpares [numero] )

      fimpara
      

fimalgoritmo
