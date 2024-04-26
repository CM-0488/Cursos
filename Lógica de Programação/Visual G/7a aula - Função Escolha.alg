algoritmo "Função Escolha"
// Função :
// Autor : Carla Marcondes
// Data : 15/01/2024
// Seção de Declarações 
var

   diaSemana : caracter
   numero : inteiro

inicio

      escreval ("Digite um número de 1 a 7: ")
      leia (numero)
      
      Escolha numero
      
              Caso 1
              
                   diaSemana <- "Domingo"
                   
              Caso 2

                   diaSemana <- "Segunda-feira"

              Caso 3
              
                   diaSemana <- "Terça-feira"
                   
              Caso 4

                   diaSemana <- "Quarta-feira"
                   
              Caso 5

                   diaSemana <- "Quinta-feira"
                   
              Caso 6

                   diaSemana <- "Sexta-feira"
                   
              Caso 7

                   diaSemana <- "Sábado"
                   
              outroCaso

                   diaSemana <- "Valor Inválido"
                   
      fimEscolha
          
      escreval ( numero, " é ", diaSemana )


fimalgoritmo
