// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.2
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef XHEAP_SORT_H
#define XHEAP_SORT_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#ifndef __linux__
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#else
#include <stdint.h>
#include <assert.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stddef.h>
#endif
#include "xheap_sort_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Axilites_BaseAddress;
} XHeap_sort_Config;
#endif

typedef struct {
    u32 Axilites_BaseAddress;
    u32 IsReady;
} XHeap_sort;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XHeap_sort_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XHeap_sort_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XHeap_sort_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XHeap_sort_ReadReg(BaseAddress, RegOffset) \
    *(volatile u32*)((BaseAddress) + (RegOffset))

#define Xil_AssertVoid(expr)    assert(expr)
#define Xil_AssertNonvoid(expr) assert(expr)

#define XST_SUCCESS             0
#define XST_DEVICE_NOT_FOUND    2
#define XST_OPEN_DEVICE_FAILED  3
#define XIL_COMPONENT_IS_READY  1
#endif

/************************** Function Prototypes *****************************/
#ifndef __linux__
int XHeap_sort_Initialize(XHeap_sort *InstancePtr, u16 DeviceId);
XHeap_sort_Config* XHeap_sort_LookupConfig(u16 DeviceId);
int XHeap_sort_CfgInitialize(XHeap_sort *InstancePtr, XHeap_sort_Config *ConfigPtr);
#else
int XHeap_sort_Initialize(XHeap_sort *InstancePtr, const char* InstanceName);
int XHeap_sort_Release(XHeap_sort *InstancePtr);
#endif

void XHeap_sort_Start(XHeap_sort *InstancePtr);
u32 XHeap_sort_IsDone(XHeap_sort *InstancePtr);
u32 XHeap_sort_IsIdle(XHeap_sort *InstancePtr);
u32 XHeap_sort_IsReady(XHeap_sort *InstancePtr);
void XHeap_sort_EnableAutoRestart(XHeap_sort *InstancePtr);
void XHeap_sort_DisableAutoRestart(XHeap_sort *InstancePtr);

u32 XHeap_sort_Get_array_r_BaseAddress(XHeap_sort *InstancePtr);
u32 XHeap_sort_Get_array_r_HighAddress(XHeap_sort *InstancePtr);
u32 XHeap_sort_Get_array_r_TotalBytes(XHeap_sort *InstancePtr);
u32 XHeap_sort_Get_array_r_BitWidth(XHeap_sort *InstancePtr);
u32 XHeap_sort_Get_array_r_Depth(XHeap_sort *InstancePtr);
u32 XHeap_sort_Write_array_r_Words(XHeap_sort *InstancePtr, int offset, int *data, int length);
u32 XHeap_sort_Read_array_r_Words(XHeap_sort *InstancePtr, int offset, int *data, int length);
u32 XHeap_sort_Write_array_r_Bytes(XHeap_sort *InstancePtr, int offset, char *data, int length);
u32 XHeap_sort_Read_array_r_Bytes(XHeap_sort *InstancePtr, int offset, char *data, int length);
u32 XHeap_sort_Get_array_out_BaseAddress(XHeap_sort *InstancePtr);
u32 XHeap_sort_Get_array_out_HighAddress(XHeap_sort *InstancePtr);
u32 XHeap_sort_Get_array_out_TotalBytes(XHeap_sort *InstancePtr);
u32 XHeap_sort_Get_array_out_BitWidth(XHeap_sort *InstancePtr);
u32 XHeap_sort_Get_array_out_Depth(XHeap_sort *InstancePtr);
u32 XHeap_sort_Write_array_out_Words(XHeap_sort *InstancePtr, int offset, int *data, int length);
u32 XHeap_sort_Read_array_out_Words(XHeap_sort *InstancePtr, int offset, int *data, int length);
u32 XHeap_sort_Write_array_out_Bytes(XHeap_sort *InstancePtr, int offset, char *data, int length);
u32 XHeap_sort_Read_array_out_Bytes(XHeap_sort *InstancePtr, int offset, char *data, int length);

void XHeap_sort_InterruptGlobalEnable(XHeap_sort *InstancePtr);
void XHeap_sort_InterruptGlobalDisable(XHeap_sort *InstancePtr);
void XHeap_sort_InterruptEnable(XHeap_sort *InstancePtr, u32 Mask);
void XHeap_sort_InterruptDisable(XHeap_sort *InstancePtr, u32 Mask);
void XHeap_sort_InterruptClear(XHeap_sort *InstancePtr, u32 Mask);
u32 XHeap_sort_InterruptGetEnabled(XHeap_sort *InstancePtr);
u32 XHeap_sort_InterruptGetStatus(XHeap_sort *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
