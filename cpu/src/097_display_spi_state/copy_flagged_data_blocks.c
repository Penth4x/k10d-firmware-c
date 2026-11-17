/* @k10d copy_flagged_data_blocks @ 0x104192c6
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Copies data blocks from calculated offsets in param_1 to a destination buffer based on
 *   three boolean flags.
 * summary:
 *   The function reads a pointer from param_1+0x84 and inspects three byte flags at offsets
 *   0x28, 0x2a, and 0x2b. It calls set_object_field_0x20 to copy data from a calculated
 *   offset (ranging from 0x462 to 0xfb4) in param_1 to the destination buffer. It then
 *   queries settings_getter with arguments 0x5b and 0x60 to determine if a second copy
 *   operation is required, using different offset ranges (0x96a to 0xe72) for the second
 *   call to set_object_field_0x20.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_flagged_data_blocks(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  
  pvVar4 = (void *)(param_1 + 800);
  set_object_field_0x20(*(int *)(param_1 + 0x84),pvVar4);
  cVar2 = *(char *)(*(int *)(param_1 + 0x84) + 0x2b);
  if (*(char *)(*(int *)(param_1 + 0x84) + 0x2a) == '\0') {
    if (cVar2 == '\0') goto LAB_10419346;
    iVar1 = *(int *)(param_1 + 0x84);
    if (*(char *)(*(int *)(param_1 + 0x84) + 0x28) == '\0') {
      iVar3 = 0x462;
    }
    else {
      iVar3 = 0x5a4;
    }
LAB_1041930c:
    pvVar4 = (void *)(iVar3 + param_1);
  }
  else {
    if (cVar2 != '\0') {
      iVar1 = *(int *)(param_1 + 0x84);
      if (*(char *)(*(int *)(param_1 + 0x84) + 0x28) == '\0') {
        iVar3 = 0x6e6;
      }
      else {
        iVar3 = 0x828;
      }
      goto LAB_1041930c;
    }
    iVar1 = *(int *)(param_1 + 0x84);
  }
  set_object_field_0x20(iVar1,pvVar4);
LAB_10419346:
  cVar2 = settings_getter(*(int *)(param_1 + 0x84) + 0x2ac,0x5b);
  if (cVar2 == '\0') {
    cVar2 = settings_getter(*(int *)(param_1 + 0x84) + 0x2ac,0x60);
    if (cVar2 == '\0') {
      return;
    }
    cVar2 = *(char *)(*(int *)(param_1 + 0x84) + 0x2b);
    if (*(char *)(*(int *)(param_1 + 0x84) + 0x2a) == '\0') {
      if (cVar2 == '\0') {
        return;
      }
      iVar1 = *(int *)(param_1 + 0x84);
      if (*(char *)(*(int *)(param_1 + 0x84) + 0x28) == '\0') {
        iVar3 = 0xe72;
      }
      else {
        iVar3 = 0xfb4;
      }
    }
    else if (cVar2 == '\0') {
      iVar3 = 0xd30;
      iVar1 = *(int *)(param_1 + 0x84);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x84);
      if (*(char *)(*(int *)(param_1 + 0x84) + 0x28) == '\0') {
        iVar3 = 0xe72;
      }
      else {
        iVar3 = 0xfb4;
      }
    }
  }
  else {
    if (*(char *)(*(int *)(param_1 + 0x84) + 0x2a) == '\0') {
      return;
    }
    if (*(char *)(*(int *)(param_1 + 0x84) + 0x2b) == '\0') {
      iVar3 = 0x96a;
      iVar1 = *(int *)(param_1 + 0x84);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x84);
      if (*(char *)(*(int *)(param_1 + 0x84) + 0x28) == '\0') {
        iVar3 = 0xaac;
      }
      else {
        iVar3 = 0xbee;
      }
    }
  }
  set_object_field_0x20(iVar1,(void *)(iVar3 + param_1));
  return;
}
