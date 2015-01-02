int segments[10][7] = 	{
						{1, 1, 1, 1, 1, 1, 0}, //0
						{0, 1, 1, 0, 0, 0, 0}, //1
						{1, 1, 0, 1, 1, 0, 1}, //2
						{1, 1, 1, 1, 0, 0, 1}, //3
						{0, 1, 1, 0, 0, 1, 1}, //4
						{1, 0, 1, 1, 0, 1, 1}, //5
						{1, 0, 1, 1, 1, 1, 1}, //6
						{1, 1, 1, 0, 0, 0, 0}, //7
						{1, 1, 1, 1, 1, 1, 1}, //8
						{1, 1, 1, 1, 0, 1, 1} //9
						};

int pinArray[] = {2, 3, 4, 5, 6, 7, 8} ;

// Buzzer
int Buzzer = 9;

void setup()
{
	for(int i=0; i<7; i++)
	    pinMode(pinArray[i], OUTPUT);

	    pinMode(Buzzer, OUTPUT);
}

void loop()
{
		/*for(int i=0; i<10; i++){
		for(int j=0; j<7; j++)
		digitalWrite(pinArray[j], (segments[i][j]==1)?LOW:HIGH);
		delay(500);
		}*/	

	for(int i=9; i>=0; i--){
		for(int j=6; j>=0; j--)
		digitalWrite(pinArray[j], (segments[i][j]==1) ?LOW:HIGH);
		digitalWrite(Buzzer, HIGH);
		delay(20);
		digitalWrite(Buzzer, LOW);
		delay(1000);
		}

		digitalWrite(Buzzer, HIGH);
		delay(1000);
		digitalWrite(Buzzer, LOW);
		delay(2000);
}