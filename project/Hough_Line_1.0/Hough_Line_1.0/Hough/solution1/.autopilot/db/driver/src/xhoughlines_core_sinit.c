// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xhoughlines_core.h"

extern XHoughlines_core_Config XHoughlines_core_ConfigTable[];

XHoughlines_core_Config *XHoughlines_core_LookupConfig(u16 DeviceId) {
	XHoughlines_core_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XHOUGHLINES_CORE_NUM_INSTANCES; Index++) {
		if (XHoughlines_core_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XHoughlines_core_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XHoughlines_core_Initialize(XHoughlines_core *InstancePtr, u16 DeviceId) {
	XHoughlines_core_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XHoughlines_core_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XHoughlines_core_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif
