#include <pebble.h>

Window *window;
TextLayer *text_layer;

void handle_init(void) {	
  // Create text layer.
	text_layer = text_layer_create(GRect(0, 0, 144, 154));

  text_layer_set_text(text_layer, "Configure using the Pebble Watch app on your phone.");
	text_layer_set_font(text_layer, fonts_get_system_font(FONT_KEY_GOTHIC_28_BOLD));
	text_layer_set_text_alignment(text_layer, GTextAlignmentCenter);
	
  // Create window.
	window = window_create();
	layer_add_child(window_get_root_layer(window), text_layer_get_layer(text_layer));
  
  // Show window.
	window_stack_push(window, true);
}

void handle_deinit(void) {
	text_layer_destroy(text_layer);
	window_destroy(window);
}

int main(void) {
	handle_init();
	app_event_loop();
	handle_deinit();
}
