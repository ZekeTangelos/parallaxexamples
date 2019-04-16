// Testing For Loops 


void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

  // i++ is the equivalent to 
  // i = i + 1
  // Equivalent to i+=1

   // i-- 
   // i = i - 1
   // i -= 1

  for (int i=1; i<=10; i*=3){
    Serial.println(i);
    delay(500);
  }

  
  const int foo = 0;
  
  foo = 0;
  Serial.print("Foo by itself:");
  Serial.print(foo);
  Serial.println();
  Serial.print("Foo pre-increment:");
  Serial.print(++foo);
  Serial.println();
  
  foo = 0;
  Serial.print("Foo by itself:");
  Serial.print(foo);
  Serial.println();
  
  Serial.print("Foo post-increment:");
  Serial.print(foo++);
  Serial.println();

  Serial.print("Foo by itself:");
  Serial.print(foo);
  Serial.println();
  

}

void loop() {
  // put your main code here, to run repeatedly:

}
