#ifndef EEZ_LVGL_UI_IMAGES_H
#define EEZ_LVGL_UI_IMAGES_H

#include <lvgl/lvgl.h>

extern const lv_img_dsc_t img_3d_printer_bg;
extern const lv_img_dsc_t img_arrow_down;
extern const lv_img_dsc_t img_arrow_left;
extern const lv_img_dsc_t img_arrow_right;
extern const lv_img_dsc_t img_arrow_up;
extern const lv_img_dsc_t img_btn_main_off;
extern const lv_img_dsc_t img_btn_main_on;
extern const lv_img_dsc_t img_btn_move;
extern const lv_img_dsc_t img_btn_pad_bottom;
extern const lv_img_dsc_t img_btn_pad_top;
extern const lv_img_dsc_t img_btn_print;
extern const lv_img_dsc_t img_btn_print_down;
extern const lv_img_dsc_t img_btn_print_top_off;
extern const lv_img_dsc_t img_btn_print_top_on;
extern const lv_img_dsc_t img_btn_setting;
extern const lv_img_dsc_t img_btn_z_botton;
extern const lv_img_dsc_t img_btn_z_top;
extern const lv_img_dsc_t img_icn_bed;
extern const lv_img_dsc_t img_icn_head;
extern const lv_img_dsc_t img_icn_pause;
extern const lv_img_dsc_t img_icn_pc;
extern const lv_img_dsc_t img_icn_stop;
extern const lv_img_dsc_t img_icn_time_1;
extern const lv_img_dsc_t img_icn_time_2;
extern const lv_img_dsc_t img_icn_usb;
extern const lv_img_dsc_t img_icn_wifi;
extern const lv_img_dsc_t img_print_view_bg;
extern const lv_img_dsc_t img_print_view_front;
extern const lv_img_dsc_t img_roller_bg;

#ifndef EXT_IMG_DESC_T
#define EXT_IMG_DESC_T
typedef struct _ext_img_desc_t {
    const char *name;
    const lv_img_dsc_t *img_dsc;
} ext_img_desc_t;
#endif

extern const ext_img_desc_t images[29];


#endif /*EEZ_LVGL_UI_IMAGES_H*/