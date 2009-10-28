#ifndef CAIRO_LIB_H
#define CAIRO_LIB_H

#include "cairo.h"

typedef struct _cairo_lib {
cairo_t* (*create)(cairo_surface_t *target);
cairo_t* (*reference) (cairo_t *cr);
void (*destroy) (cairo_t *cr);
unsigned int (*get_reference_count) (cairo_t *cr);
void* (*get_user_data) (cairo_t *cr, const cairo_user_data_key_t *key);
cairo_status_t (*set_user_data) (cairo_t *cr, const cairo_user_data_key_t *key, void *user_data, cairo_destroy_func_t destroy);
void (*save) (cairo_t *cr);
void (*restore) (cairo_t *cr);
void (*push_group) (cairo_t *cr);
void (*push_group_with_content) (cairo_t *cr, cairo_content_t content);
cairo_pattern_t* (*pop_group) (cairo_t *cr);
void (*pop_group_to_source) (cairo_t *cr);
void (*set_operator) (cairo_t *cr, cairo_operator_t op);
void (*set_source) (cairo_t *cr, cairo_pattern_t *source);
void (*set_source_rgb) (cairo_t *cr, double red, double green, double blue);
void (*set_source_rgba) (cairo_t *cr, double red, double green, double blue, double alpha);
void (*set_source_surface) (cairo_t *cr, cairo_surface_t *surface, double x, double y);
void (*set_tolerance) (cairo_t *cr, double tolerance);
void (*set_antialias) (cairo_t *cr, cairo_antialias_t antialias);
void (*set_line_cap) (cairo_t *cr, cairo_line_cap_t line_cap); 
void (*set_line_join) (cairo_t *cr, cairo_line_join_t line_join); 
void (*set_dash) (cairo_t *cr, const double *dashes, int num_dashes, double offset);
void (*set_miter_limit) (cairo_t *cr, double limit);
void (*translate) (cairo_t *cr, double tx, double ty);
void (*scale) (cairo_t *cr, double sx, double sy);
void (*rotate) (cairo_t *cr, double angle);
void (*transform) (cairo_t *cr, const cairo_matrix_t *matrix);
void (*set_matrix) (cairo_t *cr, const cairo_matrix_t *matrix);
void (*identity_matrix) (cairo_t *cr);
void (*user_to_device) (cairo_t *cr, double *x, double *y);
void (*user_to_device_distance) (cairo_t *cr, double *dx, double *dy);
void (*device_to_user) (cairo_t *cr, double *x, double *y);
void (*device_to_user_distance) (cairo_t *cr, double *dx, double *dy);
void (*new_path) (cairo_t *cr);
void (*move_to) (cairo_t *cr, double x, double y);
void (*new_sub_path) (cairo_t *cr);
void (*line_to) (cairo_t *cr, double x, double y);
void (*curve_to) (cairo_t *cr, double x1, double y1, double x2, double y2, double x3, double y3);
void (*arc) (cairo_t *cr, double xc, double yc, double radius, double angle1, double angle2);
void (*arc_negative) (cairo_t *cr, double xc, double yc, double radius, double angle1, double angle2);
void (*rel_move_to) (cairo_t *cr, double dx, double dy);
void (*rel_line_to) (cairo_t *cr, double dx, double dy);
void (*rel_curve_to) (cairo_t *cr, double dx1, double dy1, double dx2, double dy2, double dx3, double dy3);
void (*rectangle) (cairo_t *cr, double x, double y, double width, double height);
void (*close_path) (cairo_t *cr);
void (*paint) (cairo_t *cr);
void (*paint_with_alpha) (cairo_t *cr, double alpha);
void (*mask) (cairo_t *cr, cairo_pattern_t *pattern);
void (*mask_surface) (cairo_t *cr, cairo_surface_t *surface, double surface_x, double surface_y);
void (*stroke) (cairo_t *cr);
void (*stroke_preserve) (cairo_t *cr);
void (*fill) (cairo_t *cr);
void (*fill_preserve) (cairo_t *cr);
void (*copy_page) (cairo_t *cr);
void (*show_page) (cairo_t *cr);
cairo_bool_t (*in_stroke) (cairo_t *cr, double x, double y);
cairo_bool_t (*in_fill) (cairo_t *cr, double x, double y);
void (*stroke_extents) (cairo_t *cr, double *x1, double *y1, double *x2, double *y2);
void (*fill_extents) (cairo_t *cr, double *x1, double *y1, double *x2, double *y2);
void (*reset_clip) (cairo_t *cr);
void (*clip) (cairo_t *cr);
void (*clip_preserve) (cairo_t *cr);
void (*clip_extents) (cairo_t *cr, double *x1, double *y1, double *x2, double *y2);
cairo_rectangle_list_t* (*copy_clip_rectangle_list) (cairo_t *cr);
void (*rectangle_list_destroy) (cairo_rectangle_list_t *rectangle_list);
cairo_font_options_t* (*font_options_create) (void);
cairo_font_options_t* (*font_options_copy) (const cairo_font_options_t *original);
void (*font_options_destroy) (cairo_font_options_t *options);
cairo_status_t (*font_options_status) (cairo_font_options_t *options);
void (*font_options_merge) (cairo_font_options_t *options, const cairo_font_options_t *other);
cairo_bool_t (*font_options_equal) (const cairo_font_options_t *options, const cairo_font_options_t *other);
unsigned long (*font_options_hash) (const cairo_font_options_t *options);
void (*font_options_set_antialias) (cairo_font_options_t *options, cairo_antialias_t antialias);
cairo_antialias_t (*font_options_get_antialias) (const cairo_font_options_t *options);
void (*font_options_set_subpixel_order) (cairo_font_options_t *options, cairo_subpixel_order_t subpixel_order);
cairo_subpixel_order_t (*font_options_get_subpixel_order) (const cairo_font_options_t *options);
void (*font_options_set_hint_style) (cairo_font_options_t *options, cairo_hint_style_t hint_style);
cairo_hint_style_t (*font_options_get_hint_style) (const cairo_font_options_t *options);
void (*font_options_set_hint_metrics) (cairo_font_options_t *options, cairo_hint_metrics_t hint_metrics);
cairo_hint_metrics_t (*font_options_get_hint_metrics) (const cairo_font_options_t *options);
void (*select_font_face) (cairo_t *cr, const char *family, cairo_font_slant_t slant, cairo_font_weight_t weight);
void (*set_font_size) (cairo_t *cr, double size);
void (*set_font_matrix) (cairo_t *cr, const cairo_matrix_t *matrix);
void (*get_font_matrix) (cairo_t *cr, cairo_matrix_t *matrix);
void (*set_font_options) (cairo_t *cr, const cairo_font_options_t *options);
void (*get_font_options) (cairo_t *cr, cairo_font_options_t *options);
void (*set_font_face) (cairo_t *cr, cairo_font_face_t *font_face);
cairo_font_face_t* (*get_font_face) (cairo_t *cr);
void (*set_scaled_font) (cairo_t *cr, const cairo_scaled_font_t *scaled_font);
cairo_scaled_font_t* (*get_scaled_font) (cairo_t *cr);
void (*show_text) (cairo_t *cr, const char *utf8);
void (*show_glyphs) (cairo_t *cr, const cairo_glyph_t *glyphs, int num_glyphs);
void (*text_path) (cairo_t *cr, const char *utf8);
void (*glyph_path) (cairo_t *cr, const cairo_glyph_t *glyphs, int num_glyphs);
void (*text_extents) (cairo_t *cr, const char *utf8, cairo_text_extents_t *extents);
void (*glyph_extents) (cairo_t *cr, const cairo_glyph_t *glyphs, int num_glyphs, cairo_text_extents_t *extents);
void (*font_extents) (cairo_t *cr, cairo_font_extents_t *extents);
cairo_font_face_t* (*font_face_reference) (cairo_font_face_t *font_face);
void (*font_face_destroy) (cairo_font_face_t *font_face);
unsigned int (*font_face_get_reference_count) (cairo_font_face_t *font_face);
cairo_status_t (*font_face_status) (cairo_font_face_t *font_face);
cairo_font_type_t (*font_face_get_type) (cairo_font_face_t *font_face);
void* (*font_face_get_user_data) (cairo_font_face_t *font_face, const cairo_user_data_key_t *key);
cairo_status_t (*font_face_set_user_data) (cairo_font_face_t *font_face, const cairo_user_data_key_t *key, void *user_data, cairo_destroy_func_t destroy);
cairo_scaled_font_t* (*scaled_font_create) (cairo_font_face_t *font_face, const cairo_matrix_t *font_matrix, const cairo_matrix_t *ctm, const cairo_font_options_t *options);
cairo_scaled_font_t* (*scaled_font_reference) (cairo_scaled_font_t *scaled_font);
void (*scaled_font_destroy) (cairo_scaled_font_t *scaled_font);
unsigned int (*scaled_font_get_reference_count) (cairo_scaled_font_t *scaled_font);
cairo_status_t (*scaled_font_status) (cairo_scaled_font_t *scaled_font);
cairo_font_type_t (*scaled_font_get_type) (cairo_scaled_font_t *scaled_font);
void* (*scaled_font_get_user_data) (cairo_scaled_font_t *scaled_font, const cairo_user_data_key_t *key);
cairo_status_t (*scaled_font_set_user_data) (cairo_scaled_font_t *scaled_font, const cairo_user_data_key_t *key, void *user_data, cairo_destroy_func_t destroy);
void (*scaled_font_extents) (cairo_scaled_font_t *scaled_font, cairo_font_extents_t *extents);
void (*scaled_font_text_extents) (cairo_scaled_font_t *scaled_font, const char *utf8, cairo_text_extents_t *extents); 
void (*scaled_font_glyph_extents) (cairo_scaled_font_t *scaled_font, const cairo_glyph_t *glyphs, int num_glyphs, cairo_text_extents_t *extents);
cairo_font_face_t* (*scaled_font_get_font_face) (cairo_scaled_font_t *scaled_font);
void (*scaled_font_get_font_matrix) (cairo_scaled_font_t *scaled_font, cairo_matrix_t *font_matrix);
void (*scaled_font_get_ctm) (cairo_scaled_font_t *scaled_font, cairo_matrix_t *ctm);
void (*scaled_font_get_font_options) (cairo_scaled_font_t *scaled_font, cairo_font_options_t *options);
cairo_operator_t (*get_operator) (cairo_t *cr);
cairo_pattern_t* (*get_source) (cairo_t *cr);
double (*get_tolerance) (cairo_t *cr);
cairo_antialias_t (*get_antialias) (cairo_t *cr);
void (*get_current_point) (cairo_t *cr, double *x, double *y);
cairo_fill_rule_t (*get_fill_rule) (cairo_t *cr);
double (*get_line_width) (cairo_t *cr);
cairo_line_cap_t (*get_line_cap) (cairo_t *cr);
cairo_line_join_t (*get_line_join) (cairo_t *cr);
double (*get_miter_limit) (cairo_t *cr);
int (*get_dash_count) (cairo_t *cr);
void (*get_dash) (cairo_t *cr, double *dashes, double *offset);
void (*get_matrix) (cairo_t *cr, cairo_matrix_t *matrix);
cairo_surface_t* (*get_target) (cairo_t *cr);
cairo_surface_t* (*get_group_target) (cairo_t *cr);
cairo_path_t* (*copy_path) (cairo_t *cr);
cairo_path_t* (*copy_path_flat) (cairo_t *cr);
void (*append_path) (cairo_t *cr, const cairo_path_t *path);
void (*path_destroy) (cairo_path_t *path);
cairo_status_t (*status) (cairo_t *cr);
const char* (*status_to_string) (cairo_status_t status);
cairo_surface_t* (*surface_create_similar) (cairo_surface_t *other, cairo_content_t content, int width, int height);
cairo_surface_t* (*surface_reference) (cairo_surface_t *surface);
void (*surface_finish) (cairo_surface_t *surface);
void (*surface_destroy) (cairo_surface_t *surface);
unsigned int (*surface_get_reference_count) (cairo_surface_t *surface);
cairo_status_t (*surface_status) (cairo_surface_t *surface);
cairo_surface_type_t (*surface_get_type) (cairo_surface_t *surface);
cairo_content_t (*surface_get_content) (cairo_surface_t *surface);
void* (*surface_get_user_data) (cairo_surface_t *surface, const cairo_user_data_key_t *key);
cairo_status_t (*surface_set_user_data) (cairo_surface_t *surface, const cairo_user_data_key_t *key, void *user_data, cairo_destroy_func_t destroy);
void (*surface_get_font_options) (cairo_surface_t *surface, cairo_font_options_t *options);
void (*surface_flush) (cairo_surface_t *surface);
void (*surface_mark_dirty) (cairo_surface_t *surface);
void (*surface_mark_dirty_rectangle) (cairo_surface_t *surface, int x, int y, int width, int height);
void (*surface_set_device_offset) (cairo_surface_t *surface, double x_offset, double y_offset);
void (*surface_get_device_offset) (cairo_surface_t *surface, double *x_offset, double *y_offset);
void (*surface_set_fallback_resolution) (cairo_surface_t *surface, double x_pixels_per_inch, double y_pixels_per_inch);
cairo_surface_t* (*image_surface_create) (cairo_format_t format, int width, int height);
cairo_surface_t* (*image_surface_create_for_data) (unsigned char *data, cairo_format_t format, int width, int height, int stride);
unsigned char* (*image_surface_get_data) (cairo_surface_t *surface);
cairo_format_t (*image_surface_get_format) (cairo_surface_t *surface);
int (*image_surface_get_width) (cairo_surface_t *surface);
int (*image_surface_get_height) (cairo_surface_t *surface);
int (*image_surface_get_stride) (cairo_surface_t *surface);
cairo_pattern_t* (*pattern_create_rgb) (double red, double green, double blue);
cairo_pattern_t* (*pattern_create_rgba) (double red, double green, double blue, double alpha); 
cairo_pattern_t* (*pattern_create_for_surface) (cairo_surface_t *surface);
cairo_pattern_t* (*pattern_create_linear) (double x0, double y0, double x1, double y1); 
cairo_pattern_t* (*pattern_create_radial) (double cx0, double cy0, double radius0, double cx1, double cy1, double radius1); 
cairo_pattern_t* (*pattern_reference) (cairo_pattern_t *pattern);
void (*pattern_destroy) (cairo_pattern_t *pattern);
unsigned int (*pattern_get_reference_count) (cairo_pattern_t *pattern);
cairo_status_t (*pattern_status) (cairo_pattern_t *pattern);
void* (*pattern_get_user_data) (cairo_pattern_t *pattern, const cairo_user_data_key_t *key); 
cairo_status_t (*pattern_set_user_data) (cairo_pattern_t *pattern, const cairo_user_data_key_t *key, void *user_data, cairo_destroy_func_t destroy);
cairo_pattern_type_t (*pattern_get_type) (cairo_pattern_t *pattern);
void (*pattern_add_color_stop_rgb) (cairo_pattern_t *pattern, double offset, double red, double green, double blue);
void (*pattern_add_color_stop_rgba) (cairo_pattern_t *pattern, double offset, double red, double green, double blue, double alpha);
void (*pattern_set_matrix) (cairo_pattern_t *pattern, const cairo_matrix_t *matrix);
void (*pattern_get_matrix) (cairo_pattern_t *pattern, cairo_matrix_t *matrix);
void (*pattern_set_extend) (cairo_pattern_t *pattern, cairo_extend_t extend);
cairo_extend_t (*pattern_get_extend) (cairo_pattern_t *pattern);
void (*pattern_set_filter) (cairo_pattern_t *pattern, cairo_filter_t filter);
cairo_filter_t (*pattern_get_filter) (cairo_pattern_t *pattern);
cairo_status_t (*pattern_get_rgba) (cairo_pattern_t *pattern, double *red, double *green, double *blue, double *alpha);
cairo_status_t (*pattern_get_surface) (cairo_pattern_t *pattern, cairo_surface_t **surface);
cairo_status_t (*pattern_get_color_stop_rgba) (cairo_pattern_t *pattern, int index, double *offset, double *red, double *green, double *blue, double *alpha);
cairo_status_t (*pattern_get_color_stop_count) (cairo_pattern_t *pattern, int *count);
cairo_status_t (*pattern_get_linear_points) (cairo_pattern_t *pattern, double *x0, double *y0, double *x1, double *y1);
cairo_status_t (*pattern_get_radial_circles) (cairo_pattern_t *pattern, double *x0, double *y0, double *r0, double *x1, double *y1, double *r1);
void (*matrix_init) (cairo_matrix_t *matrix, double xx, double yx, double xy, double yy, double x0, double y0);
void (*matrix_init_identity) (cairo_matrix_t *matrix);
void (*matrix_init_translate) (cairo_matrix_t *matrix, double tx, double ty);
void (*matrix_init_scale) (cairo_matrix_t *matrix, double sx, double sy);
void (*matrix_init_rotate) (cairo_matrix_t *matrix, double radians);
void (*matrix_translate) (cairo_matrix_t *matrix, double tx, double ty);
void (*matrix_scale) (cairo_matrix_t *matrix, double sx, double sy);
void (*matrix_rotate) (cairo_matrix_t *matrix, double radians);
cairo_status_t (*matrix_invert) (cairo_matrix_t *matrix);
void (*matrix_multiply) (cairo_matrix_t *result, const cairo_matrix_t *a, const cairo_matrix_t *b);
void (*matrix_transform_distance) (const cairo_matrix_t *matrix, double *dx, double *dy); 
void (*matrix_transform_point) (const cairo_matrix_t *matrix, double *x, double *y);
void (*debug_reset_static_data) (void);
void (*set_line_width) (cairo_t *cr, double width);
void (*surface_write_to_png) (cairo_surface_t *surface, const char *filename);
cairo_status_t (*surface_write_to_png_stream) (cairo_surface_t *surface, cairo_write_func_t write_func, void *closure);
cairo_surface_t* (*image_surface_create_from_png) (const char *filename);
cairo_surface_t* (*image_surface_create_from_png_stream) (cairo_read_func_t read_func, void *closure);

} CAIROlib;

cairo_public int _cairo_lib (CAIROlib *lib);

#endif