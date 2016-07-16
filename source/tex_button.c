const struct {
  unsigned int 	 width;
  unsigned int 	 height;
  unsigned int 	 bytes_per_pixel;
  unsigned char	 pixel_data[48 * 48 * 4 + 1];
} tex_button = {
  48, 48, 4,
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377"
  "\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346"
  "\346\377\346\346\346\377\346\346\346\377\346\346\346\377\346\346\346\377",
};