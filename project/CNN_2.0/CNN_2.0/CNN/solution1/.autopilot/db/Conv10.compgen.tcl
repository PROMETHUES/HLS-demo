# This script segment is generated automatically by AutoPilot

# Memory (RAM/ROM)  definition:
set ID 111
set hasByteEnable 0
set MemName Conv10_LineBufferzec
set CoreName ap_simcore_mem
set PortList { 1 0 }
set DataWd 32
set AddrRange 12
set AddrWd 4
set impl_style block
set TrueReset 0
set HasInitializer 0
set IsROM 0
set ROMData {}
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.094
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName RAM
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_RAM] == "::AESL_LIB_VIRTEX::xil_gen_RAM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_RAM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_RAM, check your platform lib"
  }
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 112 \
    name src_val_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename src_val_V \
    op interface \
    ports { src_val_V_address0 { O 10 vector } src_val_V_ce0 { O 1 bit } src_val_V_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'src_val_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 139 \
    name dst_val_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename dst_val_V \
    op interface \
    ports { dst_val_V_address0 { O 6 vector } dst_val_V_ce0 { O 1 bit } dst_val_V_we0 { O 1 bit } dst_val_V_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dst_val_V'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 113 \
    name src_val_V_offset \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_src_val_V_offset \
    op interface \
    ports { src_val_V_offset { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 114 \
    name kernel_val_0_V_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_val_0_V_0_read \
    op interface \
    ports { kernel_val_0_V_0_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 115 \
    name kernel_val_0_V_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_val_0_V_1_read \
    op interface \
    ports { kernel_val_0_V_1_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 116 \
    name kernel_val_0_V_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_val_0_V_2_read \
    op interface \
    ports { kernel_val_0_V_2_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 117 \
    name kernel_val_0_V_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_val_0_V_3_read \
    op interface \
    ports { kernel_val_0_V_3_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 118 \
    name kernel_val_0_V_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_val_0_V_4_read \
    op interface \
    ports { kernel_val_0_V_4_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 119 \
    name kernel_val_1_V_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_val_1_V_0_read \
    op interface \
    ports { kernel_val_1_V_0_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 120 \
    name kernel_val_1_V_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_val_1_V_1_read \
    op interface \
    ports { kernel_val_1_V_1_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 121 \
    name kernel_val_1_V_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_val_1_V_2_read \
    op interface \
    ports { kernel_val_1_V_2_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 122 \
    name kernel_val_1_V_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_val_1_V_3_read \
    op interface \
    ports { kernel_val_1_V_3_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 123 \
    name kernel_val_1_V_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_val_1_V_4_read \
    op interface \
    ports { kernel_val_1_V_4_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 124 \
    name kernel_val_2_V_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_val_2_V_0_read \
    op interface \
    ports { kernel_val_2_V_0_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 125 \
    name kernel_val_2_V_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_val_2_V_1_read \
    op interface \
    ports { kernel_val_2_V_1_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 126 \
    name kernel_val_2_V_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_val_2_V_2_read \
    op interface \
    ports { kernel_val_2_V_2_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 127 \
    name kernel_val_2_V_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_val_2_V_3_read \
    op interface \
    ports { kernel_val_2_V_3_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 128 \
    name kernel_val_2_V_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_val_2_V_4_read \
    op interface \
    ports { kernel_val_2_V_4_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 129 \
    name kernel_val_3_V_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_val_3_V_0_read \
    op interface \
    ports { kernel_val_3_V_0_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 130 \
    name kernel_val_3_V_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_val_3_V_1_read \
    op interface \
    ports { kernel_val_3_V_1_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 131 \
    name kernel_val_3_V_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_val_3_V_2_read \
    op interface \
    ports { kernel_val_3_V_2_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 132 \
    name kernel_val_3_V_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_val_3_V_3_read \
    op interface \
    ports { kernel_val_3_V_3_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 133 \
    name kernel_val_3_V_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_val_3_V_4_read \
    op interface \
    ports { kernel_val_3_V_4_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 134 \
    name kernel_val_4_V_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_val_4_V_0_read \
    op interface \
    ports { kernel_val_4_V_0_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 135 \
    name kernel_val_4_V_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_val_4_V_1_read \
    op interface \
    ports { kernel_val_4_V_1_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 136 \
    name kernel_val_4_V_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_val_4_V_2_read \
    op interface \
    ports { kernel_val_4_V_2_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 137 \
    name kernel_val_4_V_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_val_4_V_3_read \
    op interface \
    ports { kernel_val_4_V_3_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 138 \
    name kernel_val_4_V_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_val_4_V_4_read \
    op interface \
    ports { kernel_val_4_V_4_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}

