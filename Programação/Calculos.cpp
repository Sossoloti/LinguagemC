algoritmo "saldo"
  var
    
  inicio
    escreva('informe conta, saldo, debito e credito do cliente')
    leia(conta, saldo, debito, credito)
    saldo_atual = (saldo - d�bito) + cr�dito;
    se saldo_atual >= 0 entao
      escreva('Saldo Positivo')
    senao
       escreva('Saldo Negativo')
  fimalgoritmo
}