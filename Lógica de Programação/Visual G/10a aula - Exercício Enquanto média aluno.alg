algoritmo "Exerc�cio Enquanto m�dia aluno"
// Fun��o :
// Autor :  Carla Marcondes
// Data : 18/01/2024
// Se��o de Declara��es 
var

   nomeDoaluno: caracter
   nota, somaNotas: real
   contador : inteiro

inicio

      nota <- 0

      escreval ("Digite o nome do aluno: ")
      leia (nomeDoaluno)

      contador <- 1
      
      Enquanto ( contador < 5 ) faca

               escreval ( "Digite a nota ", contador, ": ")
               leia (nota)
               
               somaNotas <- somaNotas + nota
               contador <- contador + 1

      fimEnquanto

         escreval ("Aluno: ", nomeDoaluno)
         escreval ("M�dia: ", somaNotas/4)

fimalgoritmo
