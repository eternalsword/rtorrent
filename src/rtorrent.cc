#include "display/canvas.h"

int main(int argc, char** argv) {
  display::Canvas::init();

  display::Canvas canvas1(0, 0, 20, 0);
  display::Canvas canvas2(15, 5, 20, 10);

  canvas1.erase();
  canvas2.erase();
  canvas1.set_background(A_REVERSE);

  canvas1.print_border('|', '|', '-', '-', '+', '+', '+', '+');
  canvas2.print_border('|', '|', '-', '-', '+', '+', '+', '+');

  canvas1.print(2, 5, "test %i %s", 42, "bar");

  canvas1.refresh();
  canvas2.refresh();
  display::Canvas::do_update();

  while (true);

  display::Canvas::cleanup();

  return 0;
}
