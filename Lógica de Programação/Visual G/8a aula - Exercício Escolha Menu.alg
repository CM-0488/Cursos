algoritmo "Exerc�cio Escolha Menu"
// Fun��o :
// Autor : Carla Marcondes
// Data : 16/01/2024
// Se��o de Declara��es 
var

   numero1, numero2, resultado: real
   operacao: inteiro

inicio

      escreval ("Escolha um n�mero entre 1 e 4: ")
      escreval ("Op��o 1: Soma")
      escreval ("Op��o 2: Subtra��o")
      escreval ("Op��o 3: Divis�o")
      escreval ("Op��o 4: Multiplica��o")
      leia (operacao)
      
      escreval
      escreval
      escreval ("Digite o n�mero 1: ")
      leia (numero1)
      escreval ("Digite o n�mero 2: ")
      leia (numero2)

      Escolha operacao

             Caso 1
             
                  resultado <- numero1 + numero2
                  
             Caso 2

                  resultado <- numero1 - numero2
                  
             Caso 3

                  Se ((numero1 = 0) ou (numero2 = 0)) Entao
                     Escreval  ("Erro ao dividir o n�nmero")
                  
                  Senao
                     resultado <- numero1 / numero2
                  
                  FimSe
                  
             Caso 4

                  resultado <- numero1 * numero2

      FimEscolha
      
      Se ( (operacao >= 1) e (operacao <= 4) ) Entao

         escreval ("Total: ", resultado)
      
      Senao

         escreval ("Escolha incorreta!")
      
      FimSe

fimalgoritmo
