algoritmo "Exercício Enquanto Faca Fatorial"
// Função :
// Autor : Carla Marcondes
// Data : 19/01/2024
// Seção de Declarações 
var

   numero, contador : inteiro
   fatorial : real

inicio

      escreval ("Digite um número: ")
      leia (numero)
      
      contador <- 1
      
      fatorial <- numero
      
      enquanto ( contador < numero ) faca
      
               fatorial <- fatorial * contador
               
               contador <- contador + 1
      
      fimEnquanto
      
      escreval ("O fatorial de", numero, " é ", fatorial)

fimalgoritmo
