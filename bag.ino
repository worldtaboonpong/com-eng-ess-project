bool alarm = false;
bool letAlarm = true;
bool stopAlarm = false;
const double THRESHOLD;

void sendAlarmToServer(){
  // TODO
}

void sendAckToServer(){
  // TODO
}

void getDataFromServer(){
  // TODO
}

void setup() {
  // put wyour setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  
  getDataFromServer();
  
  double x,y,z;
  if(letAlarm){  
    if(x**2+y**2+z**2 > THRESHOLD){
      alarm = true;
      sendAlarmToServer();
      while(!stopAlarm){
        //play sound
        getDataFromServer();
        
      }
      senAckToServer();
      alarm = false;
    }
  }
}
