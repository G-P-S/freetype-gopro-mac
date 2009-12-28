#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"cairo.h"
#include"cairo-lib.h"


/**
*
*
**/
int _cairo_lib(CAIROlib *lib)
{
	if(lib)
	{
		memset(lib,0,sizeof(CAIROlib));
		lib->create=cairo_create;
		lib->reference=cairo_reference;
		lib->destroy=cairo_destroy;
		lib->get_reference_count=cairo_get_reference_count;
		lib->get_user_data=cairo_get_user_data;
		lib->set_user_data=cairo_set_user_data;
		lib->save=cairo_save;
		lib->restore=cairo_restore;
		lib->push_group=cairo_push_group;
		lib->push_group_with_content=cairo_push_group_with_content;
		lib->pop_group=cairo_pop_group;
		lib->pop_group_to_source=cairo_pop_group_to_source;
		lib->set_operator=cairo_set_operator;
		lib->set_source=cairo_set_source;
		lib->set_source_rgb=cairo_set_source_rgb;
		lib->set_source_rgba=cairo_set_source_rgba;
		lib->set_source_surface=cairo_set_source_surface;
		lib->set_tolerance=cairo_set_tolerance;
		lib->set_antialias=cairo_set_antialias;
		lib->set_line_cap=cairo_set_line_cap;
		lib->set_line_join=cairo_set_line_join;
		lib->set_dash=cairo_set_dash;
		lib->set_miter_limit=cairo_set_miter_limit;
		lib->translate=cairo_translate;
		lib->scale=cairo_scale;
		lib->rotate=cairo_rotate;
		lib->transform=cairo_transform;
		lib->set_matrix=cairo_set_matrix;
		lib->identity_matrix=cairo_identity_matrix;
		lib->user_to_device=cairo_user_to_device;
		lib->user_to_device_distance=cairo_user_to_device_distance;
		lib->device_to_user=cairo_device_to_user;
		lib->device_to_user_distance=cairo_device_to_user_distance;
		lib->new_path=cairo_new_path;
		lib->move_to=cairo_move_to;
		lib->new_sub_path=cairo_new_sub_path;
		lib->line_to=cairo_line_to;
		lib->curve_to=cairo_curve_to;
		lib->arc=cairo_arc;
		lib->arc_negative=cairo_arc_negative;
		lib->rel_move_to=cairo_rel_move_to;
		lib->rel_line_to=cairo_rel_line_to;
		lib->rel_curve_to=cairo_rel_curve_to;
		lib->rectangle=cairo_rectangle;
		lib->close_path=cairo_close_path;
		lib->paint=cairo_paint;
		lib->paint_with_alpha=cairo_paint_with_alpha;
		lib->mask=cairo_mask;
		lib->mask_surface=cairo_mask_surface;
		lib->stroke=cairo_stroke;
		lib->stroke_preserve=cairo_stroke_preserve;
		lib->fill=cairo_fill;
		lib->fill_preserve=cairo_fill_preserve;
		lib->copy_page=cairo_copy_page;
		lib->show_page=cairo_show_page;
		lib->in_stroke=cairo_in_stroke;
		lib->in_fill=cairo_in_fill;
		lib->stroke_extents=cairo_stroke_extents;
		lib->fill_extents=cairo_fill_extents;
		lib->reset_clip=cairo_reset_clip;
		lib->clip=cairo_clip;
		lib->clip_preserve=cairo_clip_preserve;
		lib->clip_extents=cairo_clip_extents;
		lib->copy_clip_rectangle_list=cairo_copy_clip_rectangle_list;
		lib->rectangle_list_destroy=cairo_rectangle_list_destroy;
		lib->font_options_create=cairo_font_options_create;
		lib->font_options_copy=cairo_font_options_copy;
		lib->font_options_destroy=cairo_font_options_destroy;
		lib->font_options_status=cairo_font_options_status;
		lib->font_options_merge=cairo_font_options_merge;
		lib->font_options_equal=cairo_font_options_equal;
		lib->font_options_hash=cairo_font_options_hash;
		lib->font_options_set_antialias=cairo_font_options_set_antialias;
		lib->font_options_get_antialias=cairo_font_options_get_antialias;
		lib->font_options_set_subpixel_order=cairo_font_options_set_subpixel_order;
		lib->font_options_get_subpixel_order=cairo_font_options_get_subpixel_order;
		lib->font_options_set_hint_style=cairo_font_options_set_hint_style;
		lib->font_options_get_hint_style=cairo_font_options_get_hint_style;
		lib->font_options_set_hint_metrics=cairo_font_options_set_hint_metrics;
		lib->font_options_get_hint_metrics=cairo_font_options_get_hint_metrics;
		lib->select_font_face=cairo_select_font_face;
		lib->set_font_size=cairo_set_font_size;
		lib->set_font_matrix=cairo_set_font_matrix;
		lib->get_font_matrix=cairo_get_font_matrix;
		lib->set_font_options=cairo_set_font_options;
		lib->get_font_options=cairo_get_font_options;
		lib->set_font_face=cairo_set_font_face;
		lib->get_font_face=cairo_get_font_face;
		lib->set_scaled_font=cairo_set_scaled_font;
		lib->get_scaled_font=cairo_get_scaled_font;
		lib->show_text=cairo_show_text;
		lib->show_glyphs=cairo_show_glyphs;
		lib->text_path=cairo_text_path;
		lib->glyph_path=cairo_glyph_path;
		lib->text_extents=cairo_text_extents;
		lib->glyph_extents=cairo_glyph_extents;
		lib->font_extents=cairo_font_extents;
		lib->font_face_reference=cairo_font_face_reference;
		lib->font_face_destroy=cairo_font_face_destroy;
		lib->font_face_get_reference_count=cairo_font_face_get_reference_count;
		lib->font_face_status=cairo_font_face_status;
		lib->font_face_get_type=cairo_font_face_get_type;
		lib->font_face_get_user_data=cairo_font_face_get_user_data;
		lib->font_face_set_user_data=cairo_font_face_set_user_data;
		lib->scaled_font_create=cairo_scaled_font_create;
		lib->scaled_font_reference=cairo_scaled_font_reference;
		lib->scaled_font_destroy=cairo_scaled_font_destroy;
		lib->scaled_font_get_reference_count=cairo_scaled_font_get_reference_count;
		lib->scaled_font_status=cairo_scaled_font_status;
		lib->scaled_font_get_type=cairo_scaled_font_get_type;
		lib->scaled_font_get_user_data=cairo_scaled_font_get_user_data;
		lib->scaled_font_set_user_data=cairo_scaled_font_set_user_data;
		lib->scaled_font_extents=cairo_scaled_font_extents;
		lib->scaled_font_text_extents=cairo_scaled_font_text_extents;
		lib->scaled_font_glyph_extents=cairo_scaled_font_glyph_extents;
		lib->scaled_font_get_font_face=cairo_scaled_font_get_font_face;
		lib->scaled_font_get_font_matrix=cairo_scaled_font_get_font_matrix;
		lib->scaled_font_get_ctm=cairo_scaled_font_get_ctm;
		lib->scaled_font_get_font_options=cairo_scaled_font_get_font_options;
		lib->get_operator=cairo_get_operator;
		lib->get_source=cairo_get_source;
		lib->get_tolerance=cairo_get_tolerance;
		lib->get_antialias=cairo_get_antialias;
		lib->get_current_point=cairo_get_current_point;
		lib->get_fill_rule=cairo_get_fill_rule;
		lib->get_line_width=cairo_get_line_width;
		lib->get_line_cap=cairo_get_line_cap;
		lib->get_line_join=cairo_get_line_join;
		lib->get_miter_limit=cairo_get_miter_limit;
		lib->get_dash_count=cairo_get_dash_count;
		lib->get_dash=cairo_get_dash;
		lib->get_matrix=cairo_get_matrix;
		lib->get_target=cairo_get_target;
		lib->get_group_target=cairo_get_group_target;
		lib->copy_path=cairo_copy_path;
		lib->copy_path_flat=cairo_copy_path_flat;
		lib->append_path=cairo_append_path;
		lib->path_destroy=cairo_path_destroy;
		lib->status=cairo_status;
		lib->status_to_string=cairo_status_to_string;
		lib->surface_create_similar=cairo_surface_create_similar;
		lib->surface_reference=cairo_surface_reference;
		lib->surface_finish=cairo_surface_finish;
		lib->surface_destroy=cairo_surface_destroy;
		lib->surface_get_reference_count=cairo_surface_get_reference_count;
		lib->surface_status=cairo_surface_status;
		lib->surface_get_type=cairo_surface_get_type;
		lib->surface_get_content=cairo_surface_get_content;
		lib->surface_get_user_data=cairo_surface_get_user_data;
		lib->surface_set_user_data=cairo_surface_set_user_data;
		lib->surface_get_font_options=cairo_surface_get_font_options;
		lib->surface_flush=cairo_surface_flush;
		lib->surface_mark_dirty=cairo_surface_mark_dirty;
		lib->surface_mark_dirty_rectangle=cairo_surface_mark_dirty_rectangle;
		lib->surface_set_device_offset=cairo_surface_set_device_offset;
		lib->surface_get_device_offset=cairo_surface_get_device_offset;
		lib->surface_set_fallback_resolution=cairo_surface_set_fallback_resolution;
		lib->image_surface_create=cairo_image_surface_create;
		lib->image_surface_create_for_data=cairo_image_surface_create_for_data;
		lib->image_surface_get_data=cairo_image_surface_get_data;
		lib->image_surface_get_format=cairo_image_surface_get_format;
		lib->image_surface_get_width=cairo_image_surface_get_width;
		lib->image_surface_get_height=cairo_image_surface_get_height;
		lib->image_surface_get_stride=cairo_image_surface_get_stride;
		lib->pattern_create_rgb=cairo_pattern_create_rgb;
		lib->pattern_create_rgba=cairo_pattern_create_rgba;
		lib->pattern_create_for_surface=cairo_pattern_create_for_surface;
		lib->pattern_create_linear=cairo_pattern_create_linear;
		lib->pattern_create_radial=cairo_pattern_create_radial;
		lib->pattern_reference=cairo_pattern_reference;
		lib->pattern_destroy=cairo_pattern_destroy;
		lib->pattern_get_reference_count=cairo_pattern_get_reference_count;
		lib->pattern_status=cairo_pattern_status;
		lib->pattern_get_user_data=cairo_pattern_get_user_data;
		lib->pattern_set_user_data=cairo_pattern_set_user_data;
		lib->pattern_get_type=cairo_pattern_get_type;
		lib->pattern_add_color_stop_rgb=cairo_pattern_add_color_stop_rgb;
		lib->pattern_add_color_stop_rgba=cairo_pattern_add_color_stop_rgba;
		lib->pattern_set_matrix=cairo_pattern_set_matrix;
		lib->pattern_get_matrix=cairo_pattern_get_matrix;
		lib->pattern_set_extend=cairo_pattern_set_extend;
		lib->pattern_get_extend=cairo_pattern_get_extend;
		lib->pattern_set_filter=cairo_pattern_set_filter;
		lib->pattern_get_filter=cairo_pattern_get_filter;
		lib->pattern_get_rgba=cairo_pattern_get_rgba;
		lib->pattern_get_surface=cairo_pattern_get_surface;
		lib->pattern_get_color_stop_rgba=cairo_pattern_get_color_stop_rgba;
		lib->pattern_get_color_stop_count=cairo_pattern_get_color_stop_count;
		lib->pattern_get_linear_points=cairo_pattern_get_linear_points;
		lib->pattern_get_radial_circles=cairo_pattern_get_radial_circles;
		lib->matrix_init=cairo_matrix_init;
		lib->matrix_init_identity=cairo_matrix_init_identity;
		lib->matrix_init_translate=cairo_matrix_init_translate;
		lib->matrix_init_scale=cairo_matrix_init_scale;
		lib->matrix_init_rotate=cairo_matrix_init_rotate;
		lib->matrix_translate=cairo_matrix_translate;
		lib->matrix_scale=cairo_matrix_scale;
		lib->matrix_rotate=cairo_matrix_rotate;
		lib->matrix_invert=cairo_matrix_invert;
		lib->matrix_multiply=cairo_matrix_multiply;
		lib->matrix_transform_distance=cairo_matrix_transform_distance;
		lib->matrix_transform_point=cairo_matrix_transform_point;
		lib->debug_reset_static_data=cairo_debug_reset_static_data;

		lib->set_line_width=cairo_set_line_width;
		lib->surface_write_to_png=cairo_surface_write_to_png;
		lib->surface_write_to_png_stream=cairo_surface_write_to_png_stream;
		lib->image_surface_create_from_png=cairo_image_surface_create_from_png;
		lib->image_surface_create_from_png_stream=cairo_image_surface_create_from_png_stream;

		return 1;
	}
	return 0;
}