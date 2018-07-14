#pragma once

namespace rb {
    class Manager;
};

namespace rbjson {
    class Object;
};

enum {
    MOTOR_LEFT = 0,
    MOTOR_RIGHT = 4,
    MOTOR_TURRET_ROTATION = 1,
    MOTOR_TURRET_PITCH = 2,
    MOTOR_GUN = 3
};

void motors_handle_joysticks(rb::Manager *man, rbjson::Object *pkt);
void motors_fire_gun(rb::Manager *man);