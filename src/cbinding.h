/*
 * Automatically generated, do not edit this file directly
 */

#ifndef __MOONLIGHT_C_BINDING_H__
#define __MOONLIGHT_C_BINDING_H__

#include <glib.h>
// This should probably be changed to somehow not include c++ headers.
#include "animation.h"
#include "brush.h"
#include "canvas.h"
#include "clock.h"
#include "collection.h"
#include "contentcontrol.h"
#include "control.h"
#include "dependencyobject.h"
#include "dependencyproperty.h"
#include "deployment.h"
#include "downloader.h"
#include "eventargs.h"
#include "frameworkelement.h"
#include "geometry.h"
#include "grid.h"
#include "media.h"
#include "panel.h"
#include "shape.h"
#include "stylus.h"
#include "template.h"
#include "text.h"
#include "transform.h"
#include "trigger.h"
#include "type.h"
#include "uielement.h"
#include "usercontrol.h"

G_BEGIN_DECLS

#if SL_2_0
/**
 * Application
 **/
Application *application_new (void);
#endif

/**
 * ArcSegment
 **/
ArcSegment *arc_segment_new (void);

#if SL_2_0
/**
 * AssemblyPart
 **/
AssemblyPart *assembly_part_new (void);
#endif

#if SL_2_0
/**
 * AssemblyPartCollection
 **/
AssemblyPartCollection *assembly_part_collection_new (void);
#endif

/**
 * BeginStoryboard
 **/
BeginStoryboard *begin_storyboard_new (void);

/**
 * BezierSegment
 **/
BezierSegment *bezier_segment_new (void);

/**
 * Brush
 **/
Brush *brush_new (void);

/**
 * Canvas
 **/
Canvas *canvas_new (void);

/**
 * ColorAnimation
 **/
ColorAnimation *color_animation_new (void);

/**
 * ColorAnimationUsingKeyFrames
 **/
ColorAnimationUsingKeyFrames *color_animation_using_key_frames_new (void);

/**
 * ColorKeyFrame
 **/
ColorKeyFrame *color_key_frame_new (void);

/**
 * ColorKeyFrameCollection
 **/
ColorKeyFrameCollection *color_key_frame_collection_new (void);

#if SL_2_0
/**
 * ColumnDefinition
 **/
ColumnDefinition *column_definition_new (void);
#endif

#if SL_2_0
/**
 * ColumnDefinitionCollection
 **/
ColumnDefinitionCollection *column_definition_collection_new (void);
#endif

#if SL_2_0
/**
 * ContentControl
 **/
ContentControl *content_control_new (void);
#endif

#if SL_2_0
/**
 * Control
 **/
Control *control_new (void);
#endif

#if SL_2_0
/**
 * ControlTemplate
 **/
ControlTemplate *control_template_new (void);
#endif

#if SL_2_0
/**
 * DependencyObject
 **/
/* @GeneratePInvoke */
Value *dependency_object_get_default_value_with_error (DependencyObject *instance, Types *additional_types, DependencyProperty *property, MoonError *error);
#endif

/* @GeneratePInvoke */
const char *dependency_object_get_name (DependencyObject *instance);

#if SL_2_0
/* @GeneratePInvoke */
Value *dependency_object_get_value_no_default_with_error (DependencyObject *instance, Types *additional_types, DependencyProperty *property, MoonError *error);
#endif

#if SL_2_0
/* @GeneratePInvoke */
Value *dependency_object_get_value_with_error (DependencyObject *instance, Types *additional_types, Type::Kind whatami, DependencyProperty *property, MoonError *error);
#endif

/**
 * DependencyObjectCollection
 **/
DependencyObjectCollection *dependency_object_collection_new (void);

/**
 * DependencyProperty
 **/
/* @GeneratePInvoke */
DependencyProperty *dependency_property_get_dependency_property (Type::Kind type, const char *name);

/* @GeneratePInvoke */
const char *dependency_property_get_name (DependencyProperty *instance);

/* @GeneratePInvoke */
Type::Kind dependency_property_get_property_type (DependencyProperty *instance);

/* @GeneratePInvoke */
bool dependency_property_is_nullable (DependencyProperty *instance);

DependencyProperty *dependency_property_register (Type::Kind type, const char *name, Value *default_value);

#if SL_2_0
/* @GeneratePInvoke */
DependencyProperty *dependency_property_register_full (Types *additional_types, Type::Kind type, const char *name, Value *default_value, Type::Kind vtype, bool attached, bool read_only, bool always_change, NativePropertyChangedHandler *changed_callback);
#endif

#if SL_2_0
/* @GeneratePInvoke */
DependencyProperty *dependency_property_register_managed_property (Types *additional_types, const char *name, Type::Kind property_type, Type::Kind owner_type, bool attached, NativePropertyChangedHandler *callback);
#endif

#if SL_2_0
/**
 * Deployment
 **/
Deployment *deployment_new (void);
#endif

/**
 * DiscreteColorKeyFrame
 **/
DiscreteColorKeyFrame *discrete_color_key_frame_new (void);

/**
 * DiscreteDoubleKeyFrame
 **/
DiscreteDoubleKeyFrame *discrete_double_key_frame_new (void);

/**
 * DiscretePointKeyFrame
 **/
DiscretePointKeyFrame *discrete_point_key_frame_new (void);

/**
 * DoubleAnimation
 **/
DoubleAnimation *double_animation_new (void);

/**
 * DoubleAnimationUsingKeyFrames
 **/
DoubleAnimationUsingKeyFrames *double_animation_using_key_frames_new (void);

/**
 * DoubleCollection
 **/
DoubleCollection *double_collection_new (void);

/**
 * DoubleKeyFrame
 **/
DoubleKeyFrame *double_key_frame_new (void);

/**
 * DoubleKeyFrameCollection
 **/
DoubleKeyFrameCollection *double_key_frame_collection_new (void);

/**
 * Downloader
 **/
Downloader *downloader_new (void);

/**
 * DrawingAttributes
 **/
DrawingAttributes *drawing_attributes_new (void);

/**
 * Ellipse
 **/
Ellipse *ellipse_new (void);

/**
 * EllipseGeometry
 **/
EllipseGeometry *ellipse_geometry_new (void);

/**
 * EventTrigger
 **/
EventTrigger *event_trigger_new (void);

/**
 * FrameworkElement
 **/
FrameworkElement *framework_element_new (void);

#if SL_2_0
/**
 * FrameworkTemplate
 **/
FrameworkTemplate *framework_template_new (void);
#endif

/**
 * GeneralTransform
 **/
GeneralTransform *general_transform_new (void);

/**
 * GeometryCollection
 **/
GeometryCollection *geometry_collection_new (void);

/**
 * GeometryGroup
 **/
GeometryGroup *geometry_group_new (void);

/**
 * Glyphs
 **/
Glyphs *glyphs_new (void);

/**
 * GradientBrush
 **/
GradientBrush *gradient_brush_new (void);

/**
 * GradientStop
 **/
GradientStop *gradient_stop_new (void);

/**
 * GradientStopCollection
 **/
GradientStopCollection *gradient_stop_collection_new (void);

#if SL_2_0
/**
 * Grid
 **/
Grid *grid_new (void);
#endif

/**
 * Image
 **/
Image *image_new (void);

/**
 * ImageBrush
 **/
ImageBrush *image_brush_new (void);

/**
 * InkPresenter
 **/
InkPresenter *ink_presenter_new (void);

/**
 * Inline
 **/
Inline *inline_new (void);

/**
 * Inlines
 **/
Inlines *inlines_new (void);

/**
 * KeyFrame
 **/
KeyFrame *key_frame_new (void);

/**
 * KeyFrameCollection
 **/
KeyFrameCollection *key_frame_collection_new (void);

/**
 * KeySpline
 **/
KeySpline *key_spline_new (void);

/**
 * Line
 **/
Line *line_new (void);

/**
 * LinearColorKeyFrame
 **/
LinearColorKeyFrame *linear_color_key_frame_new (void);

/**
 * LinearDoubleKeyFrame
 **/
LinearDoubleKeyFrame *linear_double_key_frame_new (void);

/**
 * LinearGradientBrush
 **/
LinearGradientBrush *linear_gradient_brush_new (void);

/**
 * LinearPointKeyFrame
 **/
LinearPointKeyFrame *linear_point_key_frame_new (void);

/**
 * LineBreak
 **/
LineBreak *line_break_new (void);

/**
 * LineGeometry
 **/
LineGeometry *line_geometry_new (void);

/**
 * LineSegment
 **/
LineSegment *line_segment_new (void);

/**
 * Matrix
 **/
Matrix *matrix_new (void);

/**
 * MatrixTransform
 **/
MatrixTransform *matrix_transform_new (void);

/**
 * MediaAttribute
 **/
MediaAttribute *media_attribute_new (void);

/**
 * MediaAttributeCollection
 **/
MediaAttributeCollection *media_attribute_collection_new (void);

/**
 * MediaElement
 **/
MediaElement *media_element_new (void);

/**
 * MouseEventArgs
 **/
MouseEventArgs *mouse_event_args_new (void);

/**
 * Panel
 **/
Panel *panel_new (void);

/**
 * ParallelTimeline
 **/
ParallelTimeline *parallel_timeline_new (void);

/**
 * Path
 **/
Path *path_new (void);

/**
 * PathFigure
 **/
PathFigure *path_figure_new (void);

/**
 * PathFigureCollection
 **/
PathFigureCollection *path_figure_collection_new (void);

/**
 * PathGeometry
 **/
PathGeometry *path_geometry_new (void);

/**
 * PathSegmentCollection
 **/
PathSegmentCollection *path_segment_collection_new (void);

/**
 * PointAnimation
 **/
PointAnimation *point_animation_new (void);

/**
 * PointAnimationUsingKeyFrames
 **/
PointAnimationUsingKeyFrames *point_animation_using_key_frames_new (void);

/**
 * PointCollection
 **/
PointCollection *point_collection_new (void);

/**
 * PointKeyFrame
 **/
PointKeyFrame *point_key_frame_new (void);

/**
 * PointKeyFrameCollection
 **/
PointKeyFrameCollection *point_key_frame_collection_new (void);

/**
 * PolyBezierSegment
 **/
PolyBezierSegment *poly_bezier_segment_new (void);

/**
 * Polygon
 **/
Polygon *polygon_new (void);

/**
 * Polyline
 **/
Polyline *polyline_new (void);

/**
 * PolyLineSegment
 **/
PolyLineSegment *poly_line_segment_new (void);

/**
 * PolyQuadraticBezierSegment
 **/
PolyQuadraticBezierSegment *poly_quadratic_bezier_segment_new (void);

/**
 * QuadraticBezierSegment
 **/
QuadraticBezierSegment *quadratic_bezier_segment_new (void);

/**
 * RadialGradientBrush
 **/
RadialGradientBrush *radial_gradient_brush_new (void);

/**
 * Rectangle
 **/
Rectangle *rectangle_new (void);

/**
 * RectangleGeometry
 **/
RectangleGeometry *rectangle_geometry_new (void);

/**
 * ResourceDictionary
 **/
ResourceDictionary *resource_dictionary_new (void);

/**
 * RotateTransform
 **/
RotateTransform *rotate_transform_new (void);

/**
 * RoutedEventArgs
 **/
RoutedEventArgs *routed_event_args_new (void);

#if SL_2_0
/**
 * RowDefinition
 **/
RowDefinition *row_definition_new (void);
#endif

#if SL_2_0
/**
 * RowDefinitionCollection
 **/
RowDefinitionCollection *row_definition_collection_new (void);
#endif

/**
 * Run
 **/
Run *run_new (void);

/**
 * ScaleTransform
 **/
ScaleTransform *scale_transform_new (void);

/**
 * SkewTransform
 **/
SkewTransform *skew_transform_new (void);

/**
 * SolidColorBrush
 **/
SolidColorBrush *solid_color_brush_new (void);

/**
 * SplineColorKeyFrame
 **/
SplineColorKeyFrame *spline_color_key_frame_new (void);

/**
 * SplineDoubleKeyFrame
 **/
SplineDoubleKeyFrame *spline_double_key_frame_new (void);

/**
 * SplinePointKeyFrame
 **/
SplinePointKeyFrame *spline_point_key_frame_new (void);

/**
 * Storyboard
 **/
Storyboard *storyboard_new (void);

/**
 * Stroke
 **/
Stroke *stroke_new (void);

/**
 * StrokeCollection
 **/
StrokeCollection *stroke_collection_new (void);

/**
 * StylusInfo
 **/
StylusInfo *stylus_info_new (void);

/**
 * StylusPoint
 **/
StylusPoint *stylus_point_new (void);

/**
 * StylusPointCollection
 **/
StylusPointCollection *stylus_point_collection_new (void);

/**
 * TextBlock
 **/
TextBlock *text_block_new (void);

/**
 * TimelineCollection
 **/
TimelineCollection *timeline_collection_new (void);

/**
 * TimelineGroup
 **/
TimelineGroup *timeline_group_new (void);

/**
 * TimelineMarker
 **/
TimelineMarker *timeline_marker_new (void);

/**
 * TimelineMarkerCollection
 **/
TimelineMarkerCollection *timeline_marker_collection_new (void);

/**
 * Transform
 **/
Transform *transform_new (void);

/**
 * TransformCollection
 **/
TransformCollection *transform_collection_new (void);

/**
 * TransformGroup
 **/
TransformGroup *transform_group_new (void);

/**
 * TranslateTransform
 **/
TranslateTransform *translate_transform_new (void);

/**
 * TriggerActionCollection
 **/
TriggerActionCollection *trigger_action_collection_new (void);

/**
 * TriggerCollection
 **/
TriggerCollection *trigger_collection_new (void);

#if SL_2_0
/**
 * Types
 **/
/* @GeneratePInvoke */
void types_free (Types *instance);
#endif

#if SL_2_0
/* @GeneratePInvoke */
Type *types_find (Types *instance, Type::Kind type);
#endif

#if SL_2_0
/* @GeneratePInvoke */
Type::Kind types_register_type (Types *instance, const char *name, void *gc_handle, Type::Kind parent);
#endif

#if SL_2_0
/* @GeneratePInvoke */
Types *types_new (void);
#endif

/**
 * UIElement
 **/
UIElement *uielement_new (void);

/**
 * UIElementCollection
 **/
UIElementCollection *uielement_collection_new (void);

#if SL_2_0
/**
 * UserControl
 **/
UserControl *user_control_new (void);
#endif

/**
 * VideoBrush
 **/
VideoBrush *video_brush_new (void);

/**
 * VisualBrush
 **/
VisualBrush *visual_brush_new (void);


G_END_DECLS

#endif
