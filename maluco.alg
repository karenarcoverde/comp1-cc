inicio
inteiro linhas, totallinhas, linhaslidas, totalasterisco, asteriscoimpresso
ler totallinhas
linhaslidas <- 1
asteriscoimpresso <- 1
linhas <- totallinhas
enquanto linhaslidas <= totallinhas faz
 totalasterisco <- linhas
 enquanto asteriscoimpresso <= totalasterisco faz
   escrever "*"
   asteriscoimpresso <- asteriscoimpresso + 1
 fimenquanto
  escrever "\n"
  asteriscoimpresso <- 1
  linhaslidas <- linhaslidas + 1
  linhas <- linhas - 1
fimenquanto
fim