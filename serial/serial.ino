long incomingByte = 0;   // for incoming serial data
void setup() {
        Serial.begin(19200);     // opens serial port, sets data rate to 9600 bps
}

void loop() {

        // send data only when you receive data:
        if (Serial.available() > 0) {
                // read the incoming byte:
                incomingByte = Serial.read()-'/';

                // say what you got:
                Serial.print("Decimal: ");
                Serial.println(incomingByte, DEC);
                Serial.print("Binary: ");
                Serial.println(incomingByte, BIN);
                Serial.print("Hexa: ");
                Serial.print("Hexa: ");
                Serial.println(incomingByte, HEX);

                Serial.println(" ");
                
        }

        
        
}
 
