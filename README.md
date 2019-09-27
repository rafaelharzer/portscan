# PortScan
Um simples Scan de portas desenvolvido em c

Este programa executa um ataque SYN Flood para conseguir encontrar as portas abertas em um host. 

Com ele você pode definir a primeira e a ultima porta a ser verificada, então o programa verifica todas as portas informadas nesta sequência, ele traz o resultado das portas abertas encontradas de maneira mais rápida que o próprio nmap. 

Para baixar o repositorio basta dar o comando:
  git clone https://github.com/rafaelharzer/portscan
Entre no diretorio com:
  cd portscan
Para executar basta estar em um linux e compilar o codigo com:
  gcc -o PortScan PortScan.c
 Em seguida execute o programa com:
  ./PortScan
