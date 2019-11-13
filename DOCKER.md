# Despliegue del Docker

Para linux o para windows es importante instalar docker.io y docker-compose

ya instalado ejecutamos el archivo deployment yml

nos ubicamos en el directorio del git local

cd ecarddesign

y ejecutamos el comando

docker-compose up -d

el cual creará dos instancias lamp y lamp1

creará una subred: 172.25.0.0/16

## IP contenedores:

lamp: 172.25.0.11
lamp1: 172.25.0.12

ahora comandos de docker para visualizar lo que se creó

para ver los contenedores docker ejecutamos el siguiente comando

sudo docker container ls

para ingresar al contenedor lamp

sudo docker exec -ti lamp bash

desde la consola damos ping a lamp1

ping 172.25.0.12

para salir del contenedor ejecutamos el comando exit

## Configuración de RED Docker

Para ver el subneting con los contenedores inscritos:

sudo docker network inspect ecarddesign_default

