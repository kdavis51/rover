
// the setup function runs once when you press reset or power the board
#define IN1 0
#define IN2 1
#define IN3 2
#define IN4 3

// This function is required to compile.  I'm using the setup fuction to configure pins as output.  If you wanted to use a sensor, you could setup various pins for input
void setup() {
  // initialize digital pins as an output.
   pinMode(IN1, OUTPUT);
   pinMode(IN2, OUTPUT);
   pinMode(IN3, OUTPUT);
   pinMode(IN4, OUTPUT);

}

// This function is required to compile.  The loop function runs over and over again forever
void loop() {
  forward(.75,1);
  reverse(.75,1);
  turnleft(.75,1);
  turnright(.75,1);
  spinleft(.75,1);
  spinright(.75,1);
}
// Custom Function Section

// Forward,reverse,turnleft,turnright, spinleft and spinright all use two input values.   T
// the First input value (secs) denotes how long to run the designated direction
// The Second input value (pause) indicate how long to wait before continuting 
// Notice the two function parameters are unsigned long data types - in C++ data types are important, what is an unsigned long?  https://www.arduino.cc/reference/en/language/variables/data-types/unsignedlong/
// does it make sense to have negative seconds?

void forward(unsigned long secs, unsigned long pause) { 
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);  
  digitalWrite(IN4, HIGH);
  delay(secs * 1000);
  stop(pause);
}

void reverse(unsigned long secs, unsigned long pause) {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);  
  digitalWrite(IN4, LOW);
  delay(secs * 1000);
  stop(pause);
}

void turnright(unsigned long secs, unsigned long pause){
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);  
  digitalWrite(IN4, HIGH);
  delay(secs * 1000);
  stop(pause);
}

void turnleft(unsigned long secs, unsigned long pause){
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);  
  digitalWrite(IN4, LOW);
  delay(secs * 1000);
  stop(pause);

}
void spinleft(unsigned long secs, unsigned long pause){
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);  
  digitalWrite(IN4, LOW);
  delay(secs * 1000);
  stop(pause);
}

void spinright(unsigned long secs, unsigned long pause){
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);  
  digitalWrite(IN4, HIGH);
  delay(secs * 1000);
  stop(pause);
}

void stop(unsigned long secs){
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);  
  digitalWrite(IN4, LOW);
  delay(secs * 1000);

}
