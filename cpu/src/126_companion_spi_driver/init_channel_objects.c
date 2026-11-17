/* @k10d init_channel_objects @ 0x1043c940
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_channel_objects(void *param_1)

{
  void *pvVar1;
  int iVar2;
  uint32_t uVar3;
  uintptr_t sp;
  uint32_t uStack_4c;
  uint32_t uStack_48;
  uint32_t uStack_44;
  uint32_t uStack_40;
  uint32_t uStack_3c;
  uint32_t uStack_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  cpucom_ctx_init(&uStack_4c);
  uStack_4c = read_table_entry_field(pvVar1,0x42);
  uStack_48 = read_table_entry_field(pvVar1,0x45);
  uStack_44 = 0x56;
  uStack_40 = 0x50;
  uStack_38 = 0x52;
  uStack_3c = 0x54;
  uStack_34 = 0x8a;
  uStack_30 = 9;
  iVar2 = cls_105a04cc_new((uint32_t *)0x0,&uStack_4c);
  *(int *)((int)param_1 + 4) = iVar2;
  iVar2 = *(int *)(*(int *)((int)param_1 + 4) + 4);
  (**(code **)(iVar2 + 0x14))(*(int *)((int)param_1 + 4) + (int)*(short *)(iVar2 + 0x10),0);
  uStack_4c = read_table_entry_field(pvVar1,0x43);
  uStack_48 = read_table_entry_field(pvVar1,0x46);
  uStack_44 = 0x5e;
  uStack_40 = 0x58;
  uStack_38 = 0x5a;
  uStack_34 = 0x8b;
  uStack_3c = 0x5c;
  uStack_30 = 10;
  iVar2 = cls_105a04cc_new((uint32_t *)0x0,&uStack_4c);
  *(int *)((int)param_1 + 8) = iVar2;
  iVar2 = *(int *)(*(int *)((int)param_1 + 8) + 4);
  (**(code **)(iVar2 + 0x14))(*(int *)((int)param_1 + 8) + (int)*(short *)(iVar2 + 0x10),0);
  alloc_and_zero_struct_1043c836(&uStack_2c);
  uStack_2c = read_table_entry_field(pvVar1,0x28);
  uStack_28 = 0;
  uStack_24 = 0x5c002000/*DISPLAY-CTL*/;
  uStack_20 = 0x5c002008/*DISPLAY-CTL*/;
  uStack_1c = 0x5c00200c/*DISPLAY-CTL*/;
  uStack_18 = 0x5c002004/*DISPLAY-CTL*/;
  uStack_14 = 0x8c;
  uStack_10 = 0x2c;
  uStack_c = read_table_entry_field(pvVar1,0xc);
  iVar2 = cls_105a05a0_new((uint32_t *)0x0,&uStack_2c);
  *(int *)((int)param_1 + 0xc) = iVar2;
  iVar2 = *(int *)(*(int *)((int)param_1 + 0xc) + 4);
  (**(code **)(iVar2 + 0x14))(*(int *)((int)param_1 + 0xc) + (int)*(short *)(iVar2 + 0x10),0);
  uStack_2c = read_table_entry_field(pvVar1,0x29);
  uStack_28 = 0;
  uStack_24 = 0x5c002010/*DISPLAY-CTL*/;
  uStack_20 = 0x5c002018/*DISPLAY-CTL*/;
  uStack_1c = 0x5c00201c/*DISPLAY-CTL*/;
  uStack_18 = 0x5c002014/*DISPLAY-CTL*/;
  uStack_14 = 0x8d;
  uStack_10 = 0x2d;
  iVar2 = cls_105a05a0_new((uint32_t *)0x0,&uStack_2c);
  *(int *)((int)param_1 + 0x10) = iVar2;
  (**(code **)(*(int *)(iVar2 + 4) + 0x14))
            (*(int *)((int)param_1 + 0x10) + (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
  uStack_2c = read_table_entry_field(pvVar1,0x2a);
  uStack_28 = 0;
  uStack_24 = 0x5c002020/*DISPLAY-CTL*/;
  uStack_20 = 0x5c002028/*DISPLAY-CTL*/;
  uStack_1c = 0x5c00202c/*DISPLAY-CTL*/;
  uStack_18 = 0x5c002024/*DISPLAY-CTL*/;
  uStack_14 = 0x8e;
  uStack_10 = 0x2e;
  iVar2 = cls_105a05a0_new((uint32_t *)0x0,&uStack_2c);
  *(int *)((int)param_1 + 0x14) = iVar2;
  (**(code **)(*(int *)(iVar2 + 4) + 0x14))
            (*(int *)((int)param_1 + 0x14) + (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
  uStack_2c = 0;
  read_table_entry_field(pvVar1,0x30);
  uStack_28 = 0;
  uStack_24 = 0x5c002030/*DISPLAY-CTL*/;
  uStack_20 = 0x5c002038/*DISPLAY-CTL*/;
  uStack_1c = 0x5c00203c/*DISPLAY-CTL*/;
  uStack_14 = 0x8f;
  uStack_18 = 0x5c002034/*DISPLAY-CTL*/;
  uStack_10 = 0x2f;
  iVar2 = cls_105a05a0_new((uint32_t *)0x0,&uStack_2c);
  *(int *)((int)param_1 + 0x18) = iVar2;
  uVar3 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                    (*(int *)((int)param_1 + 0x18) + (int)*(short *)(*(int *)(iVar2 + 4) + 0x10),0);
  free_if_flag_set_1043c874(&uStack_2c,2);
  free_if_flag_set_1043c20c(&uStack_4c,2);
  return uVar3;
}
