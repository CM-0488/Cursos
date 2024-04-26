algoritmo "Exercício Escolha Menu"
// Função :
// Autor : Carla Marcondes
// Data : 16/01/2024
// Seção de Declarações 
var

   numero1, numero2, resultado: real
   operacao: inteiro

inicio

      escreval ("Escolha um número entre 1 e 4: ")
      escreval ("Opção 1: Soma")
      escreval ("Opção 2: Subtração")
      escreval ("Opção 3: Divisão")
      escreval ("Opção 4: Multiplicação")
      leia (operacao)
      
      escreval
      escreval
      escreval ("Digite o número 1: ")
      leia (numero1)
      escreval ("Digite o número 2: ")
      leia (numero2)

      Escolha operacao

             Caso 1
             
                  resultado <- numero1 + numero2
                  
             Caso 2

                  resultado <- numero1 - numero2
                  
             Caso 3

                  Se ((numero1 = 0) ou (numero2 = 0)) Entao
                     Escreval  ("Erro ao dividir o núnmero")
                  
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
