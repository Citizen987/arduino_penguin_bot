#ifndef SAMSUNG_SOUND_IR_REMOTE_CONTROL_H
#define SAMSUNG_SOUND_IR_REMOTE_CONTROL_H

#include "IIrRemoteControl.h"

class SamsungSoundIrRemoteControl : public IIrRemoteControl {
    public:
        SamsungSoundIrRemoteControl();
        ~SamsungSoundIrRemoteControl();

        virtual void Update();
        virtual int GetButtonPressed();
        virtual bool IsAnyButtonPressed();

        enum eButtons {
            BUTTON_POWER = 0,
            BUTTON_SOURCE,
            BUTTON_VOLUMEN_INCR,
            BUTTON_VOLUMEN_DECRES,
            BUTTON_MUTE,
            NUM_BUTTONS,
        };

        static const unsigned long VALUE_BUTTONS[NUM_BUTTONS];
};

#endif
