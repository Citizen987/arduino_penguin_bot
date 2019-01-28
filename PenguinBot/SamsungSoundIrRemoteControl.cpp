#include "SamsungSoundIrRemoteControl.h"


const unsigned long SamsungSoundIrRemoteControl::VALUE_BUTTONS[NUM_BUTTONS] = {
            3392264773, // BUTTON_POWER = 0,
            387001607, // BUTTON_SOURCE,
            3476004267, // BUTTON_VOLUMEN_INCR,
            2998643817, // BUTTON_VOLUMEN_DECRES,
            305976139, // BUTTON_MUTE,

};

SamsungSoundIrRemoteControl::SamsungSoundIrRemoteControl() {
}

SamsungSoundIrRemoteControl::~SamsungSoundIrRemoteControl() {
}

void SamsungSoundIrRemoteControl::Update() {
}

int SamsungSoundIrRemoteControl::GetButtonPressed() {
    return 0;
}

bool SamsungSoundIrRemoteControl::IsAnyButtonPressed() {
    return false;
}
