/*#include <LiquidCrystal.h>
LiquidCrystal lcd(8,9,4,5,6,7);
int i;

void setup() {

  lcd.begin(16,2);

}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("hola");
  lcd.setCursor(0,7);
  delay(100);
  

}*/
#include <LiquidCrystal.h>
LiquidCrystal lcd(8,9,4,5,6,7);



void setup()
{
  
 lcd.begin(16,2);
  /*lcd.println("hola");
  lcd.print("chau");*/
  pinMode(A0, INPUT);
  Serial.begin(9600);
  
}

void loop()
{
  int valor=analogRead(A0);
  
  //delay(8000);
  //lcd.print(valor);
  //contador++;
 if(valor<=1023&&valor>1000 ){
  lcd.print(" tocar boton");
  // lcd.print(valor);
  
  
  }
  if(valor==0){
  lcd.print("RIGTH");

 //  lcd.print(valor);
   lcd.print("             ");
  
  
  }
  if(valor<200 && valor>0){//143
  lcd.print("UP");
  // lcd.print(valor);
    lcd.print("            ");
   
  
  
  }
    if(valor>200 && valor<400 ){//328
  lcd.print("DOWN");
   //lcd.print(valor);
    lcd.print("             ");
   
    }
       if(valor>400 && valor<600 ){//504
  lcd.print("LEFT");
   //lcd.print(valor);
    lcd.print("           ");
   
    }
       if(valor>600 && valor <1000){//741
  lcd.print("SELECT");
   //lcd.print(valor);
    lcd.print("            ");
   
    }
 
  lcd.setCursor(0,0);//pociciona la pocicion 0,0 de la matriz siempre
  //lcd.clear();
  
  //lcd.print(contador);
  //lcd.print(valor);
  
  //Serial.println(valor);
  
  
  
  valor=0;
  /*digitalWrite(13, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  delay(1000); // Wait for 1000 millisecond(s)*/
}
