algoritmo "Vertor Pesquisa de Número"
// Função :
// Autor :  Carla Marcondes
// Data : 28/01/2024
// Seção de Declarações 
var

   listadenumeros: vetor [1..10] de inteiro
   numero, posicao: inteiro

inicio

      // preencher dados vetor
      
      para posicao de 1 ate 10 faca
      
      escreval ("Digite o número ", posicao)
      leia (listadenumeros [posicao])
      
      fimpara
      
      escreval
      escreval ("Digite um número para pesquisar: ")
      leia (numero)
      
      posicao <- 1
      
      //Busca número digitado para pesquisa
      enquanto ( posicao < 10 ) e (listadenumeros [posicao] <> numero) faca
      
               posicao <- posicao + 1
               
      fimenquanto
      
      // Imprime na tela a posição que o número está
      
      se listadenumeros [posicao] = numero entao
      
         escreval ("Número encontrado na posição: ", posicao)
      
      senao
      
         escreval ("XXX Número não encontrado XXX")
      
      fimse

fimalgoritmo
