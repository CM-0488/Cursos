algoritmo "Exercício Função SE 2"
// Função :
// Autor : Carla Marcondes
// Data : 14/01/2024
// Seção de Declarações 
var

   anoDenascimento: inteiro
   idade: inteiro

inicio

      escreval ("Digite o ano de nascimento: ")
      leia (anoDenascimento)
      
      idade <- 2024 - anoDenascimento
      
      escreval ( idade, " anos de idade" )

      Se ( idade >= 18 ) Entao

         escreval ( "Aprovado para votar" )
         escreval ( "Aprovado para conduzir" )
         
      Senao

            Se ( idade >= 16 ) Entao

               escreval ( "Aprovado para votar" )
               escreval ( "Idade insuficiente para conduzir")
         
            Senao
         
               escreval ("Idade insuficiente para votar e conduzir")

            FimSe

      FimSe

fimalgoritmo
