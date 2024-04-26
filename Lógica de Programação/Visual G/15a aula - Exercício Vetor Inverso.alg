algoritmo "Exercício vetor lista inversa"
// Função :
// Autor : Carla Marcondes
// Data : 28/01/2024
// Seção de Declarações 
var

   letras: vetor [1..5] de caractere
   contador: inteiro

inicio

      para contador de 1 ate 5 faca

      escreval ("Digite uma letra: ")
      leia (letras [contador] )

      fimPara
      
      escreval
      escreval ("As letras digitadas foram: ")

      para contador de 1 ate 5 faca

           escreval (letras [contador])
      
      fimPara
      
      escreval
      escreval ("As letras digitadas em ordem reversa foram: ")

      para contador de 5 ate 1 passo -1 faca

           escreval (letras [contador])

      fimPara


fimalgoritmo
