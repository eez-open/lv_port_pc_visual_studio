#ifndef EEZ_LVGL_UI_STRUCTS_H
#define EEZ_LVGL_UI_STRUCTS_H

#include <eez/flow/flow.h>
#include <stdint.h>
#include <stdbool.h>

#include "vars.h"

using namespace eez;

enum FlowStructures {
    FLOW_STRUCTURE_OPTIONS = 49,
    FLOW_STRUCTURE_POINT = 51
};

enum FlowArrayOfStructures {
    FLOW_ARRAY_OF_STRUCTURE_OPTIONS = 50,
    FLOW_ARRAY_OF_STRUCTURE_POINT = 52
};

enum OptionsFlowStructureFields {
    FLOW_STRUCTURE_OPTIONS_FIELD_SWITCH_OPTION = 0,
    FLOW_STRUCTURE_OPTIONS_FIELD_NUM_OPTIONS_ARR = 1,
    FLOW_STRUCTURE_OPTIONS_FIELD_MY_ENUM_FIELD = 2,
    FLOW_STRUCTURE_OPTIONS_NUM_FIELDS
};

enum PointFlowStructureFields {
    FLOW_STRUCTURE_POINT_FIELD_X = 0,
    FLOW_STRUCTURE_POINT_FIELD_Y = 1,
    FLOW_STRUCTURE_POINT_NUM_FIELDS
};

struct OptionsValue {
    Value value;
    
    OptionsValue() {
        value = Value::makeArrayRef(FLOW_STRUCTURE_OPTIONS_NUM_FIELDS, FLOW_STRUCTURE_OPTIONS, 0);
    }
    
    OptionsValue(Value value) : value(value) {}
    
    operator Value() const { return value; }
    
    operator bool() const { return value.isArray(); }
    
    bool switch_option() {
        return value.getArray()->values[FLOW_STRUCTURE_OPTIONS_FIELD_SWITCH_OPTION].getBoolean();
    }
    void switch_option(bool switch_option) {
        value.getArray()->values[FLOW_STRUCTURE_OPTIONS_FIELD_SWITCH_OPTION] = BooleanValue(switch_option);
    }
    
    ArrayOfInteger num_options_arr() {
        return value.getArray()->values[FLOW_STRUCTURE_OPTIONS_FIELD_NUM_OPTIONS_ARR];
    }
    void num_options_arr(ArrayOfInteger num_options_arr) {
        value.getArray()->values[FLOW_STRUCTURE_OPTIONS_FIELD_NUM_OPTIONS_ARR] = num_options_arr.value;
    }
    
    MyEnum my_enum_field() {
        return (MyEnum)value.getArray()->values[FLOW_STRUCTURE_OPTIONS_FIELD_MY_ENUM_FIELD].getInt();
    }
    void my_enum_field(MyEnum my_enum_field) {
        value.getArray()->values[FLOW_STRUCTURE_OPTIONS_FIELD_MY_ENUM_FIELD] = IntegerValue((int)my_enum_field);
    }
};

typedef ArrayOf<OptionsValue, FLOW_ARRAY_OF_STRUCTURE_OPTIONS> ArrayOfOptionsValue;
struct PointValue {
    Value value;
    
    PointValue() {
        value = Value::makeArrayRef(FLOW_STRUCTURE_POINT_NUM_FIELDS, FLOW_STRUCTURE_POINT, 0);
    }
    
    PointValue(Value value) : value(value) {}
    
    operator Value() const { return value; }
    
    operator bool() const { return value.isArray(); }
    
    float x() {
        return value.getArray()->values[FLOW_STRUCTURE_POINT_FIELD_X].getFloat();
    }
    void x(float x) {
        value.getArray()->values[FLOW_STRUCTURE_POINT_FIELD_X] = FloatValue(x);
    }
    
    float y() {
        return value.getArray()->values[FLOW_STRUCTURE_POINT_FIELD_Y].getFloat();
    }
    void y(float y) {
        value.getArray()->values[FLOW_STRUCTURE_POINT_FIELD_Y] = FloatValue(y);
    }
};

typedef ArrayOf<PointValue, FLOW_ARRAY_OF_STRUCTURE_POINT> ArrayOfPointValue;


#endif /*EEZ_LVGL_UI_STRUCTS_H*/
