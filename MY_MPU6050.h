#include <Wire.h>

class MY_MPU6050() {
    public:
        // variables
        int16_t accelerometer_x;
        int16_t accelerometer_y;
        int16_t accelerometer_z;
        int16_t temperature;
        int16_t gyro_x;
        int16_t gyro_y;
        int16_t gyro_z;

        // functions
        MY_MPU6050();
        void getMotion6(int MPU_ADDR);
};
