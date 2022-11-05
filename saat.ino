int ms , s , d, sa , g , y = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Program Start!");


}

void loop() {

  delay(1);
  ms +=1;
  if(ms == 1000) //milisaniye
  { 
    ms = 0 ;
    s +=1;
    if(s == 60) //saniye
    {
      s = 0;
      d +=1;
      if(d == 60)
      { 
        d=0;
        sa += 1;
        if (sa == 24)
        {
          sa = 0;
          g +=1;
          if(g == 365)
          {
            g=0;
            y +=1;

          }
        }
        
      }
    }    
  }
  Serial.print("MS = ");
  Serial.println(ms);
  Serial.print("Saniye = ");
  Serial.println(s);
  Serial.print("Dakika = ");
  Serial.println(d);
  Serial.print("Saat = ");
  Serial.println(sa);
  Serial.print("Gün = ");
  Serial.println(g);
  Serial.print("Yıl = ");
  Serial.println(y);
}
