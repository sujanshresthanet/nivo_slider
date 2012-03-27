<?php
/**
 * @file
 * Theme and preprocess functions for Nivo Slider.
 */

/**
 * Implements template_preprocess_hook().
 */
function template_preprocess_nivo_slider_wrapper(&$variables) {
  $variables['theme'] = variable_get('nivo_slider_theme', 'default');
  $variables['banners'] = nivo_slider_banners_markup(nivo_slider_show_banners());
}