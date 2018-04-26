enum class DS4 : int {
  LEFT_ANALOG_X = 0,
    LEFT_ANALOG_Y = 1,
    RIGHT_ANALOG_X = 2,
    RIGHT_ANALOG_Y = 3,
    L2_ANALOG = 4,
    R2_ANALOG = 5,
    DPAD_UP = 6,
    DPAD_DOWN = 7,
    DPAD_LEFT = 8,
    DPAD_RIGHT = 9,
    BUTTON_CROSS = 10,
    BUTTON_CIRCLE = 11,
    BUTTON_SQUARE = 12,
    BUTTON_TRIANGLE = 13,
    BUTTON_L1 = 14,
    BUTTON_L2 = 15,
    BUTTON_L3 = 16,
    BUTTON_R1 = 17,
    BUTTON_R2 = 18,
    BUTTON_R3 = 19,
    BUTTON_SHARE = 20,
    BUTTON_OPTIONS = 21,
    BUTTON_TRACKPAD =22,
    BUTTON_PS = 23,
    MOTION_Y = 24,
    MOTION_X = 25,
    MOTION_Z = 26,
    ORIENTATION_ROLL = 27,
    ORIENTATION_YAW = 28,
    ORIENTATION_PITCH = 29,
    TRACKPAD_TOUCH0_ID = 30,
    TRACKPAD_TOUCH0_ACTIVE = 31,
    TRACKPAD_TOUCH0_X = 32,
    TRACKPAD_TOUCH0_Y = 33,
    TRACKPAD_TOUCH1_ID = 34,
    TRACKPAD_TOUCH1_ACTIVE = 35,
    TRACKPAD_TOUCH1_X = 36,
    TRACKPAD_TOUCH_Y = 37,
    TIMESTAMP = 38,
    BATTERY = 39,
    PLUG_USB = 40,
    PLUG_AUDIO = 41,
    PLUG_MIC = 42
    };

enum class QUATERNION : int {
  W = 0,
    X = 1,
    Y = 2,
    Z = 3
    };

enum class VECTOR : int {
  X = 0,
    Y = 1,
    Z = 2
    };

enum class UNITY_QUATERNION : int {
  X = 0,
    Y = 1,
    Z = 2,
    W = 3
    };

enum class UNITY_VECTOR : int {
  X = 0,
    Y = 1,
    Z = 2
    };

enum class PID_GAINS : int {
  KP = 0,
    KD = 1,
    KI = 2
    };

enum class CHAIRSTATE : int{ 
  MANUAL = 0,
    AUTONOMOUS = 1
    };
