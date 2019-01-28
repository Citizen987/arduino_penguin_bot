#include "DanceIrRemoteControl.h"

const unsigned long DanceIrRemoteControl::VALUE_BUTTONS[NUM_BUTTONS] = {
            16736925, // BUTTON_ARROW_UP = 0,
            16754775, // BUTTON_ARROW_DOWN,
            16720605, // BUTTON_ARROW_LEFT,
            16761405, // BUTTON_ARROW_RIGHT,
};

DanceIrRemoteControl::DanceIrRemoteControl() {
}

DanceIrRemoteControl::~DanceIrRemoteControl() {
}

void DanceIrRemoteControl::Update() {
}

int DanceIrRemoteControl::GetButtonPressed() {
    return 0;
}

bool DanceIrRemoteControl::IsAnyButtonPressed() {
    return false;
}
