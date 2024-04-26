algoritmo "Vetor números diagonal"
// Função :
// Autor : Carla Marcondes
// Data : 28/01/2024
// Seção de Declarações 
var

   matriz: vetor [1..3, 1..3] de real
   soma: real
   linha: inteiro
   coluna: inteiro

inicio

      // armazena os numeros digitados pelo usuario
      para linha de 1 ate 3 faca
      
           para coluna de 1 ate 3 faca

                escreval ("Digite o número [Linha: ", linha, " - Coluna: ", coluna, " ]")
                leia(matriz[ linha, coluna ])

                fimpara
      
      fimpara
      
      // Imprime na tela a nossa tabela
      para linha de 1 ate 3 faca

           para coluna de 1 ate 3 faca

                escreva (matriz[ linha, coluna ])

                fimpara
      
                escreval
                
      fimpara
      
      // soma os numeros
      para linha de 1 ate 3 faca

           para coluna de 1 ate 3 faca

                soma<- (matriz[ 1,1 ] + matriz[ 2,2 ] + matriz[ 3,3 ] )

                fimpara

                escreval

      fimpara
      
      escreval
      escreval ("Soma da diagonal", soma)

fimalgoritmo
