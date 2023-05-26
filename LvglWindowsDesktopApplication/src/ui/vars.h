#ifndef EEZ_LVGL_UI_VARS_H
#define EEZ_LVGL_UI_VARS_H

#include <stdint.h>
#include <stdbool.h>

// enum declarations

typedef enum {
    MyEnum_Member1 = 1,
    MyEnum_Member2 = 2,
    MyEnum_Member3 = 3
} MyEnum;

// Flow global variables

enum FlowGlobalVariables {
    FLOW_GLOBAL_VARIABLE_OPTIONS = 0,
    FLOW_GLOBAL_VARIABLE_INFO_MESSAGE = 1,
    FLOW_GLOBAL_VARIABLE_POINTS = 2
};

// Native global variables

extern MyEnum get_var_my_enum_var();
extern void set_var_my_enum_var(MyEnum value);


#endif /*EEZ_LVGL_UI_VARS_H*/