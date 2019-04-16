void setup() 
{
  Serial.begin(9600);

  int a=2;
  int b=429;

  if(a>b)
  {
    Serial.println ("a is greater than b");
  }
  else if (a < b)
  {
    Serial.println("a is not greater than b");
  }
  else
  {
    Serial.println("a is equal to b");
  }
  //testing && and ||
    if ((a > 50) && (b < 50))
    {
      Serial.println ("Values in normal range");
    }
    else
    {
      Serial.print ("Values are not in normal range");
    }
}


void loop() {
  // put your main code here, to run repeatedly:

}
