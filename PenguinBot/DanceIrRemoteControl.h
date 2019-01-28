#ifndef DANCE_IR_REMOTE_CONTROL_H
#define DANCE_IR_REMOTE_CONTROL_H

#include "IIrRemoteControl.h"

class DanceIrRemoteControl : public IIrRemoteControl {
    public:
        DanceIrRemoteControl();
        ~DanceIrRemoteControl();

        virtual void Update();
        virtual int GetButtonPressed();
        virtual bool IsAnyButtonPressed();

        enum eButtons {
            BUTTON_ARROW_UP = 0,
            BUTTON_ARROW_DOWN,
            BUTTON_ARROW_LEFT,
            BUTTON_ARROW_RIGHT,
            NUM_BUTTONS,
        };
        
        static const unsigned long VALUE_BUTTONS[NUM_BUTTONS];
};

#endif
