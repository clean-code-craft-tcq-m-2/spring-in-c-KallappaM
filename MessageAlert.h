typedef void (*alerter_funcptr)();
void emailAlerter(void);
void ledAlerter(void);
extern int emailAlertCallCount;
extern int ledAlertCallCount;
