algoritmo "Fun��o Escolha"
// Fun��o :
// Autor : Carla Marcondes
// Data : 15/01/2024
// Se��o de Declara��es 
var

   diaSemana : caracter
   numero : inteiro

inicio

      escreval ("Digite um n�mero de 1 a 7: ")
      leia (numero)
      
      Escolha numero
      
              Caso 1
              
                   diaSemana <- "Domingo"
                   
              Caso 2

                   diaSemana <- "Segunda-feira"

              Caso 3
              
                   diaSemana <- "Ter�a-feira"
                   
              Caso 4

                   diaSemana <- "Quarta-feira"
                   
              Caso 5

                   diaSemana <- "Quinta-feira"
                   
              Caso 6

                   diaSemana <- "Sexta-feira"
                   
              Caso 7

                   diaSemana <- "S�bado"
                   
              outroCaso

                   diaSemana <- "Valor Inv�lido"
                   
      fimEscolha
          
      escreval ( numero, " � ", diaSemana )


fimalgoritmo
