/* @k10d initialize_object_subfields_104ec8d6 @ 0x104ec8d6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Initializes ten sub-objects and writes a fixed set of SDRAM pointers into a large
 *   object.
 * summary:
 *   The function calls virtual slot 3 on ten distinct sub-objects located at offsets 0x4
 *   through 0x70 of param_1, passing param_2 to all but the first. It then stores 28
 *   hardcoded pointers in the 0x8001xxxx SDRAM range into fields from offset 0x7c to 0xec.
 *   It returns 1. The specific camera subsystem role of these sub-objects is not
 *   determinable from the provided callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_object_subfields_104ec8d6(void *param_1,uint32_t param_2)

{
  return_one_stub_104eb9e8((int)param_1 + 4);
  return_one_stub_104ebcb2((int)param_1 + 0x10,param_2);
  return_one_stub_104ebea4((int)param_1 + 0x1c,param_2);
  return_one_stub_104ebfb2((int)param_1 + 0x28,param_2);
  virtual_slot3_stub_104ec446((int)param_1 + 0x34,param_2);
  return_constant_one_104ed410((int)param_1 + 0x40,param_2);
  return_constant_one_104ed518((int)param_1 + 0x4c,param_2);
  return_one_stub_104ed600((int)param_1 + 0x58,param_2);
  return_one_stub_104ed850((int)param_1 + 100,param_2);
  virtual_slot3_stub_1050a884((int)param_1 + 0x70,param_2);
  *(uint32_t *)((int)param_1 + 0x7c) = 0x8001369c/*SDRAM*/;
  *(uint32_t *)((int)param_1 + 0x8c) = 0x80013864/*SDRAM*/;
  *(uint32_t *)((int)param_1 + 0x90) = 0x80013960/*SDRAM*/;
  *(uint32_t *)((int)param_1 + 0x9c) = 0x80013edc/*SDRAM*/;
  *(uint32_t *)((int)param_1 + 0x80) = 0x80014398/*SDRAM*/;
  *(uint32_t *)((int)param_1 + 0x84) = 0x800147b4/*SDRAM*/;
  *(uint32_t *)((int)param_1 + 0x94) = 0x800144e0/*SDRAM*/;
  *(uint32_t *)((int)param_1 + 0x88) = 0x80014548/*SDRAM*/;
  *(uint32_t *)((int)param_1 + 0x98) = 0x800146cc/*SDRAM*/;
  *(uint32_t *)((int)param_1 + 0xa4) = 0x800136d4/*SDRAM*/;
  *(uint32_t *)((int)param_1 + 0xb4) = 0x80013890/*SDRAM*/;
  *(uint32_t *)((int)param_1 + 0xb8) = 0x8001397c/*SDRAM*/;
  *(uint32_t *)((int)param_1 + 0xc4) = 0x80013ef8/*SDRAM*/;
  *(uint32_t *)((int)param_1 + 0xa8) = 0x800143b4/*SDRAM*/;
  *(uint32_t *)((int)param_1 + 0xac) = 0x800147d0/*SDRAM*/;
  *(uint32_t *)((int)param_1 + 0xbc) = 0x800144fc/*SDRAM*/;
  *(uint32_t *)((int)param_1 + 0xb0) = 0x80014564/*SDRAM*/;
  *(uint32_t *)((int)param_1 + 0xc0) = 0x800146e8/*SDRAM*/;
  *(uint32_t *)((int)param_1 + 0xcc) = 0x80013704/*SDRAM*/;
  *(uint32_t *)((int)param_1 + 0xdc) = 0x800138c0/*SDRAM*/;
  *(uint32_t *)((int)param_1 + 0xe0) = 0x80013998/*SDRAM*/;
  *(uint32_t *)((int)param_1 + 0xec) = 0x80013f14/*SDRAM*/;
  *(uint32_t *)((int)param_1 + 0xd0) = 0x800143d0/*SDRAM*/;
  *(uint32_t *)((int)param_1 + 0xd4) = 0x800147ec/*SDRAM*/;
  *(uint32_t *)((int)param_1 + 0xe4) = 0x80014518/*SDRAM*/;
  *(uint32_t *)((int)param_1 + 0xd8) = 0x80014594/*SDRAM*/;
  *(uint32_t *)((int)param_1 + 0xe8) = 0x80014704/*SDRAM*/;
  return 1;
}
