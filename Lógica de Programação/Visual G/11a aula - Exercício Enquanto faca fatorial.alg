algoritmo "Exerc�cio Enquanto Faca Fatorial"
// Fun��o :
// Autor : Carla Marcondes
// Data : 19/01/2024
// Se��o de Declara��es 
var

   numero, contador : inteiro
   fatorial : real

inicio

      escreval ("Digite um n�mero: ")
      leia (numero)
      
      contador <- 1
      
      fatorial <- numero
      
      enquanto ( contador < numero ) faca
      
               fatorial <- fatorial * contador
               
               contador <- contador + 1
      
      fimEnquanto
      
      escreval ("O fatorial de", numero, " � ", fatorial)

fimalgoritmo
