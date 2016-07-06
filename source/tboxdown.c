/* GIMP RGBA C-Source image dump (tboxdown.c) */

const struct {
  unsigned int 	 width;
  unsigned int 	 height;
  unsigned int 	 bytes_per_pixel; /* 2:RGB16, 3:RGB, 4:RGBA */
  unsigned char	 pixel_data[48 * 48 * 4 + 1];
} tboxdown_img = {
  48, 48, 4,
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377"
  "\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305"
  "\305\377\305\305\305\377\305\305\305\377\305\305\305\377\305\305\305\377",
};
