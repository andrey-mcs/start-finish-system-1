# THIS FILE IS AUTOMATICALLY GENERATED
# Project: D:\Cypress\system-start-finish\vesion 2\fw\finish\sandbox\v7_debug_ntp\Finish(state machine)\debug_ntp.cydsn\debug_ntp.cyprj
# Date: Thu, 29 Dec 2016 13:23:21 GMT
#set_units -time ns
create_clock -name {DEBUG_UART_SCBCLK(FFB)} -period 8687.5 -waveform {0 4343.75} [list [get_pins {ClockBlock/ff_div_1}]]
create_clock -name {UART_XB_SCBCLK(FFB)} -period 34729.166666666664 -waveform {0 17364.5833333333} [list [get_pins {ClockBlock/ff_div_2}]]
create_clock -name {CyRouted1} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/dsi_in_0}]]
create_clock -name {CyWCO} -period 30517.578125 -waveform {0 15258.7890625} [list [get_pins {ClockBlock/wco}]]
create_clock -name {CyLFCLK} -period 30517.578125 -waveform {0 15258.7890625} [list [get_pins {ClockBlock/lfclk}]]
create_clock -name {CyECO} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/eco}]]
create_clock -name {CyIMO} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyHFCLK} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/hfclk}]]
create_clock -name {CySYSCLK} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/sysclk}]]
create_generated_clock -name {DEBUG_UART_SCBCLK} -source [get_pins {ClockBlock/hfclk}] -edges {1 417 835} [list]
create_generated_clock -name {UART_XB_SCBCLK} -source [get_pins {ClockBlock/hfclk}] -edges {1 1667 3335} -nominal_period 34729.166666666664 [list]


# Component constraints for D:\Cypress\system-start-finish\vesion 2\fw\finish\sandbox\v7_debug_ntp\Finish(state machine)\debug_ntp.cydsn\TopDesign\TopDesign.cysch
# Project: D:\Cypress\system-start-finish\vesion 2\fw\finish\sandbox\v7_debug_ntp\Finish(state machine)\debug_ntp.cydsn\debug_ntp.cyprj
# Date: Thu, 29 Dec 2016 13:23:19 GMT
