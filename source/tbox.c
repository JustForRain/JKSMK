/* GIMP RGBA C-Source image dump (tbox.c) */

const struct {
  unsigned int 	 width;
  unsigned int 	 height;
  unsigned int 	 bytes_per_pixel; /* 2:RGB16, 3:RGB, 4:RGBA */
  unsigned char	 pixel_data[48 * 48 * 4 + 1];
} tbox_img = {
  48, 48, 4,
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377"
  "\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356"
  "\356\377\356\356\356\377\356\356\356\377\356\356\356\377\356\356\356\377",
};
