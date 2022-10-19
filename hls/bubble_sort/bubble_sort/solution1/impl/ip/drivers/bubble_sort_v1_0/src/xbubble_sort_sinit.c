// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.2
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xbubble_sort.h"

extern XBubble_sort_Config XBubble_sort_ConfigTable[];

XBubble_sort_Config *XBubble_sort_LookupConfig(u16 DeviceId) {
	XBubble_sort_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XBUBBLE_SORT_NUM_INSTANCES; Index++) {
		if (XBubble_sort_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XBubble_sort_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XBubble_sort_Initialize(XBubble_sort *InstancePtr, u16 DeviceId) {
	XBubble_sort_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XBubble_sort_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XBubble_sort_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif
