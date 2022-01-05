// Position @ 50, 75, 100, 125, 150, 175, 200 MHz
struct FREQUENCY_POSITION {
  uint32_t FREQUENCY;
  uint32_t TUNING_POSITION;
  uint32_t MATCHING_POSITION;
};

#define TUNING_STEPPER_HOME 30800U
#define MATCHING_STEPPER_HOME 32000U
