algoritmo "Vertor Pesquisa de N�mero"
// Fun��o :
// Autor :  Carla Marcondes
// Data : 28/01/2024
// Se��o de Declara��es 
var

   listadenumeros: vetor [1..10] de inteiro
   numero, posicao: inteiro

inicio

      // preencher dados vetor
      
      para posicao de 1 ate 10 faca
      
      escreval ("Digite o n�mero ", posicao)
      leia (listadenumeros [posicao])
      
      fimpara
      
      escreval
      escreval ("Digite um n�mero para pesquisar: ")
      leia (numero)
      
      posicao <- 1
      
      //Busca n�mero digitado para pesquisa
      enquanto ( posicao < 10 ) e (listadenumeros [posicao] <> numero) faca
      
               posicao <- posicao + 1
               
      fimenquanto
      
      // Imprime na tela a posi��o que o n�mero est�
      
      se listadenumeros [posicao] = numero entao
      
         escreval ("N�mero encontrado na posi��o: ", posicao)
      
      senao
      
         escreval ("XXX N�mero n�o encontrado XXX")
      
      fimse

fimalgoritmo
