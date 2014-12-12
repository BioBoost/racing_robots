typedef enum {
    LED1 = 0,
    LED2 = 1,
    LED3 = 2,
    LED4 = 3
    //.....
} LedIndex;

typedef enum {
    ON = 0,
    OFF = 1,
    TOGGLE = 2
} LedState;


// speed between -100% en +100%
void drive(int speed);

// speed between -100% en +100%
void turn(int turnspeed);

// Stop the robot
void stop();

// Read the value from the line sensor
int line_sensor();

// PID drive control
int turnControl(int p, int i, int d);

// Show drive speed and sensor data
void showStats();

// Show text on display
void display(char* fmt, ...);

// Turn a led on or off
void led(LedIndex i, LedState state);

// Wait for a number of milliseconds
void doWait(int milliseconds);