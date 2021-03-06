/*
 * Copyright (c) 2020, Commonwealth Scientific and Industrial Research 
 * Organisation (CSIRO) ABN 41 687 119 230.
 *
 * Filename: gatt_autogen.h
 * Author: John Scolaro
 * 
 */

#ifndef __CSIRO_CORE_GATT_AUTOGEN
#define __CSIRO_CORE_GATT_AUTOGEN

/**
 * 
 *      THIS FILE WAS AUTOGENERATED FROM gatt.xml. DO NOT MODIFY.
 *      
 *      GENERATED ON: {{date}}
 * 
 *      PURPOSE OF THIS FILE IS TO PROVIDE AN ARCHITECTURE AGNOSTIC WAY OF
 *      ACCESSING CHARACTERISTIC HANDLES
 * 
 *      AS WE DONT WANT TO MODIFY THE FILE EFR32 GENERATES, WE WILL CONFORM TO THEIR SPEC
 * 
 *      FOR NOW WE PRETEND THAT THE APPLICATION ONLY WANTS THE GENERIC
 *      CSIRO SERVICES
 * 
 */

#include "stdint.h"

{% for service in gatt_dict['gatt']['service'] -%}
{% if '@id' in service -%}
extern uint16_t gattdb_{{service['@id']}};
{% for characteristic in service['characteristic'] -%}
{%- if '@id' in characteristic -%}
extern uint16_t gattdb_{{characteristic['@id']}};
{% endif -%}
{%- endfor -%}
{%- endif -%}
{%- endfor %}

extern uint16_t *ppusGattProfileHandles[];

#endif /* __CSIRO_CORE_GATT_AUTOGEN */