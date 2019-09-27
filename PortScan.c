/* Rafael Harzer correia  */
/* SYN flood Attack*/

#include <stdio.h>
#include <netdb.h>
#include <stdlib.h>
#include <unistd.h>
#include <arpa/inet.h>

int main(int argc, char *argv[]){
	int conectar;
	int msocket;
	int portai, portaf = 0;
	char sethost[15];

	struct sockaddr_in host;
	
	msocket = socket(AF_INET, SOCK_STREAM, 0);
	
	host.sin_family = AF_INET;

	printf("Qual o IP do Host?\n");
	scanf("%s", sethost);	
	
	host.sin_addr.s_addr = inet_addr(sethost);

	printf("Verificar da porta: \n");
	scanf("%d", &portai);

	printf("ate a porta: \n");
        scanf("%d", &portaf);
	
	while (portai <= portaf){
		host.sin_port = htons(portai);
		conectar = connect(msocket, (struct sockaddr *)&host, sizeof (host));
		
		if(conectar == 0){			
			printf("A porta %d esta aberta! \n", portai);
			close(msocket);			
			close(conectar);
			msocket = socket(AF_INET, SOCK_STREAM, 0);
		}
		
		portai++;
	}
		
	return 0;
	
}
