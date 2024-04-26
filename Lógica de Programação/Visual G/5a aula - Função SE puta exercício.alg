algoritmo "Exercício SE"
// Função :
// Autor :  Carla Marcondes
// Data : 12/01/2024
// Seção de Declarações 
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

         Escreval("Aprovado com a média: ", media)
      
      Senao
      
           Escreval("Recuperação. Tirou a média: ", media )
           Escreval
           Escreval
           Escreval("Digite a nota da Recuperação: ")
           leia ( notaRecuperacao )
           
           mediaRecuperacao <- ( media + notaRecuperacao ) / 2
           
           Se ( mediaRecuperacao >= 7) Entao
           
              Escreval ("Média: " , media)
              Escreval ("Nota de Recuperação: " , notaRecuperacao)
              Escreval ("Aprovado com a média: " , mediaRecuperacao)
           
           Senao
           
              Escreval ("Média: " , media)
              Escreval ("Nota de Recuperação: " , notaRecuperacao)
              Escreval ("Reprovado com a média: " , mediaRecuperacao)

           FimSe
      
      FimSe

fimalgoritmo
