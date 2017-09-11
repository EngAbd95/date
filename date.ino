int year=1970,month=1,day=1,hour=0,minute=0,second=0,mil1=0,mil2=0,dif=0;
bool ka=0;
void calc()
{
   if(year%4==0&&year%400!=0)
  ka=1;
  else
  ka=0;
  dif=(mil1-mil2)/1000;
  if(dif>0)
  {mil2=mil1;
    second=second+dif;
  }
  if(second>59)
  {
    second=second-60;
    minute++;
  }
  if(minute>59)
  {hour++;
    minute=minute-60;
  }
  if(hour>23)
  {
    day++;
    hour=hour-24;
  }
  if((month==1||month==3||month==5||month==7||month==8||month==10||month==12)&&day>31)
  {month++;
    day=day-31;
  }
  else if((month==4||month==6||month==9||month==11)&&day>30)
  {month++;
    day=day-30;
  }
  else if(month==2&&ka==1&&day>29)
  {month++;
    day=day-29;
  }
  else if(month==2&&ka==0&&day>28)
  {month++;
    day=day-28;
  }
  if(month>12)
  {year++;
    month=month-12;
  }
  mil1=millis();
}
void setup() {
  // put your setup codaye here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your monthain codaye here, to run repeatedayly:
void calc();
Serial.println(second);
delay(1000);
}
