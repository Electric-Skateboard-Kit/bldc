// This file is autogenerated by VESC Tool

#ifndef MCCONF_LECTEC_ESC_H_
#define MCCONF_LECTEC_ESC_H_

// PWM Mode
#ifndef MCCONF_PWM_MODE
#define MCCONF_PWM_MODE 1
#endif

// Commutation Mode
#ifndef MCCONF_COMM_MODE
#define MCCONF_COMM_MODE 0
#endif

// Motor Type
#ifndef MCCONF_DEFAULT_MOTOR_TYPE
#define MCCONF_DEFAULT_MOTOR_TYPE 2
#endif

// Sensor Mode
#ifndef MCCONF_SENSOR_MODE
#define MCCONF_SENSOR_MODE 0
#endif

// Motor Current Max
#ifndef MCCONF_L_CURRENT_MAX
#define MCCONF_L_CURRENT_MAX 23
#endif

// Motor Current Max Brake
#ifndef MCCONF_L_CURRENT_MIN
#define MCCONF_L_CURRENT_MIN -23
#endif

// Battery Current Max
#ifndef MCCONF_L_IN_CURRENT_MAX
#define MCCONF_L_IN_CURRENT_MAX 50
#endif

// Battery Current Max Regen
#ifndef MCCONF_L_IN_CURRENT_MIN
#define MCCONF_L_IN_CURRENT_MIN -50
#endif

// Input Current Limit Map Start
#ifndef MCCONF_L_IN_CURRENT_MAP_START
#define MCCONF_L_IN_CURRENT_MAP_START 1
#endif

// Input Current Map Filter
#ifndef MCCONF_L_IN_CURRENT_MAP_FILTER
#define MCCONF_L_IN_CURRENT_MAP_FILTER 1
#endif

// Absolute Maximum Current
#ifndef MCCONF_L_MAX_ABS_CURRENT
#define MCCONF_L_MAX_ABS_CURRENT 30
#endif

// Max ERPM Reverse
#ifndef MCCONF_L_RPM_MIN
#define MCCONF_L_RPM_MIN -100000
#endif

// Max ERPM
#ifndef MCCONF_L_RPM_MAX
#define MCCONF_L_RPM_MAX 200000
#endif

// ERPM Limit Start
#ifndef MCCONF_L_RPM_START
#define MCCONF_L_RPM_START 0.8
#endif

// Max ERPM Full Brake
#ifndef MCCONF_L_CURR_MAX_RPM_FBRAKE
#define MCCONF_L_CURR_MAX_RPM_FBRAKE 300
#endif

// Max ERPM Full Brake Current Control
#ifndef MCCONF_L_CURR_MAX_RPM_FBRAKE_CC
#define MCCONF_L_CURR_MAX_RPM_FBRAKE_CC 1500
#endif

// Minimum Input Voltage
#ifndef MCCONF_L_MIN_VOLTAGE
#define MCCONF_L_MIN_VOLTAGE 8
#endif

// Maximum Input Voltage
#ifndef MCCONF_L_MAX_VOLTAGE
#define MCCONF_L_MAX_VOLTAGE 26
#endif

// Battery Voltage Cutoff Start
#ifndef MCCONF_L_BATTERY_CUT_START
#define MCCONF_L_BATTERY_CUT_START 6
#endif

// Battery Voltage Cutoff End
#ifndef MCCONF_L_BATTERY_CUT_END
#define MCCONF_L_BATTERY_CUT_END 6
#endif

// Battery Voltage Regen Cutoff Start
#ifndef MCCONF_L_BATTERY_REGEN_CUT_START
#define MCCONF_L_BATTERY_REGEN_CUT_START 1000
#endif

// Battery Voltage Regen Cutoff End
#ifndef MCCONF_L_BATTERY_REGEN_CUT_END
#define MCCONF_L_BATTERY_REGEN_CUT_END 1100
#endif

// Slow ABS Current Limit
#ifndef MCCONF_L_SLOW_ABS_OVERCURRENT
#define MCCONF_L_SLOW_ABS_OVERCURRENT 0
#endif

// MOSFET Temp Cutoff Start
#ifndef MCCONF_L_LIM_TEMP_FET_START
#define MCCONF_L_LIM_TEMP_FET_START 85
#endif

// MOSFET Temp Cutoff End
#ifndef MCCONF_L_LIM_TEMP_FET_END
#define MCCONF_L_LIM_TEMP_FET_END 100
#endif

// Motor Temp Cutoff Start
#ifndef MCCONF_L_LIM_TEMP_MOTOR_START
#define MCCONF_L_LIM_TEMP_MOTOR_START 85
#endif

// Motor Temp Cutoff End
#ifndef MCCONF_L_LIM_TEMP_MOTOR_END
#define MCCONF_L_LIM_TEMP_MOTOR_END 100
#endif

// Acceleration Temperature Decrease
#ifndef MCCONF_L_LIM_TEMP_ACCEL_DEC
#define MCCONF_L_LIM_TEMP_ACCEL_DEC 0.15
#endif

// Minimum Duty Cycle
#ifndef MCCONF_L_MIN_DUTY
#define MCCONF_L_MIN_DUTY 0.005
#endif

// Maximum Duty Cycle
#ifndef MCCONF_L_MAX_DUTY
#define MCCONF_L_MAX_DUTY 0.95
#endif

// Maximum Wattage
#ifndef MCCONF_L_WATT_MAX
#define MCCONF_L_WATT_MAX 1.5e+06
#endif

// Maximum Braking Wattage
#ifndef MCCONF_L_WATT_MIN
#define MCCONF_L_WATT_MIN -1.5e+06
#endif

// Max Current Scale
#ifndef MCCONF_L_CURRENT_MAX_SCALE
#define MCCONF_L_CURRENT_MAX_SCALE 1
#endif

// Min Current Scale
#ifndef MCCONF_L_CURRENT_MIN_SCALE
#define MCCONF_L_CURRENT_MIN_SCALE 1
#endif

// Duty Cycle Current Limit Start
#ifndef MCCONF_L_DUTY_START
#define MCCONF_L_DUTY_START 0.85
#endif

// Minimum ERPM
#ifndef MCCONF_SL_MIN_RPM
#define MCCONF_SL_MIN_RPM 150
#endif

// Minimum ERPM Integrator
#ifndef MCCONF_SL_MIN_ERPM_CYCLE_INT_LIMIT
#define MCCONF_SL_MIN_ERPM_CYCLE_INT_LIMIT 1100
#endif

// Max Brake Current at Direction Change
#ifndef MCCONF_SL_MAX_FB_CURR_DIR_CHANGE
#define MCCONF_SL_MAX_FB_CURR_DIR_CHANGE 10
#endif

// Cycle Integrator Limit
#ifndef MCCONF_SL_CYCLE_INT_LIMIT
#define MCCONF_SL_CYCLE_INT_LIMIT 62
#endif

// Phase Advance at BR ERPM
#ifndef MCCONF_SL_PHASE_ADVANCE_AT_BR
#define MCCONF_SL_PHASE_ADVANCE_AT_BR 0.8
#endif

// BR ERPM
#ifndef MCCONF_SL_CYCLE_INT_BR
#define MCCONF_SL_CYCLE_INT_BR 80000
#endif

// BEMF Coupling
#ifndef MCCONF_SL_BEMF_COUPLING_K
#define MCCONF_SL_BEMF_COUPLING_K 600
#endif

// Hall Table [0]
#ifndef MCCONF_HALL_TAB_0
#define MCCONF_HALL_TAB_0 -1
#endif

// Hall Table [1]
#ifndef MCCONF_HALL_TAB_1
#define MCCONF_HALL_TAB_1 1
#endif

// Hall Table [2]
#ifndef MCCONF_HALL_TAB_2
#define MCCONF_HALL_TAB_2 3
#endif

// Hall Table [3]
#ifndef MCCONF_HALL_TAB_3
#define MCCONF_HALL_TAB_3 2
#endif

// Hall Table [4]
#ifndef MCCONF_HALL_TAB_4
#define MCCONF_HALL_TAB_4 5
#endif

// Hall Table [5]
#ifndef MCCONF_HALL_TAB_5
#define MCCONF_HALL_TAB_5 6
#endif

// Hall Table [6]
#ifndef MCCONF_HALL_TAB_6
#define MCCONF_HALL_TAB_6 4
#endif

// Hall Table [7]
#ifndef MCCONF_HALL_TAB_7
#define MCCONF_HALL_TAB_7 -1
#endif

// Sensorless ERPM Hybrid
#ifndef MCCONF_HALL_ERPM
#define MCCONF_HALL_ERPM 2000
#endif

// Current KP
#ifndef MCCONF_FOC_CURRENT_KP
#define MCCONF_FOC_CURRENT_KP 0.1157
#endif

// Current KI
#ifndef MCCONF_FOC_CURRENT_KI
#define MCCONF_FOC_CURRENT_KI 143.8
#endif

// Zero Vector Frequency
#ifndef MCCONF_FOC_F_ZV
#define MCCONF_FOC_F_ZV 25000
#endif

// Dead Time Compensation
#ifndef MCCONF_FOC_DT_US
#define MCCONF_FOC_DT_US 0.12
#endif

// Encoder Inverted
#ifndef MCCONF_FOC_ENCODER_INVERTED
#define MCCONF_FOC_ENCODER_INVERTED 0
#endif

// Encoder Offset
#ifndef MCCONF_FOC_ENCODER_OFFSET
#define MCCONF_FOC_ENCODER_OFFSET 180
#endif

// Encoder Ratio
#ifndef MCCONF_FOC_ENCODER_RATIO
#define MCCONF_FOC_ENCODER_RATIO 7
#endif

// Sensor Mode
#ifndef MCCONF_FOC_SENSOR_MODE
#define MCCONF_FOC_SENSOR_MODE 2
#endif

// Speed Tracker Kp
#ifndef MCCONF_FOC_PLL_KP
#define MCCONF_FOC_PLL_KP 2000
#endif

// Speed Tracker Ki
#ifndef MCCONF_FOC_PLL_KI
#define MCCONF_FOC_PLL_KI 30000
#endif

// Motor Inductance (L)
#ifndef MCCONF_FOC_MOTOR_L
#define MCCONF_FOC_MOTOR_L 0.00011568
#endif

// Motor Inductance Difference (Lq - Ld)
#ifndef MCCONF_FOC_MOTOR_LD_LQ_DIFF
#define MCCONF_FOC_MOTOR_LD_LQ_DIFF 4.175e-05
#endif

// Motor Resistance (R)
#ifndef MCCONF_FOC_MOTOR_R
#define MCCONF_FOC_MOTOR_R 0.1438
#endif

// Motor Flux Linkage (λ)
#ifndef MCCONF_FOC_MOTOR_FLUX_LINKAGE
#define MCCONF_FOC_MOTOR_FLUX_LINKAGE 0.005422
#endif

// Observer Gain (x1M)
#ifndef MCCONF_FOC_OBSERVER_GAIN
#define MCCONF_FOC_OBSERVER_GAIN 3.402e+07
#endif

// Observer Gain At Minimum Duty
#ifndef MCCONF_FOC_OBSERVER_GAIN_SLOW
#define MCCONF_FOC_OBSERVER_GAIN_SLOW 0.05
#endif

// Observer Offset
#ifndef MCCONF_FOC_OBSERVER_OFFSET
#define MCCONF_FOC_OBSERVER_OFFSET -1
#endif

// Duty Downramp Kp
#ifndef MCCONF_FOC_DUTY_DOWNRAMP_KP
#define MCCONF_FOC_DUTY_DOWNRAMP_KP 10
#endif

// Duty Downramp Ki
#ifndef MCCONF_FOC_DUTY_DOWNRAMP_KI
#define MCCONF_FOC_DUTY_DOWNRAMP_KI 200
#endif

// Start Current Decrease
#ifndef MCCONF_FOC_START_CURR_DEC
#define MCCONF_FOC_START_CURR_DEC 1
#endif

// Start Current Decrease ERPM
#ifndef MCCONF_FOC_START_CURR_DEC_RPM
#define MCCONF_FOC_START_CURR_DEC_RPM 400
#endif

// Openloop ERPM
#ifndef MCCONF_FOC_OPENLOOP_RPM
#define MCCONF_FOC_OPENLOOP_RPM 400
#endif

// Openloop ERPM at Min Current
#ifndef MCCONF_FOC_OPENLOOP_RPM_LOW
#define MCCONF_FOC_OPENLOOP_RPM_LOW 0.1
#endif

// D Axis Gain Scaling Start
#ifndef MCCONF_FOC_D_GAIN_SCALE_START
#define MCCONF_FOC_D_GAIN_SCALE_START 0.9
#endif

// D Axis Gain Scaling at Max Mod
#ifndef MCCONF_FOC_D_GAIN_SCALE_MAX_MOD
#define MCCONF_FOC_D_GAIN_SCALE_MAX_MOD 0.2
#endif

// Openloop Hysteresis
#ifndef MCCONF_FOC_SL_OPENLOOP_HYST
#define MCCONF_FOC_SL_OPENLOOP_HYST 0.1
#endif

// Openloop Lock Time
#ifndef MCCONF_FOC_SL_OPENLOOP_T_LOCK
#define MCCONF_FOC_SL_OPENLOOP_T_LOCK 0
#endif

// Openloop Ramp Time
#ifndef MCCONF_FOC_SL_OPENLOOP_T_RAMP
#define MCCONF_FOC_SL_OPENLOOP_T_RAMP 0
#endif

// Openloop Time
#ifndef MCCONF_FOC_SL_OPENLOOP_TIME
#define MCCONF_FOC_SL_OPENLOOP_TIME 0.1
#endif

// Openloop Current Boost
#ifndef MCCONF_FOC_SL_OPENLOOP_BOOST_Q
#define MCCONF_FOC_SL_OPENLOOP_BOOST_Q 0
#endif

// Openloop Current Max
#ifndef MCCONF_FOC_SL_OPENLOOP_MAX_Q
#define MCCONF_FOC_SL_OPENLOOP_MAX_Q -1
#endif

// Hall Table [0]
#ifndef MCCONF_FOC_HALL_TAB_0
#define MCCONF_FOC_HALL_TAB_0 255
#endif

// Hall Table [1]
#ifndef MCCONF_FOC_HALL_TAB_1
#define MCCONF_FOC_HALL_TAB_1 41
#endif

// Hall Table [2]
#ifndef MCCONF_FOC_HALL_TAB_2
#define MCCONF_FOC_HALL_TAB_2 107
#endif

// Hall Table [3]
#ifndef MCCONF_FOC_HALL_TAB_3
#define MCCONF_FOC_HALL_TAB_3 75
#endif

// Hall Table [4]
#ifndef MCCONF_FOC_HALL_TAB_4
#define MCCONF_FOC_HALL_TAB_4 175
#endif

// Hall Table [5]
#ifndef MCCONF_FOC_HALL_TAB_5
#define MCCONF_FOC_HALL_TAB_5 7
#endif

// Hall Table [6]
#ifndef MCCONF_FOC_HALL_TAB_6
#define MCCONF_FOC_HALL_TAB_6 140
#endif

// Hall Table [7]
#ifndef MCCONF_FOC_HALL_TAB_7
#define MCCONF_FOC_HALL_TAB_7 255
#endif

// Hall Interpolation ERPM
#ifndef MCCONF_FOC_HALL_INTERP_ERPM
#define MCCONF_FOC_HALL_INTERP_ERPM 500
#endif

// Sensored ERPM Start
#ifndef MCCONF_FOC_SL_ERPM_START
#define MCCONF_FOC_SL_ERPM_START 1000
#endif

// Sensorless ERPM
#ifndef MCCONF_FOC_SL_ERPM
#define MCCONF_FOC_SL_ERPM 3500
#endif

// Control Sample Mode
#ifndef MCCONF_FOC_CONTROL_SAMPLE_MODE
#define MCCONF_FOC_CONTROL_SAMPLE_MODE 0
#endif

// Current Sample Mode
#ifndef MCCONF_FOC_CURRENT_SAMPLE_MODE
#define MCCONF_FOC_CURRENT_SAMPLE_MODE 1
#endif

// Saturation Compensation Mode
#ifndef MCCONF_FOC_SAT_COMP_MODE
#define MCCONF_FOC_SAT_COMP_MODE 2
#endif

// Saturation Compensation Factor
#ifndef MCCONF_FOC_SAT_COMP
#define MCCONF_FOC_SAT_COMP 0
#endif

// Temp Comp
#ifndef MCCONF_FOC_TEMP_COMP
#define MCCONF_FOC_TEMP_COMP 0
#endif

// Temp Comp Base Temp
#ifndef MCCONF_FOC_TEMP_COMP_BASE_TEMP
#define MCCONF_FOC_TEMP_COMP_BASE_TEMP 25
#endif

// Current Filter Constant
#ifndef MCCONF_FOC_CURRENT_FILTER_CONST
#define MCCONF_FOC_CURRENT_FILTER_CONST 0.1
#endif

// Current Controller Decoupling
#ifndef MCCONF_FOC_CC_DECOUPLING
#define MCCONF_FOC_CC_DECOUPLING 2
#endif

// Observer Type
#ifndef MCCONF_FOC_OBSERVER_TYPE
#define MCCONF_FOC_OBSERVER_TYPE 0
#endif

// HFI Start Voltage
#ifndef MCCONF_FOC_HFI_VOLTAGE_START
#define MCCONF_FOC_HFI_VOLTAGE_START 20
#endif

// HFI Run Voltage
#ifndef MCCONF_FOC_HFI_VOLTAGE_RUN
#define MCCONF_FOC_HFI_VOLTAGE_RUN 4
#endif

// HFI Max Voltage
#ifndef MCCONF_FOC_HFI_VOLTAGE_MAX
#define MCCONF_FOC_HFI_VOLTAGE_MAX 5
#endif

// HFI Gain
#ifndef MCCONF_FOC_HFI_GAIN
#define MCCONF_FOC_HFI_GAIN 0.4
#endif

// HFI Max Error
#ifndef MCCONF_FOC_HFI_MAX_ERR
#define MCCONF_FOC_HFI_MAX_ERR 0.15
#endif

// HFI Current Hysteresis
#ifndef MCCONF_FOC_HFI_HYST
#define MCCONF_FOC_HFI_HYST 2
#endif

// Sensorless ERPM HFI
#ifndef MCCONF_FOC_SL_ERPM_HFI
#define MCCONF_FOC_SL_ERPM_HFI 2000
#endif

// HFI Start Samples
#ifndef MCCONF_FOC_HFI_START_SAMPLES
#define MCCONF_FOC_HFI_START_SAMPLES 65
#endif

// HFI Observer Override Time
#ifndef MCCONF_FOC_HFI_OBS_OVR_SEC
#define MCCONF_FOC_HFI_OBS_OVR_SEC 0.001
#endif

// HFI Samples
#ifndef MCCONF_FOC_HFI_SAMPLES
#define MCCONF_FOC_HFI_SAMPLES 1
#endif

// Run calibration at boot
#ifndef MCCONF_FOC_OFFSETS_CAL_ON_BOOT
#define MCCONF_FOC_OFFSETS_CAL_ON_BOOT 1
#endif

// Current Offset 0
#ifndef MCCONF_FOC_OFFSETS_CURRENT_0
#define MCCONF_FOC_OFFSETS_CURRENT_0 2038.77
#endif

// Current Offset 1
#ifndef MCCONF_FOC_OFFSETS_CURRENT_1
#define MCCONF_FOC_OFFSETS_CURRENT_1 2039.28
#endif

// Current Offset 2
#ifndef MCCONF_FOC_OFFSETS_CURRENT_2
#define MCCONF_FOC_OFFSETS_CURRENT_2 2038.6
#endif

// Voltage Offset 0
#ifndef MCCONF_FOC_OFFSETS_VOLTAGE_0
#define MCCONF_FOC_OFFSETS_VOLTAGE_0 0.0008
#endif

// Voltage Offset 1
#ifndef MCCONF_FOC_OFFSETS_VOLTAGE_1
#define MCCONF_FOC_OFFSETS_VOLTAGE_1 -0.0001
#endif

// Voltage Offset 2
#ifndef MCCONF_FOC_OFFSETS_VOLTAGE_2
#define MCCONF_FOC_OFFSETS_VOLTAGE_2 -0.0006
#endif

// Voltage Offset Undriven 0
#ifndef MCCONF_FOC_OFFSETS_VOLTAGE_UNDRIVEN_0
#define MCCONF_FOC_OFFSETS_VOLTAGE_UNDRIVEN_0 0.0061
#endif

// Voltage Offset Undriven 1
#ifndef MCCONF_FOC_OFFSETS_VOLTAGE_UNDRIVEN_1
#define MCCONF_FOC_OFFSETS_VOLTAGE_UNDRIVEN_1 -0.0032
#endif

// Voltage Offset Undriven 2
#ifndef MCCONF_FOC_OFFSETS_VOLTAGE_UNDRIVEN_2
#define MCCONF_FOC_OFFSETS_VOLTAGE_UNDRIVEN_2 -0.0027
#endif

// Enable Phase Filters
#ifndef MCCONF_FOC_PHASE_FILTER_ENABLE
#define MCCONF_FOC_PHASE_FILTER_ENABLE 1
#endif

// Disable Phase Filter Fault Code
#ifndef MCCONF_FOC_PHASE_FILTER_DISABLE_FAULT
#define MCCONF_FOC_PHASE_FILTER_DISABLE_FAULT 1
#endif

// Maximum ERPM for phase filters
#ifndef MCCONF_FOC_PHASE_FILTER_MAX_ERPM
#define MCCONF_FOC_PHASE_FILTER_MAX_ERPM 10000
#endif

// MTPA Algorithm Mode
#ifndef MCCONF_FOC_MTPA_MODE
#define MCCONF_FOC_MTPA_MODE 0
#endif

// Field Weakening Current Max
#ifndef MCCONF_FOC_FW_CURRENT_MAX
#define MCCONF_FOC_FW_CURRENT_MAX 0
#endif

// Field Weakening Duty Start
#ifndef MCCONF_FOC_FW_DUTY_START
#define MCCONF_FOC_FW_DUTY_START 0.9
#endif

// Field Weakening Ramp Time
#ifndef MCCONF_FOC_FW_RAMP_TIME
#define MCCONF_FOC_FW_RAMP_TIME 0
#endif

// Q Axis Current Factor
#ifndef MCCONF_FOC_FW_Q_CURRENT_FACTOR
#define MCCONF_FOC_FW_Q_CURRENT_FACTOR 0.02
#endif

// Speed Tracker Position Source
#ifndef MCCONF_FOC_SPEED_SOURCE
#define MCCONF_FOC_SPEED_SOURCE 1
#endif

// Short Low-Side FETs on Zero Duty
#ifndef MCCONF_FOC_SHORT_LS_ON_ZERO_DUTY
#define MCCONF_FOC_SHORT_LS_ON_ZERO_DUTY 0
#endif

// PID Loop Rate
#ifndef MCCONF_SP_PID_LOOP_RATE
#define MCCONF_SP_PID_LOOP_RATE 5
#endif

// Speed PID Kp
#ifndef MCCONF_S_PID_KP
#define MCCONF_S_PID_KP 0.004
#endif

// Speed PID Ki
#ifndef MCCONF_S_PID_KI
#define MCCONF_S_PID_KI 0.004
#endif

// Speed PID Kd
#ifndef MCCONF_S_PID_KD
#define MCCONF_S_PID_KD 0.0001
#endif

// Speed PID Kd Filter
#ifndef MCCONF_S_PID_KD_FILTER
#define MCCONF_S_PID_KD_FILTER 0.2
#endif

// Minimum ERPM
#ifndef MCCONF_S_PID_MIN_RPM
#define MCCONF_S_PID_MIN_RPM 900
#endif

// Allow Braking
#ifndef MCCONF_S_PID_ALLOW_BRAKING
#define MCCONF_S_PID_ALLOW_BRAKING 1
#endif

// Ramp eRPMs per second
#ifndef MCCONF_S_PID_RAMP_ERPMS_S
#define MCCONF_S_PID_RAMP_ERPMS_S 25000
#endif

// Speed Source
#ifndef MCCONF_S_PID_SPEED_SOURCE
#define MCCONF_S_PID_SPEED_SOURCE 0
#endif

// Position PID Kp
#ifndef MCCONF_P_PID_KP
#define MCCONF_P_PID_KP 0.03
#endif

// Position PID Ki
#ifndef MCCONF_P_PID_KI
#define MCCONF_P_PID_KI 0
#endif

// Position PID Kd
#ifndef MCCONF_P_PID_KD
#define MCCONF_P_PID_KD 0.0004
#endif

// Position PID Kd Process
#ifndef MCCONF_P_PID_KD_PROC
#define MCCONF_P_PID_KD_PROC 0.0004
#endif

// Position PID Kd Filter
#ifndef MCCONF_P_PID_KD_FILTER
#define MCCONF_P_PID_KD_FILTER 0.2
#endif

// Position Angle Division
#ifndef MCCONF_P_PID_ANG_DIV
#define MCCONF_P_PID_ANG_DIV 1
#endif

// Gain Decrease Angle
#ifndef MCCONF_P_PID_GAIN_DEC_ANGLE
#define MCCONF_P_PID_GAIN_DEC_ANGLE 0
#endif

// Position PID Offset Angle
#ifndef MCCONF_P_PID_OFFSET
#define MCCONF_P_PID_OFFSET 0
#endif

// Startup boost
#ifndef MCCONF_CC_STARTUP_BOOST_DUTY
#define MCCONF_CC_STARTUP_BOOST_DUTY 0.01
#endif

// Minimum Current
#ifndef MCCONF_CC_MIN_CURRENT
#define MCCONF_CC_MIN_CURRENT 0.05
#endif

// Current Controller Gain
#ifndef MCCONF_CC_GAIN
#define MCCONF_CC_GAIN 0.0046
#endif

// Current Control Ramp Step Max
#ifndef MCCONF_CC_RAMP_STEP
#define MCCONF_CC_RAMP_STEP 0.04
#endif

// Fault Stop Time
#ifndef MCCONF_M_FAULT_STOP_TIME
#define MCCONF_M_FAULT_STOP_TIME 50
#endif

// Duty Ramp Step Max
#ifndef MCCONF_M_RAMP_STEP
#define MCCONF_M_RAMP_STEP 0.02
#endif

// Current Backoff Gain
#ifndef MCCONF_M_CURRENT_BACKOFF_GAIN
#define MCCONF_M_CURRENT_BACKOFF_GAIN 0.5
#endif

// Encoder counts
#ifndef MCCONF_M_ENCODER_COUNTS
#define MCCONF_M_ENCODER_COUNTS 8192
#endif

// Sine Amplitude
#ifndef MCCONF_M_ENCODER_SIN_AMP
#define MCCONF_M_ENCODER_SIN_AMP 1
#endif

// Cosine Amplitude
#ifndef MCCONF_M_ENCODER_COS_AMP
#define MCCONF_M_ENCODER_COS_AMP 1
#endif

// Sine Offset
#ifndef MCCONF_M_ENCODER_SIN_OFFSET
#define MCCONF_M_ENCODER_SIN_OFFSET 1.65
#endif

// Cosine Offset
#ifndef MCCONF_M_ENCODER_COS_OFFSET
#define MCCONF_M_ENCODER_COS_OFFSET 1.65
#endif

// Sin/Cos Filter Constant
#ifndef MCCONF_M_ENCODER_SINCOS_FILTER
#define MCCONF_M_ENCODER_SINCOS_FILTER 0.5
#endif

// Sin/Cos Phase Correction
#ifndef MCCONF_M_ENCODER_SINCOS_PHASE
#define MCCONF_M_ENCODER_SINCOS_PHASE 0
#endif

// Sensor Port Mode
#ifndef MCCONF_M_SENSOR_PORT_MODE
#define MCCONF_M_SENSOR_PORT_MODE 0
#endif

// Invert Motor Direction
#ifndef MCCONF_M_INVERT_DIRECTION
#define MCCONF_M_INVERT_DIRECTION 0
#endif

// DRV8301 OC Mode
#ifndef MCCONF_M_DRV8301_OC_MODE
#define MCCONF_M_DRV8301_OC_MODE 0
#endif

// DRV8301 OC Adjustment
#ifndef MCCONF_M_DRV8301_OC_ADJ
#define MCCONF_M_DRV8301_OC_ADJ 16
#endif

// Minimum Switching Frequency
#ifndef MCCONF_M_BLDC_F_SW_MIN
#define MCCONF_M_BLDC_F_SW_MIN 3000
#endif

// Maximum Switching Frequency
#ifndef MCCONF_M_BLDC_F_SW_MAX
#define MCCONF_M_BLDC_F_SW_MAX 35000
#endif

// Switching Frequency
#ifndef MCCONF_M_DC_F_SW
#define MCCONF_M_DC_F_SW 25000
#endif

// Beta Value for Motor Thermistor
#ifndef MCCONF_M_NTC_MOTOR_BETA
#define MCCONF_M_NTC_MOTOR_BETA 3380
#endif

// Auxiliary Output Mode
#ifndef MCCONF_M_OUT_AUX_MODE
#define MCCONF_M_OUT_AUX_MODE 0
#endif

// Motor Temperature Sensor Type
#ifndef MCCONF_M_MOTOR_TEMP_SENS_TYPE
#define MCCONF_M_MOTOR_TEMP_SENS_TYPE 8
#endif

// Coefficient for PTC Motor Thermistor
#ifndef MCCONF_M_PTC_MOTOR_COEFF
#define MCCONF_M_PTC_MOTOR_COEFF 0.61
#endif

// Custom NTC/PTC Resistance
#ifndef MCCONF_M_NTCX_PTCX_RES
#define MCCONF_M_NTCX_PTCX_RES 10000
#endif

// Custom NTC/PTC Base Temperature
#ifndef MCCONF_M_NTCX_PTCX_BASE_TEMP
#define MCCONF_M_NTCX_PTCX_BASE_TEMP 25
#endif

// Hall Sensor Extra Samples
#ifndef MCCONF_M_HALL_EXTRA_SAMPLES
#define MCCONF_M_HALL_EXTRA_SAMPLES 1
#endif

// Battery Filter Constant
#ifndef MCCONF_M_BATT_FILTER_CONST
#define MCCONF_M_BATT_FILTER_CONST 1
#endif

// Motor Poles
#ifndef MCCONF_SI_MOTOR_POLES
#define MCCONF_SI_MOTOR_POLES 14
#endif

// Gear Ratio
#ifndef MCCONF_SI_GEAR_RATIO
#define MCCONF_SI_GEAR_RATIO 2.769
#endif

// Wheel Diameter
#ifndef MCCONF_SI_WHEEL_DIAMETER
#define MCCONF_SI_WHEEL_DIAMETER 0.083
#endif

// Battery Type
#ifndef MCCONF_SI_BATTERY_TYPE
#define MCCONF_SI_BATTERY_TYPE 0
#endif

// Battery Cells Series
#ifndef MCCONF_SI_BATTERY_CELLS
#define MCCONF_SI_BATTERY_CELLS 6
#endif

// Battery Capacity
#ifndef MCCONF_SI_BATTERY_AH
#define MCCONF_SI_BATTERY_AH 6
#endif

// Motor No Load Current
#ifndef MCCONF_SI_MOTOR_NL_CURRENT
#define MCCONF_SI_MOTOR_NL_CURRENT 1
#endif

// BMS Type
#ifndef MCCONF_BMS_TYPE
#define MCCONF_BMS_TYPE 1
#endif

// BMS Limit Mode
#ifndef MCCONF_BMS_LIMIT_MODE
#define MCCONF_BMS_LIMIT_MODE 3
#endif

// Temperature Limit Start
#ifndef MCCONF_BMS_T_LIMIT_START
#define MCCONF_BMS_T_LIMIT_START 45
#endif

// Temperature Limit End
#ifndef MCCONF_BMS_T_LIMIT_END
#define MCCONF_BMS_T_LIMIT_END 65
#endif

// SOC Limit Start
#ifndef MCCONF_BMS_SOC_LIMIT_START
#define MCCONF_BMS_SOC_LIMIT_START 0.05
#endif

// SOC Limit End
#ifndef MCCONF_BMS_SOC_LIMIT_END
#define MCCONF_BMS_SOC_LIMIT_END 0
#endif

// VCell Min Limit Start
#ifndef MCCONF_BMS_VMIN_LIMIT_START
#define MCCONF_BMS_VMIN_LIMIT_START 2.9
#endif

// VCell Min Limit End
#ifndef MCCONF_BMS_VMIN_LIMIT_END
#define MCCONF_BMS_VMIN_LIMIT_END 2.5
#endif

// VCell Max Limit Start
#ifndef MCCONF_BMS_VMAX_LIMIT_START
#define MCCONF_BMS_VMAX_LIMIT_START 4.2
#endif

// VCell Max Limit End
#ifndef MCCONF_BMS_VMAX_LIMIT_END
#define MCCONF_BMS_VMAX_LIMIT_END 4.3
#endif

// Forward CAN to Local
#ifndef MCCONF_BMS_FWD_CAN_MODE
#define MCCONF_BMS_FWD_CAN_MODE 0
#endif

// MCCONF_LECTEC_ESC_H_
#endif

