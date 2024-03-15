int ledVermelhoSemaforo = 3;
int ledAmareloSemaforo = 5;
int ledVerdeSemaforo = 7;
int ledVerdePedestre = 8;
int ledVermelhoPedestre = 10;
int botao = 1;

void setup(){
  pinMode(ledVermelhoSemaforo, OUTPUT);
  pinMode(ledAmareloSemaforo, OUTPUT);
  pinMode(ledVerdeSemaforo, OUTPUT);
  pinMode(ledVerdePedestre, OUTPUT);
  pinMode(ledVermelhoPedestre, OUTPUT);
  pinMode(botao, INPUT_PULLUP);
  
  digitalWrite(ledVermelhoSemaforo, LOW);
  digitalWrite(ledAmareloSemaforo, LOW);
  digitalWrite(ledVerdeSemaforo, HIGH);
  digitalWrite(ledVerdePedestre, LOW);
  digitalWrite(ledVermelhoPedestre, HIGH);
}

void loop(){
    //ligar pedestre
    if(digitalRead(botao) == LOW){
    
    for(int i = 0; i < 3; i++){
    //mudar para amarelo
    digitalWrite(ledAmareloSemaforo, HIGH);
    digitalWrite(ledVerdeSemaforo, LOW);
    delay(1000);
    digitalWrite(ledAmareloSemaforo, LOW);
    delay(1000);
    } 

     //transitar para vermelho
    digitalWrite(ledVermelhoSemaforo, HIGH);
    digitalWrite(ledAmareloSemaforo, LOW);
    delay(1500);

    //ligar pedestre
    digitalWrite(ledVermelhoPedestre, LOW);
    digitalWrite(ledVerdePedestre, HIGH);
    delay(15000);

    //desligar pedestre  
    digitalWrite(ledVerdePedestre, LOW);
    digitalWrite(ledVermelhoPedestre, HIGH);
    delay(15000); 

    digitalWrite(ledVermelhoSemaforo, LOW);
    digitalWrite(ledAmareloSemaforo, LOW);
    digitalWrite(ledVerdeSemaforo, HIGH);
    digitalWrite(ledVerdePedestre, LOW);
    digitalWrite(ledVermelhoPedestre, HIGH);
    delay(1000);
  }
}