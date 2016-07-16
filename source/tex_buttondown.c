const struct {
  unsigned int 	 width;
  unsigned int 	 height;
  unsigned int 	 bytes_per_pixel;
  unsigned char	 pixel_data[48 * 48 * 4 + 1];
} tex_buttondown = {
  48, 48, 4,
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377"
  "\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316"
  "\316\377\316\316\316\377\316\316\316\377\316\316\316\377\316\316\316\377",
};