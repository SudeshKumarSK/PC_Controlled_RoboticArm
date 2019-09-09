int  lm1 = 24;
int  lm2 = 25;
int  rm1 = 0;
int  rm2 = 1;
int  cau = 26;
int  cad = 27;
int  cmo = 2;
int  cmc = 3;

void Forward()
{
  digitalWrite(lm1,1);
  digitalWrite(lm2,0);
  digitalWrite(rm1,1);
  digitalWrite(rm2,0);
  
}

void Stop()
{
  digitalWrite(lm1,0);
  digitalWrite(lm2,0);
  digitalWrite(rm1,0);
  digitalWrite(rm2,0);
  digitalWrite(cau,0);
  digitalWrite(cad,0);
  digitalWrite(cmo,0);
  digitalWrite(cmc,0);
  
  
  
}

void Reverse()
{
  digitalWrite(lm1,0);
  digitalWrite(lm2,1);
  digitalWrite(rm1,0);
  digitalWrite(rm2,1);
  
}

void Right()

{
  
  digitalWrite(lm1,0);
  digitalWrite(lm2,1);
  digitalWrite(rm1,1);
  digitalWrite(rm2,0);
  
}

void Left()

{
  
  digitalWrite(lm1,1);
  digitalWrite(lm2,0);
  digitalWrite(rm1,0);
  digitalWrite(rm2,1);
  
}

void Up()
{
  digitalWrite(cau,1);
  digitalWrite(cad,0);
  digitalWrite(cmo,0);
  digitalWrite(cmc,0);
}

void Down()
{
  digitalWrite(cau,0);
  digitalWrite(cad,1);
  digitalWrite(cmo,0);
  digitalWrite(cmc,0);
}

void Open()
{
  digitalWrite(cau,0);
  digitalWrite(cad,0);
  digitalWrite(cmo,1);
  digitalWrite(cmc,0);
}

void Close()
{
  digitalWrite(cau,0);
  digitalWrite(cad,0);
  digitalWrite(cmo,0);
  digitalWrite(cmc,1);
}
  

void setup()
{
  
  Serial.begin(9600);
  
  pinMode(lm1,OUTPUT);
  pinMode(lm2,OUTPUT);
  pinMode(rm1,OUTPUT);
  pinMode(rm2,OUTPUT);
  pinMode(cau,OUTPUT);
  pinMode(cad,OUTPUT);
  pinMode(cmo,OUTPUT);
  pinMode(cmc,OUTPUT);
  
  
}

void loop()
{
  
 while(!Serial.available())
{
 Stop();
}

char c=Serial.read();

Serial.println(c);

if(c=='f')

Forward();

if(c=='s')

Stop();

if(c=='b')

Reverse();

if(c=='l')

Left();

if(c=='r')

Right();

if(c=='h')

Up();

if(c=='j')

Down();

if(c=='k')

Open();

if(c=='l')

Close();

}
  
