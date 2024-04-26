algoritmo "Vetor Pares e Impares"
// Função :
// Autor : Carla Marcondes
// Data : 28/01/2024
// Seção de Declarações 
var

   numero, posicao: inteiro
   vetorpares: vetor [1..4] de inteiro
   vetorimpares: vetor [1..4] de inteiro

inicio

      para posicao de 1 ate 4 faca

           escreval ("Digite um número: ")
           leia (numero)
      
           se ( numero % 2 = 0 ) entao
              vetorpares [posicao] <- numero
      
           senao
              vetorimpares [posicao] <- numero
      
           fimse

      fimpara
           
      escreval
      escreval
      escreval ("Números Pares: ")
      para numero de 1 ate 4 faca
      
           escreval ( vetorpares [numero] )

      fimpara

            escreval
      escreval
      escreval ("Números Impares: ")
      para numero de 1 ate 4 faca

           escreval ( vetorimpares [numero] )

      fimpara
      

fimalgoritmo
