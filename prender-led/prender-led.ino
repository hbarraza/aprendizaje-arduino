// Variables globales
int led = 13;
int tiempoCorto = 100; //milisegundos
int tiempoMedio = 300;
int tiempoLargo = 600;

// Configuracion
void setup() {
  pinMode(led, OUTPUT);  //Salida
}

// Determina si prende o apaga el led
int prendidoAleatorio() {
  int num = random(1000);
  
  if(num > 500){
    return 1;
  }
  return 0;
}

void determinaTiempo() {
  int numTime = random(10);
  
  if(numTime < 3) {
    delay(tiempoCorto); //milisegundos
  } else if(numTime < 7) {
    delay(tiempoMedio); //milisegundos
  } else {
    delay(tiempoLargo); //milisegundos
  }
}

// Se repite indeterminadamente
void loop() {
  if(prendidoAleatorio() == 1) {
    digitalWrite(led, HIGH);  //Se prende led
  } else {
    digitalWrite(led, LOW); //Se apaga el led
  }

  determinaTiempo();
}
