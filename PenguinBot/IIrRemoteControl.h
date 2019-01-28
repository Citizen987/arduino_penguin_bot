#ifndef I_IR_REMOTE_CONTROL_H
#define I_IR_REMOTE_CONTROL_H

class IIrRemoteControl {
    public:
        virtual void Update() = 0;
        virtual int GetButtonPressed() = 0;
        virtual bool IsAnyButtonPressed() = 0;
};

#endif