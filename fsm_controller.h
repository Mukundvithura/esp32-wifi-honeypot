#ifndef FSM_CONTROLLER_H
#define FSM_CONTROLLER_H

enum State {

  INIT,
  AP_BROADCAST,
  CLIENT_CONNECTED,
  CAPTIVE_PORTAL,
  DATA_CAPTURE,
  ANALYSIS,
  RESET_STATE

};

extern State currentState;

#endif
