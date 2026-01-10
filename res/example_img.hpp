#ifndef EXAMPLE_IMG_H
#define EXAMPLE_IMG_H

inline constexpr char example_image_type[] = ".png";
inline constexpr size_t example_image_len = 123456;
inline constexpr unsigned char example_image_data[] = { 0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d, /* ... */ };

#endif
