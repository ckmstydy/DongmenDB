//
// Created by Sam on 2018/2/7.
//

#ifndef DONGMENDB_PHYSICAL_SCAN_SELECT_H
#define DONGMENDB_PHYSICAL_SCAN_SELECT_H

#include <expression.h>
#include "physicalscan.h"
typedef struct physical_scan_ physical_scan;
typedef struct physical_scan_select_{
    Expression *cond;
    physical_scan *scan;
}physical_scan_select;


physical_scan *physical_scan_select_create(physical_scan *scan);

void physical_scan_select_init_scan(physical_scan *scan);

int physical_scan_select_before_first(physical_scan *tableScan);

int physical_scan_select_next(physical_scan *tableScan);

int physical_scan_select_close(physical_scan *tableScan);

int physical_scan_select_get_int(physical_scan *tableScan, char *fieldName);

int physical_scan_select_get_string(physical_scan *tableScan, char *fieldName, char *value);

int physical_scan_select_has_field(physical_scan *tableScan, char *fieldName);

int physical_scan_select_set_int(physical_scan *tableScan, char *fieldName, int value);

int physical_scan_select_set_string(physical_scan *tableScan, char *fieldName, char *value);

int physical_scan_select_delete(physical_scan *tableScan);

int physical_scan_select_insert(physical_scan *tableScan);

int physical_scan_select_get_rid(physical_scan *tableScan, record_id *recordId);

int physical_scan_select_moveto_rid(physical_scan *tableScan, record_id *recordId);

#endif //DONGMENDB_PHYSICAL_SCAN_SELECT_H