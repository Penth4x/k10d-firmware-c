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

uint32_t initialize_object_subfields_104ec8d6(cls_105c2b6c *param_1,uint32_t param_2)

{
  return_one_stub_104eb9e8((uint32_t)(&param_1->field_0x4));
  return_one_stub_104ebcb2((uint32_t)(&param_1->field_0x10),(uint32_t)(param_2));
  return_one_stub_104ebea4((uint32_t)(&param_1->field_0x1c),(uint32_t)(param_2));
  return_one_stub_104ebfb2((uint32_t)(&param_1->field_0x28),(uint32_t)(param_2));
  virtual_slot3_stub_104ec446((uint32_t)(&param_1->field_0x34),(uint32_t)(param_2));
  return_constant_one_104ed410((uint32_t)(&param_1->field_0x40),(uint32_t)(param_2));
  return_constant_one_104ed518((uint32_t)(&param_1->field_0x4c),(uint32_t)(param_2));
  return_one_stub_104ed600((uint32_t)(&param_1->field_0x58),(uint32_t)(param_2));
  return_one_stub_104ed850((uint32_t)(&param_1->field_0x64),(uint32_t)(param_2));
  virtual_slot3_stub_1050a884((uint32_t)(&param_1->field_0x70),(uint32_t)(param_2));
  param_1->field_0x7c = 0x8001369c/*SDRAM*/;
  param_1->field_0x8c = 0x80013864/*SDRAM*/;
  param_1->field_0x90 = 0x80013960/*SDRAM*/;
  param_1->field_0x9c = 0x80013edc/*SDRAM*/;
  param_1->field_0x80 = 0x80014398/*SDRAM*/;
  param_1->field_0x84 = 0x800147b4/*SDRAM*/;
  param_1->field_0x94 = 0x800144e0/*SDRAM*/;
  param_1->field_0x88 = 0x80014548/*SDRAM*/;
  param_1->field_0x98 = 0x800146cc/*SDRAM*/;
  param_1->field_0xa4 = 0x800136d4/*SDRAM*/;
  param_1->field_0xb4 = 0x80013890/*SDRAM*/;
  param_1->field_0xb8 = 0x8001397c/*SDRAM*/;
  param_1->field_0xc4 = 0x80013ef8/*SDRAM*/;
  param_1->field_0xa8 = 0x800143b4/*SDRAM*/;
  param_1->field_0xac = 0x800147d0/*SDRAM*/;
  param_1->field_0xbc = 0x800144fc/*SDRAM*/;
  param_1->field_0xb0 = 0x80014564/*SDRAM*/;
  param_1->field_0xc0 = 0x800146e8/*SDRAM*/;
  param_1->field_0xcc = 0x80013704/*SDRAM*/;
  param_1->field_0xdc = 0x800138c0/*SDRAM*/;
  param_1->field_0xe0 = 0x80013998/*SDRAM*/;
  param_1->field_0xec = 0x80013f14/*SDRAM*/;
  param_1->field_0xd0 = 0x800143d0/*SDRAM*/;
  param_1->field_0xd4 = 0x800147ec/*SDRAM*/;
  param_1->field_0xe4 = 0x80014518/*SDRAM*/;
  param_1->field_0xd8 = 0x80014594/*SDRAM*/;
  param_1->field_0xe8 = 0x80014704/*SDRAM*/;
  return 1;
}
