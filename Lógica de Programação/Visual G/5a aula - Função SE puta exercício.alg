algoritmo "Exerc�cio SE"
// Fun��o :
// Autor :  Carla Marcondes
// Data : 12/01/2024
// Se��o de Declara��es 
var

   nota1 : real
   nota2 : real
   nota3 : real
   nota4 : real
   media : real
   notaRecuperacao : real
   mediaRecuperacao : real


inicio

      Escreval ("Digite a nota 1: ")
      leia (nota1)
      
      Escreval ("Digite a nota 2: ")
      leia (nota2)
      
      Escreval ("Digite a nota 3: ")
      leia (nota3)
      
      Escreval ("Digite a nota 4: ")
      leia (nota4)
      
      media <- ( nota1 + nota2 + nota3 + nota4 ) / 4
      
      Se ( media >= 7 ) Entao

         Escreval("Aprovado com a m�dia: ", media)
      
      Senao
      
           Escreval("Recupera��o. Tirou a m�dia: ", media )
           Escreval
           Escreval
           Escreval("Digite a nota da Recupera��o: ")
           leia ( notaRecuperacao )
           
           mediaRecuperacao <- ( media + notaRecuperacao ) / 2
           
           Se ( mediaRecuperacao >= 7) Entao
           
              Escreval ("M�dia: " , media)
              Escreval ("Nota de Recupera��o: " , notaRecuperacao)
              Escreval ("Aprovado com a m�dia: " , mediaRecuperacao)
           
           Senao
           
              Escreval ("M�dia: " , media)
              Escreval ("Nota de Recupera��o: " , notaRecuperacao)
              Escreval ("Reprovado com a m�dia: " , mediaRecuperacao)

           FimSe
      
      FimSe

fimalgoritmo
